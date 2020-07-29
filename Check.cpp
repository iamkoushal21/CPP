#include <iostream>
#include <string.h>
#include <queue>
#include <algorithm>
#include <unordered_map>


using namespace std;
typedef struct sb {
		int a;
		int b;
	}sb;

bool sa(sb a, sb b) {
		return a.a > b.a;
}

int main() {

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	typedef pair<char, int> pi; 

	// int a = 11;
	string s1 = "abcd";
	string s2 = "b";
	char *p;
	char s3[100];
	char a[] = "aabc";
	char b[] = "a";

	priority_queue <pi, vector <pi>, greater<pi> > pq;
	pq.push(make_pair('a',1));
	pq.push(make_pair('1',1));
	pq.push(make_pair('b',1));

	cout << strlen(a);

	cout << pq.top().first << endl;
	string s;
	getline(cin, s);

	cin.get(a,100);

	cout << s << endl;
	

	//Conversion of String to char array
	cout << strlen(s.c_str());
	strcpy(a, s.c_str());


	cout << a << endl;
	s = b;
	
	// p = strstr(a, "Ram");
	// cout << distance(a, p);


	// int k[10] = {1,4,2,5}; 

	// sort(a, a + strlen(a));
	cout << a << endl;

	bool c = 1;
	cout << c;



	
	sb ab[2];
	ab[0].a = 1;
	ab[0].b  = 5;
	ab[1].a = 3;
	ab[1].b  = 3;



	
	sort(ab, ab+2, sa);

	cout << "Intervals sorted by start time : \n"; 
    for (int i=0; i<2; i++) 
       cout << "[" << ab[i].a << "," << ab[i].b 
            << "] "; 
  

	// typedef struct sb sb1;
	// {
		
	// };
	// unordered_map <int, sb> m;

	return 0;
}