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