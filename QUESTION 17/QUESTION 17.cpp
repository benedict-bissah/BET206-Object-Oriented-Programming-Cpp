#include <iostream>
using namespace std;

int main() {
    float resistance;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation resistance reading " << i << " (in megaohms): ";
        cin >> resistance;
        
        if (resistance < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}
