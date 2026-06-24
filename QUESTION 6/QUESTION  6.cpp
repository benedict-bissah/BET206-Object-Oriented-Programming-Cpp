#include <iostream>
using namespace std;

int main() {
    int choice;
    float PT, ST, PV, SV, ratio;

    cout << "TRANSFORMER RATIO CALCULATOR\n";
    cout << "1. Calculate turns ratio\n";
    cout << "2. Calculate secondary voltage\n";
    cout << "3. Calculate primary voltage\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter Primary Turns: ";
            cin >> PT;
            cout << "Enter Secondary Turns: ";
            cin >> ST;
            ratio = PT / ST;
            cout << "Turns Ratio = " << ratio << endl;
            break;

        case 2:
            cout << "Enter Primary Voltage: ";
            cin >> PV;
            cout << "Enter Primary Turns: ";
            cin >> PT;
            cout << "Enter Secondary Turns: ";
            cin >> ST;
            SV = (PV * ST) / PT;
            cout << "Secondary Voltage = " << SV << " V" << endl;
            break;

        case 3:
            cout << "Enter Secondary Voltage: ";
            cin >> SV;
            cout << "Enter Primary Turns: ";
            cin >> PT;
            cout << "Enter Secondary Turns: ";
            cin >> ST;
            PV = (SV * PT) / ST;
            cout << "Primary Voltage = " << PV << " V" << endl;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
