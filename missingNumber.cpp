#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 4, 5};
        int n = 5;
        int sum = n*(n+1)/2;
        int s2=0;
        for (int i =0;i<n;i++){
            s2 += nums[i];
        }
        int ans = sum - s2 ;    
        cout<< ans;


}// one of the optimal apporach 
    


    