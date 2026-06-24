#include <iostream>
using namespace std;

int main() {
    float reading, total = 0;

    for(int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << ": ";
        cin >> reading;

        if(reading < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        total += reading;
    }

    cout << "Total valid power readings = "
         << total << endl;

    return 0;
}
