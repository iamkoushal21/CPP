#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    stack <int> y;
    stack <int> x;
    cin >> N;
    long long int A[N];
    int X[N];
    int Y[N];
    int i;
    for (i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (i = 0; i < N; i++) {
        while (!y.empty() && A[i] > A[y.top()]) {
            Y[y.top()] = i+1;
            y.pop();
        }
        y.push(i);
        while (!x.empty() && A[N-i-1] > A[x.top()]) {
            X[x.top()] = N-i;
            x.pop();
        }
        x.push(N-i-1);
    }
    while (!y.empty()) {
            Y[y.top()] = -1;
            y.pop();
    }
    while (!x.empty()) {
            X[x.top()] = -1;
            x.pop();
    }
    for (i = 0; i < N; i++) {
        cout << X[i] + Y[i] << " ";
    }

    return 0;
}
