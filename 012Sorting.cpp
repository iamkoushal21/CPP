// Given an array of size N containing 0s, 1s, and 2s; sort the array in ascending order.

// Input:
// First line of input contains number of testcases T. For each testcase, there will be two lines, first of which will contain N. The second lines contains the elements of the array.

// Output: 
// Print sorted array.

// Your Task:
// Complete the function sort012() that takes array and n and sorts the array in place. 

// Constraints: 
// 1 <= T <= 50
// 1 <= N <= 10^5
// 0 <= A[i] <= 2

// Example:
// Input :
// 2
// 5
// 0 2 1 2 0
// 3
// 0 1 0

// Output:
// 0 0 1 2 2
// 0 0 1
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

	//code
	int T;
	int N;
	int i;
	int a[3];
	int b;
	vector<int> v(1e6);

	cin >> T;
	while (T--) {
		for (int i = 0; i < 3; ++i)
		{
			a[i] = 0;			/* code */
		}
	    cin >> N;
	    v.resize(N);

	    for (i = 0; i < N; i++) {
	    	cin >> b;
	    	a[b]++;
	    }

 
		for (i = 0; i < N; i++) {
	    	if(a[0]-- > 0) {
	    		cout << 0;
	    	} else if (a[1]-- > 0) {
	    		cout << 1;
	    	} else  if (a[2]-- > 0) {
	    		cout << 2;
	    	}
	    }	
	    cout << endl;
	}
		return 0;
}