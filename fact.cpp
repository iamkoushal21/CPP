#include <iostream>

using namespace std;

int main() {

	int N = 7;
	int i;

	// cin >> N;
	
	int fact[N+1];
	fact[0] = 1;
	fact[1] = 1;

	for (i = 2; i <= N; i++) {
		fact[i] = i * fact[i-1];
	}

	cout << fact[N];

	return 0;
}