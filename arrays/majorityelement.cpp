#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        count = 0;
        for (int num : nums) {
            if (num == candidate) count++;
        }

        if (count > nums.size() / 2) return candidate;

        return -1; 
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << "Majority Element: " << s.majorityElement(nums) << endl;
    return 0;
}
