#include <iostream>
using namespace std;
int main (){
    int a[5] = {1, 2, 3, 7, 9};
    int temp = a[0];
    for (int i =1; i<5; i++){
        a[i-1] = a [i];
    }
    a[4]=temp;
    for (int i =0 ;i<5 ; i++){
        cout<< a[i];
    }
    

    return 0 ;
}
  