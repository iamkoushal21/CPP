
#include <iostream>
using namespace std;
#include <cmath>



long long int binexp(long long int a, int b, int m) {

    if (b == 1) {
        return a % m;
    } else if (b % 2 == 0) {
        long long int ret = (1LL * binexp(a, b/2, m)) % m;

        return (1LL * (ret % m) * (ret % m)) % m;
    } else {
        long long int ret = (1LL * binexp(a, b/2, m)) % m;

        return (1LL * ((ret % m) * (ret % m) % m) * (a % m)) % m;
    }
}


int main() {
	int T;
	scanf("%d", &T);
    int N, R;

	long long int arr[100000+1];
    int m = 1000000007;
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < 100000+1; i++) {
        arr[i]  = ((arr[i -1] % m) * (i % m)) % m;
    }
	for(int j = 0; j < T; j++) {

    	scanf("%d", &N);
    	scanf("%d", &R);
    	long long int result = 1;
        // cout << arr[10] << " " << binexp(arr[5], 2,5);
        result = (1LL * arr[N]) % m;
        result = (result  * (binexp(arr[N-R], m-2, m))) % m;
        result = (result * binexp(arr[R], m-2, m)) % m;

    	printf("%lld\n", result);
	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail00.

// Write your code here
