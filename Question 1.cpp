#include <iostream>
using namespace std;

int main() {
    float pf;

    cout << "Enter power factor (0 to 1): ";
    cin >> pf;

    if (pf < 0 || pf > 1) {
        cout << "Invalid power factor" << endl;
    }
    else if (pf >= 0.00 && pf <= 0.50) {
        cout << "Poor power factor" << endl;
    }
    else if (pf >= 0.51 && pf <= 0.80) {
        cout << "Fair power factor" << endl;
    }
    else if (pf >= 0.81 && pf <= 0.95) {
        cout << "Good power factor" << endl;
    }
    else if (pf >= 0.96 && pf <= 1.00) {
        cout << "Excellent power factor" << endl;
    }

    return 0;
}
