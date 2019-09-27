#include <bits/stdc++.h>

using namespace std;

int sumDigits(int num)
{
   return num  ? num % 10 + sumDigits(num / 10) : 0 ;
}

int main()
{	
	int num;
	int original;
	int digitsum = 0;
	int y = 0;
	cin >> num;
	original =  num;
	digitsum = sumDigits(num);
	while (digitsum % 4 != 0) {
		original += 4 - digitsum % 4;
		num = original;
		digitsum = 0;	
		digitsum = sumDigits(num);
	}
	cout << original;
}
