#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 3; 
    int len = 0 ; 
    int n = nums.size();
    for ( int i = 0 ; i<n; i++){
        int sum =0 ;
        for (int j = i; j<n ; j++){
            sum = sum + nums[j];
            if (sum == k ){
                len = max(len, j-i+1);


                
            }

        }
    }
    cout<< len ;
    




    return 0 ; 

}
