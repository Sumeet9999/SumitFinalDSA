#include <iostream>
using namespace std;
int main (){
//     for (int i=0; i<4; i++){
//         for (int j=0; j<4; j++){
//             cout<<"*";

//         }
//         cout<<endl;
//     }

int n ;
cin>> n;

for (int i=1; i<=n ; i ++){
    for (int j =1 ; j<=n;j++ ){
        if (i == n/2+1 || j == n/2+1){
            cout<<"*";
        }else( cout<<" ");
           
        
     }
    cout<<endl;
}
    return 0;
}