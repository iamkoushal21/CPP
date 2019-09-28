#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i = 2543;
  stringstream ss;
  ss << hex << i; //Conveting this to HExaDecimal
  cout << "0x" << ss.str();


  //HExaDecimal to Decimal Conversion
  string str = "0x9ef";
  int j;
  stringstream ss2;
  ss2 << hex << str;
  ss2 >> j;
  cout << endl << j;


//Another simple way to convert
  int hexa = 0x9ef;
  cout << endl << "0x" << hex << i;
  cout << endl << dec << hexa;

  return 0;
}
