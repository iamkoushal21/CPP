
#include <iostream>
#include <set> 
#include <vector>

using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int T;
	int N;
	int i;
	int a[7] = {0};
	vector <int> v;
	multiset <int> m;
	cin >> T;
	int inversion;
	int key;
	while (T--) {
		inversion = 0;
		cin >> N;
		v.resize(N,0);
		for (i = 0; i < N; i++) {
			cin >> key;
			m.insert(key);
			if (i != 0) {
				inversion += distance(m.upper_bound(key), m.end());
			}
		}
		cout  << inversion;
	}



    return 0;
}