#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
using namespace std;
int main (){
    vector<int> arr = {3, 3, 3, 3, 1, 2, 2} ;
    map<int , int> mpp;
    // for (int i = 0 ; i< arr.size(); i++ ){
    //     int count = 0; 
    //     for (int j= 0 ; j< arr.size(); j++ ){
    //         if ( arr[i] == arr [j]){
    //             count ++ ; 
    //         }
    //     } 
        
    //     if (count > arr.size()/2){
    //         cout<<arr[i];
    //         break;
    //     }   
    // }


    // better using hashing
    for (int i = 0 ; i<arr.size(); i ++ ){
        mpp[arr[i]]++;
    }
    for (auto it : mpp ){
        if (it.second>(arr.size()/2)){
            cout<<it.first;
        }
    }




    return 0 ; 

}

