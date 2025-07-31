#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        bool leader = true;

        for (int j = i + 1; j < arr.size(); j++) { // ✅ Correct loop condition
            if (arr[j] > arr[i]) {
                leader = false;
                break;
            }
        }

        if (leader)
            ans.push_back(arr[i]);
    }

    // Output leaders
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}
