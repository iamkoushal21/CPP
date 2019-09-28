#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i = 5234;
  stringstream ss;
  ss << hex << i; //Conveting this to HExaDecimal
  cout << "0x" << ss.str();

  return 0;
}
