#include <iostream>
using namespace std;
int main (){
int n ;
int nst=1;
cin>> n;

for (int i=1; i<=n ; i ++){
    for (int j =1 ; j<=n-i;j++ ){ // n-i for space or you can say ulta triangle !
        cout<<" ";
        }
    for ( int k = 1; k<=nst; k++){ // odd numbers + 2 for stars 
        cout << "*";
    }  
    nst = nst + 2;  
    cout<<endl;
}



    return 0;
}



