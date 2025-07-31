#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main (){
    vector<int> arr = {3, 1, -2, -5, 2, -4 } ;
    int  n = arr.size();
    // vector<int> a (n , 0);
    // int posIndex = 0 , negIndex = 1;
    // for( int i = 0 ; i< arr.size(); i++){
    //     if (arr[i]< 0 ){
    //         a[negIndex] = arr[i];
    //         negIndex +=2;
    //     }else{
    //         a[posIndex] = arr [i];
    //         posIndex+=2;
    //     }
    // }

    // brute 




    vector< int > pos ,neg;
    for (int  i = 0 ; i<n ; i++){
        if (arr[i] > 0)  pos.push_back(arr[i]); 
        else neg.push_back(arr[i]);
    }
    vector<int> result(arr.size());
    for (int i = 0; i < arr.size() / 2; i++) {
        result[2 * i] = pos[i];
        result[2 * i + 1] = neg[i];
    }
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // prinitng not done but logic is correct !
}    