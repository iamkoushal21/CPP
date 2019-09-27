#include <bits/stdc++.h>

//Precomputation of Factorial
using namespace std;
int main() 
{
	long num;
	cin >> num;
	int T, Q, no;
	double fact[num + 1];
	fact[0] = 1;
	for (int i = 1; i < num + 1; i++) {
		fact[i] = fact[i - 1] * i;
	}
	cin >> T;
	while (T--) {
		cin >> Q;
		while (Q--) {
			cin >> no;
			cout << "fact is " << fact[no]<< endl;
		}
		cout << endl;
	}
}
