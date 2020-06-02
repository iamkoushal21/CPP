// You are given an array A of size N. You need to find all pairs in the array that sum to a number K. If no such pair exists then output will be -1. The elements of the array are distinct and are in sorted order.
// Note: (a,b) and (b,a) are considered same. Also, an element cannot pair with itself, i.e., (a,a) is invalid.

// Input:
// The first line of input is T denoting the number of testcase. T testcases follow. Each testcase contains three lines of input. The first line is the size of array N. The second line contains N elements separated by spaces. The third line contains the sum K.

// Output:
// For each testcase, print all the pairs such that there sum is equal to K.

// Constraints:
// 1 <= T <= 100
// 0 <= Ai <=107
// 2 <= N <= 107
// 0 <= K <= 107

// Examples:
// Input:
// 2
// 7
// 1 2 3 4 5 6 7
// 98
// 7
// 1 2 3 4 5 6 7
// 8
// Output:
// -1
// 1 7 8
// 2 6 8
// 3 5 8



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
	int K;
	int i;
	int total;
	int j;

	cin >> T;
	vector <int> v;


	while (T--) {
		cin >> N;
		v.resize(N);
		for (i = 0; i < N; i++) {
			cin >> v[i];
		}
		cin >> K;
		j = N - 1;
		i = 0;
		total = 0;
		while (i < j) {
			if (v[i] + v[j] == K) {
				total++;
				cout << v[i] << " " << v[j] << " " << K << endl;
				i++;
				j--;
			} else if (v[i] + v[j] > K) {
				j--;
			} else {
				i++;
			}
		}
		if (total == 0) {
			cout << -1 << endl;
		}
	}

	return 0;
}