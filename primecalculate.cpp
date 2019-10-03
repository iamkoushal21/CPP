#include <iostream>

using namespace std;

// Between Two Numbers how many Primes available
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


  // SiEVEEEEEE for All prime calculation till N so that in queries section it can be in O(1), just see that it is 1-P or 0-NP  .

  //ONE APPROACH complexity is same almost but simple to understand
  // for (i = 2; i <= N; i++) {
  //   if (arr[i] == 1) {
  //       for (j = 1; j * i <= N; j++) {
  //           arr[i*j] = 0;
  //       }
  //   }
  // }

  // Second Approach
  // for (i = 2; i*i <= N; i++) {
	//     if (arr[i] == 1) {
	//         for (j = i * i; j <= N; j += i) {
	//             arr[j] = 0;
	//         }
	//     }
	// }
  //
  //
	// cin >> L >> R;
	// cout << primecount(L,R, arr) << endl;
	// cin >> num;
	// isPrime(num);
  //

  //For Least Prime Factor of A Number - It will compute for all numbers till this N
  int lp[N+1];
  for (i = 0; i <= N; i++) {
	    lp[i] = 1;
	}
  for (i = 2; i <= N; i++) {
    if (lp[i] == 1) {
        for (j = 1; j * i <= N; j++) {
            if (lp[i*j] == 1) {
                lp[i*j] = i;
            }
        }
    }
  }

  cout << lp[N] << " " << lp[N-1];

  //For Highest Prime Factor of A Number - It will compute for all numbers till this N
  int hp[N+1];
  for (i = 0; i <= N; i++) {
	    hp[i] = 1;
	}
  for (i = 2; i <= N; i++) {
    if (hp[i] == 1) {
        for (j = 1; j * i <= N; j++) {
                hp[i*j] = i;
            }
    }
  }
  cout << endl << hp[N] << " " << hp[N-1];


  // For No. of Prime factors of A number - It will compute for all numbers till this N
  int pf[N+1];
  for (i = 0; i <= N; i++) {
	    arr[i] = 1;
      pf[i] = 0;
	}
  for (i = 2; i <= N; i++) {
    if (arr[i] == 1) {
        for (j = 1; j * i <= N; j++) {
                arr[i*j] = 0;
                pf[i*j]++;
        }
    }
  }
  cout << endl << pf[N] << " " << pf[N-1];


  // For No. of Prime factors of A number - It will compute for all numbers till this N
  int Af[N+1];
  for (i = 0; i <= N; i++) {
      Af[i] = 0;
	}
  for (i = 1; i <= N; i++) {
        for (j = 1; j * i <= N; j++) {
                Af[i*j]++;
        }
  }
  cout << endl << Af[N] << " " << Af[N-1];

  return 0;
}
