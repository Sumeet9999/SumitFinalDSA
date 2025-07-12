#include <iostream>
using namespace std;
int main (){
    for (int i=0; i<=4; i++){
        int a = 1;
        for (int j=0; j<=i; j++){
            cout<<a;
            a = a + 2;

        }
        cout<<endl;
    }
    return 0;
}