#include <bits/stdc++.h>

using namespace std;

long long unsigned int  binexp(int a, int b) 
{
	if (b ==1) {
		return a;
	}
	if (b % 2 == 0) {
		return  1LLU * binexp(a*a, b/2); 
	} else {
		return a * 1LLU *binexp(a*a, b/2);
	}
}

int binexpmodulo(int a, int b, int m)
{
	if (b == 1) {
		return a % m;
	}
	if (b % 2 == 0) {
		return binexp(a*a, b/2) % m;
	} else {
		return ((a % m) * binexp(a*a, b/2) % m) % m;
	}
}

int fact(int n) 
{
	if (n == 1 || n == 0) {
		return n;
	}
	return n * fact(n-1);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << binexp(a, b) << endl;
//	cout << endl << binexpmodulo(a, b, 3);
	cout << (binexpmodulo(2,3,5) * binexpmodulo(4, 3, 5)) % 5 << endl;
	int n, r, m;
	cout << endl << "nCr modulo m to be computed" << endl << "n: ";
	cin >> n;
	cout << endl << "r: ";
	cin >> r;
	cout << "m: ";
	cin >> m;
	cout << fact(n) << " " 	<< fact(n-r) << " " << fact(r) << endl;
	cout << ((fact(n) % m) * binexpmodulo(fact(n-r), m-2, m) * binexpmodulo(fact(r), m-2, m)) % m;

	return 0;
}
