#include <iostream>
using namespace std;

int main() {
    float power, time, energy, totalEnergy = 0;

    for (int i = 1; i <= 8; i++) {
        cout << "\nAppliance " << i << endl;
        cout << "Enter power rating (W): ";
        cin >> power;
        cout << "Enter usage time (hours): ";
        cin >> time;

        energy = power * time;
        totalEnergy += energy;
    }

    cout << "\nTotal energy consumed = " << totalEnergy << " Wh" << endl;

    return 0;
}
