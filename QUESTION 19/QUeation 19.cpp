#include <iostream>
using namespace std;

int main() {
    float reading, sum = 0, average;
    int count = 0;

    for(int i = 1; i <= 12; i++) {
        cout << "Enter sensor reading " << i << ": ";
        cin >> reading;

        if(reading == 999)
            continue;

        sum += reading;
        count++;
    }

    average = sum / count;

    cout << "Average of valid readings = "
         << average << endl;

    return 0;
}
