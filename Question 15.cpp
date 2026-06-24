#include <iostream>
using namespace std;

int main() {
    float voltage, current, power;
    char choice;

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;

        cout << "Enter current (A): ";
        cin >> current;

        power = voltage * current;
        cout << "Power = " << power << " W" << endl;

        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended." << endl;

    return 0;
}


