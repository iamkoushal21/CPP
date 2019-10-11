#include <bits/stdc++.h>

using namespace std;
int main()
{
  int X;
  int n;
  cin >> X >> n;
  double low = 1;
  double high = X;
  double epsilon = 0.000001;
  double mid;
  while (high - low > epsilon) {
    mid = (low + high) / 2;
    if (pow(mid, n) > X) {
      high = mid;
    } else {
      low = mid;
    }
  }
  if (pow(high, n) == X) {
    cout << high;
  } else {
    cout <<low;
  }

  return 0;
}
