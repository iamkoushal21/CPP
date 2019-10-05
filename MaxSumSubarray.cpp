#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i;
  int arr[6] = {-1, 2, 3, -7, 6};
  int sum[6];
  for (i = 0; i < 6; i++) {
      if (i == 0) {
        sum[i] = arr[i];
      } else {
        sum[i] = max(sum[i-1] + arr[i], arr[i]);
      }
  }
  cout << *max_element(sum, sum+6);

  return 0;
}
