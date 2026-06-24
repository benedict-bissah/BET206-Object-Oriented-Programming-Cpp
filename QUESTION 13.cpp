#include <iostream>
using namespace std;

int main() {
    float resistance;

    cout << "Enter earth resistance reading: ";
    cin >> resistance;

    while (resistance <= 5) {
        cout << "Resistance is acceptable." << endl;
        cout << "Enter earth resistance reading: ";
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system." << endl;

    return 0;
}
