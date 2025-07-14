#include <iostream>
using namespace std;

int main() {
    int myArray[5] = {1, 2, 3, 5, 4};
    int largest = myArray[0];

    for (int i = 1; i <= 5; i++) {
        if (myArray[i] > largest) {
            largest = myArray[i];
        }
    }

    cout << "The largest element is: " << largest << endl;

    return 0;
}
