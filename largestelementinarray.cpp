#include <iostream>
using namespace std;

int main() {
    int myArray[5] = {1, 2, 3, 7, 9};
    int largest = myArray[0];
    int slargest = -1; // O[n] time 

//     for (int i = 1; i <= 5; i++) {
//         if (myArray[i] > largest) {
//             largest = myArray[i];
//         }
//     }
// // second largest
//     for (int i = 1; i <= 5; i++) {
//         if (myArray[i] > slargest && myArray[i] != largest) {
//             slargest = myArray[i]; 
//         }
//     }
// optimal approach  
for (int i = 1; i <= 5; i++) {
    if (myArray[i] > largest) {
        slargest= largest;
        largest = myArray[i];

        

    }else if (myArray[i]<largest && slargest<myArray[i]){
        slargest=myArray[i];
    }
}
    


//smallest & ssmallest

    int smallest = myArray[0];
    int ssmallest =INT_MAX; // O[n] time 

    for (int k = 1; k <= 5; k++) {
        if (myArray[k] < smallest) {
            ssmallest= smallest;
            smallest = myArray[k];
    
            
    
        }else if (myArray[k]!=smallest && ssmallest>myArray[k]){
            ssmallest=myArray[k];
        }
    }

    cout<< largest<< endl ;
    cout << slargest<< endl;
    cout<<  smallest<< endl ;
    cout<< ssmallest <<endl;
    return 0;
}
