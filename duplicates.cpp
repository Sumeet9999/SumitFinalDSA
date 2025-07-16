#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    int n = nums.size();
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (nums[i] != nums[j]) {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    cout << "New size after removing duplicates: " << i + 1 << endl;
    cout << "Array elements:" << endl;
    for (int k = 0; k <= i; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;

    return 0;
}
