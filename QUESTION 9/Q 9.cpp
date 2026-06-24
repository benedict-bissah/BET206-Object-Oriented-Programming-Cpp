#include <iostream>
using namespace std;

int main() {
    int result, passed = 0, failed = 0;

    for (int i = 1; i <= 15; i++) {
        cout << "Enter result for component " << i << " (1 = pass, 0 = fail): ";
        cin >> result;

        if (result == 1) {
            passed++;
        } else {
            failed++;
        }
    }

    cout << "\nPassed components = " << passed << endl;
    cout << "Failed components = " << failed << endl;

    return 0;
}
