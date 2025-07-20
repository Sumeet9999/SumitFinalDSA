#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4};
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int counti = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                counti++;
            }
        }
        if (counti == 1) {
            cout << nums[i] << endl;
            break; 
        }
    }

    return 0;
}
