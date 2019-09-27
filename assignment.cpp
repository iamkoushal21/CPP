#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int m;
	int a;
	int b;
	int c;
	int i;
	int data;
	vector<int> v1;
	vector<int> v2;

	// vector<int> :: iterator it1;
	// vector<int> :: iterator it2;
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> data;
		v1.push_back(data);
	}

	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> data;
		v2.push_back(data);
	}

	for (auto it1 = v1.begin(); it1 != v1.end(); it1++) {
		a = *it1;
		for (auto it2 = v2.begin(); it2 != v2.end(); it2++) {
			b = *it2;
			c = a + b;
			if ((find(v1.begin(), v1.end(), c) == v1.end()) && (find(v2.begin(), v2.end(), c) == v2.end())) {
				cout << a << " " << b;

				return 0;
			}
		}
	}
	return 0;
}
