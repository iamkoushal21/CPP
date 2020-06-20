//This is Two Pointer problem, O(n) Time complexity and O(1) Space. Array should be sorted
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        int p1 = 0;
        int p2 = 1;
        while (p2 < nums.size()) {
            while ((p2 < nums.size()) && nums[p1] == nums[p2]) {
                p2++;
            }
            if (p2 < nums.size()) {
                if (nums[p2] != nums[p1]) {
                p1++;
                nums[p1] = nums[p2];
                p2++;
                }
            }
        }
        nums.resize(p1+1);

        return p1+1;
}

int main()
{
  int nos;
  int i;
  int data;
  vector <int> nums;
  cin >> nos;
  for (i = 0; i < nos; i++) {
    cin >> data;
    nums.push_back(data);
  }

  removeDuplicates(nums);
  for (i = 0; i < nums.size(); i++) {
    printf("%d ", nums[i]);
  }

  return 0;
}
