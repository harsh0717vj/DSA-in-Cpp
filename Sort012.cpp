#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int i = 0, j = 0, k = nums.size() - 1;
    while (j <= k) {
        if (nums[j] == 2) {
            swap(nums[j], nums[k]);
            k--;
        }
        else if (nums[j] == 0) {
            swap(nums[j], nums[i]);
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    for (int x : nums) cout << x << " ";
}
