#include <iostream>
using namespace std;

int main() {
    float ratedCurrent, startingCurrent;

    cout << "Enter rated current of motor: ";
    cin >> ratedCurrent;

    cout << "Enter starting current of motor: ";
    cin >> startingCurrent;

    if (startingCurrent > 3 * ratedCurrent) {
        cout << "High starting current." << endl;
    }
    else {
        cout << "Starting current is acceptable." << endl;
    }

    return 0;
}

