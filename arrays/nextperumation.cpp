#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
    int n = arr.size();
    int ind = -1;

    // Step 1: Find the breakpoint
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }

    // Step 2: If no next permutation, reverse entire array
    if (ind == -1) {
        reverse(arr.begin(), arr.end());
        for (int x : arr) cout << x << " ";
        return 0;
    }

    // Step 3: Swap with next greater element on right
    for (int i = n - 1; i > ind; i--) {
        if (arr[i] > arr[ind]) {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    // Step 4: Reverse the right part
    reverse(arr.begin() + ind + 1, arr.end());

    // Print the result
    for (int x : arr) cout << x << " ";
    return 0;
}
