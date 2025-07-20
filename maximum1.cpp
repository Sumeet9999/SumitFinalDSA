#include <iostream>
#include<vector>
using namespace std;
int main (){
    vector <int> nums = {1, 1 ,1 ,1, 0 , 1, 1, 0 , 1, 1};
    int n = nums.size();

    int maxi =0;
    int curr = 0;
    for (int i= 0 ; i<n; i++ ){
        if ( nums[i]== 1){
            curr++;
            maxi = max(maxi, curr);
        }
        else{
            curr=0;
        }

    }
    maxi = max(curr, maxi);
    cout<< maxi;
    return 0;

}

