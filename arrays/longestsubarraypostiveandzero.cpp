#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main (){
    vector<int> nums = {1, 2, 1, 0, 1, 1, 0};
    int right = 0 , left = 0 ;
    int maxLen =0 ;
    int sum = nums[0];
    int n = nums.size();
    int k = 4;
    while(right<n){
        while(left<= right && sum>k){ // running loop form the window is between the left and right or on it and also the sum is not exceeding K ; if exceeding the k if exceeding then increse the k  // 
            sum -= nums[left];
            left ++ ;

        }
        if ( sum == k ){
            maxLen= max(maxLen, right - left +1);
        }
        right ++;
        if(right < n ) sum+= nums[right]; // checking for the right doesnt clears the boundary of the array !
        
        
    }
    cout<<maxLen;
 

    return 0;
}

