#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Store the earliest index only
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};  // Example array
    long long k = 3;  // Target sum

    int result = longestSubarrayWithSumK(a, k);
    cout << "Longest subarray with sum " << k << " is of length: " << result << endl;

    return 0;
}
