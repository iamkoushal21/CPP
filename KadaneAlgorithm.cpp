#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
	int T;
	int N;
	int i;
	vector <int> v;
	int msf = INT_MIN;
	int meh = 0;
	
	cin >>T;
	while (T--) {
	    msf = INT_MIN;
	    meh = 0;
	    cin >> N;
	    v.resize(N);
	    for (i = 0; i < N; i++) {
	        cin >> v[i];
	    }
        for (i = 0; i < N; i++) {
            meh = meh + v[i];
            if (meh < v[i]) {
                meh = v[i];
            } 
            
            if (msf < meh) {
                msf = meh;
            }
        }
        
        cout << msf << endl;
	}
	return 0;
}