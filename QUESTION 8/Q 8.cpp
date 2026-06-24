#include <iostream>
using namespace std;

int main() {
    float L1, L2, L3, average;

    for (int i = 1; i <= 6; i++) {
        cout << "\nSet " << i << endl;
        cout << "Enter Line 1 current: ";
        cin >> L1;
        cout << "Enter Line 2 current: ";
        cin >> L2;
        cout << "Enter Line 3 current: ";
        cin >> L3;

        average = (L1 + L2 + L3) / 3;
        cout << "Average current for set " << i << " = " << average << " A" << endl;
    }

    return 0;
}
