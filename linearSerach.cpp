#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    int j;
    cin>>j;
    bool found = false;
    for (int i =0 ; i<5; i++){
        if (nums[i]==j){
            cout<<i;
            found = true;
            break;
        }
        
    }
    if (!found ){
        cout<<"Element not found !";
    }
    

}
