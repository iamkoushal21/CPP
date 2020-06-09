#include <iostream>
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
	int twice;
	int absent;
	int X;

	cin >> T;
	while (T--) {
		twice = 0;
		absent = 0;
		cin >> N;
		std::vector<int> v(N+1,0);
		for (i = 0; i < N; i++) {
			cin >> X;
			v[X]++;
			if (v[X] == 2) {
				twice = X;
			}
		}

		for (i = 1; i <= N + 1; i++) {
			if (v[i] == 0) {
				absent = i;
				break;
			}
		}
		cout << twice << " " << absent << endl;
	}

	return 0;
}