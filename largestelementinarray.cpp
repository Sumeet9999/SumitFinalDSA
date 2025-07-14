#include <iostream>
using namespace std;

int main() {
    int myArray[5] = {1, 2, 3, 5, 7};
    int largest = myArray[0];
    int slargest = -1; // O[n] time 

    for (int i = 1; i <= 5; i++) {
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }
// second largest
    for (int i = 1; i <= 5; i++) {
        if (myArray[i] > slargest && myArray[i] != largest) {
            slargest = myArray[i]; 
        }
    }
    cout << slargest;
    return 0;
}
