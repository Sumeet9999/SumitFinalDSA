#include <iostream>
using namespace std;
int main (){
    int a[5] = {1, 2, 3, 7, 9};
    for ( int i = 1; i<5; i++){
        if (a[i]>= a[i-1]){
            cout<<"Array Is Sorted";
        }else{
            cout<<"Array is not sorted";
        }
    }
    return 0;

}