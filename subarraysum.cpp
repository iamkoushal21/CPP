
// Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 107
// 1 <= Ai <= 1010

// Example:
// Input:
// 2
// 5 12
// 1 2 3 7 5
// 10 15
// 1 2 3 4 5 6 7 8 9 10
// Output:
// 2 4
// 1 5



// In this, additionally all such sub-arays calculated and how many there are such sub arrays



#include <iostream>
#include <vector>
#include <utility>

using namespace std;


int main() {
	//code
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int T;
	int N;
	int sum;
	int firstpos;
	int secondpos;
	int calculatedsum;
	int times;
	int i;
	pair <int , int> p;
	cin >> T;
	
	vector <long int> v(1e7);

	while (T--) {

	    times = 0;
	    firstpos = 0;
	    secondpos = 1;
	    cin >> N >> sum;
	    v.resize(N);
	    for (i = 0; i < N; i++) {
	        cin >> v[i];
	    }
	    if (sum == v[firstpos]) {
	        p = make_pair(firstpos + 1,firstpos + 1);
	        cout << p.first << " " << p.second << endl;
	    } else {
	    	calculatedsum = v[firstpos] + v[secondpos];
	    	while (secondpos < N) {
	    		if (calculatedsum < sum) {
	    			secondpos += 1;
	    			if (secondpos < N) {
						calculatedsum += v[secondpos];
					}
	    		} else if (calculatedsum > sum){
	    			calculatedsum -= v[firstpos];
	    			firstpos += 1;
	    		} else {
	    			times += 1;
					cout << firstpos + 1 << " " << secondpos + 1 << endl; 
					secondpos += 1;
					if (secondpos < N) {
						calculatedsum += v[secondpos];
					}
	    		}
	    	}
	    	if (secondpos == N && times == 0) {
	    		cout << -1 << endl;
	    	} else {
	    		cout << times;
	    	}

		}
	}
	
	return 0;
}