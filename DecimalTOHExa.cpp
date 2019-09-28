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
  //Here i tried to padding the output, Y is Padding
  cout << endl << "0x" << left << setfill('Y') << setw(20) << hex << i;
  cout << endl << left <<  setfill('Y') << setw(20) << dec << hexa;

  // Another way to convert
  //only valid for 8, 16, 10 base
  cout << endl << setbase(16) << showbase << 2543;
  cout << endl << setbase(10) << showpos << -15;
  cout << endl << setbase(10) << showpos << i;

  cout.precision(10);
  cout << endl <<fixed << noshowpos << 12.222222;
  return 0;
}
