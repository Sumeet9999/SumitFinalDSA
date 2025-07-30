#include <iostream>
#include <vector>

using namespace std;
int main (){
    vector<int> arr = {7,1,5,3,6,4} ;
    int highest = 0;
    for (int i = 0 ; i < arr.size(); i++){
        int sum = 0 ;
        for (int j = i + 1 ; j < arr.size(); j++){
            sum = arr[j] - arr[i];
            highest = max( highest, sum );
        }
    }

    cout<<highest;

    return 0 ;
}    