#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if the complement is already in the map
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i}; // Found the pair
            }

            // Store the current number with its index
            mp[nums[i]] = i;
        }

        return {}; // Return empty if no pair found
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
