#include <iostream>
using namespace std;

bool predicate(int mid, int M, int N, int A[])
{
	int count = 0;
	int i;
	for (i = 0; i < N; i++) {
		if (A[i] > mid) {
			count += A[i] - mid;
		}
	}
	if (count >= M) {
		return true;
	}

	return false;
}

int main() {
	int N;
	int M;
	int i;
	cin >> N;
	int A[N];
	int low = 0;
	int high = 1e9;
	int mid;
	cin >> M;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	}
	while (high - low > 1) {
		mid = (low+high) / 2;
		if (predicate(mid, M, N, A)) {
			low = mid;
		} else {
			high = mid - 1;
		}
	}
	if (predicate(high, M, N, A)) {
		cout << high;
	} else if (predicate(low, M, N, A)) {
		cout << low;
	} else {
		cout << -1;
	}

  return 0;
}
