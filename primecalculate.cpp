#include <iostream>

using namespace std;

int primecount(int L, int R, int arr[]) 
{
    int i, count = 0;
    for (i = L; i <= R; i++) {
	    if (arr[i] == 1) {
	        count++;
	    }
	}    
	
	return count;
}

void isPrime(int n) 
{
	int i;
	for (i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			printf("FALSE- NO PRIME");
			
			return;
		}
	}
	printf("PRIME");

	return;
}

int main() {
	int N, i, j, count, L, R, num;
	cin >> N;
	int arr[N+1];
	for (i = 0; i <= N; i++) {
	    arr[i] = 1;   
	}
	arr[0] = 0;
	arr[1] = 0;
	for (i = 2; i*i <= N; i++) {
	    if (arr[i] == 1) {
	        for (j = i * i; j <= N; j += i) {
	            arr[j] = 0;
	        }
	    }
	}
	cin >> L >> R;
	cout << primecount(L,R, arr) << endl;
	cin >> num;
	isPrime(num);

	return 0;
}
