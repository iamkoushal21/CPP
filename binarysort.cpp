// Sort in one pass when array consists 0, 1 as elements
#include <iostream>
using namespace std;

int main() 
{
	int arr[50];
	int n;
	int i;
	int l, r;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	l = 0;
	r = n - 1;
	while (l < r) {
       		while (arr[l] == 0 && l < r) {
			l++;
		}	
		while (arr[r] == 1 && l < r) {
			r--;
		}

		if (arr[r]) {
			r--;
		} else {
			swap(arr[l++], arr[r--]);
		}
	}
	for (i = 0; i < n; i++) {
		cout << arr[i];
	}

	return 0;
}
