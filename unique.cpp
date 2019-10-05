#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v(10, 2);
  v.push_back(5);
  v.erase(unique(v.begin(), v.end()), v.end());
  vector<int> :: iterator it;
  for (it = v.begin(); it != v.end(); ++it) {
    cout << *it;
  }
}
