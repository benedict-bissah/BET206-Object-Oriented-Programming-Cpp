#include <iostream>
using namespace std;

int main() {
    float temperature;

    cout << "Enter cable temperature in degree Celsius: ";
    cin >> temperature;

if (temperature > 70) {
        cout << "Cable overheating detected." << endl;
    }
    else {
        cout << "Cable temperature is within safe range." << endl;
    }

    return 0;
}
