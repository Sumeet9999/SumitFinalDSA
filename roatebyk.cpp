#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    int n = nums.size();
    k %= n; // handle k > n

    // Step 1: Reverse entire array
    reverse(nums.begin(), nums.end());
    // Step 2: Reverse first k elements
    reverse(nums.begin(), nums.begin() + k);
    // Step 3: Reverse remaining n-k elements
    reverse(nums.begin() + k, nums.end());

    // Print rotated array
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
