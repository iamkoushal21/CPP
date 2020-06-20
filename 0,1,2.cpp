#include <iostream>
#include <vector>
using namespace std;

int main() {
	//code
	
	int T;
	int N;
	int low;
	int mid;
	int high;
	cin >> T;
	vector <int> v;
	while (T--) {
	    low = 0;
	    mid = 0;
	    cin >> N;
	    high = N - 1;
	    v.clear();
	    v.resize(N,0);
	    
	    for (int i = 0; i < N; i++) {
	        cin >> v[i];
	    }
	    while (mid <= high) {
            switch(v[mid]) {
                case 0: swap(v[mid], v[low]);
                        low++; mid++; break;
                case 1: mid++; break;
                case 2: swap(v[mid], v[high]);
                        high--; break;
                default: break;
            }
	    }
	    
	    for (auto it: v) {
	        cout << it  << " ";
	    }
	    cout <<endl;
	}
	
	return 0;
}