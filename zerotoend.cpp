#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    int j = 0; 

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

   
    cout << "After moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
