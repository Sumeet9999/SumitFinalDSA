#include <iostream>
using namespace std;
int main (){
    // int a[5] = {1, 2, 3, 7, 9};
    // for ( int i = 1; i<5; i++){
    //     if (a[i]>= a[i-1]){
    //         cout<<"Array Is Sorted";
    //     }else{
    //         cout<<"Array is not sorted";
    //     }
    // }



    // roation 
    int nums[] = {1, 2, 3, 7, 9};
        int breakpoints = 0;
        for ( int i = 0 ; i<5; i++){
            if (nums[i]>nums[i+1]) breakpoints++;
        }
        if ( nums[4]> nums[0]) breakpoints++;
        return breakpoints<=1;

    ;

}



//rotation
