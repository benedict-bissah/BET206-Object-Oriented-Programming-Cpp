#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "FUSE SELECTION MENU" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;
    cout << "Select an option (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "5 A Fuse: Suitable for small lighting circuits and low-power devices." << endl;
            break;
        case 2:
            cout << "10 A Fuse: Suitable for sockets, fans, and small appliances." << endl;
            break;
        case 3:
            cout << "13 A Fuse: Suitable for electric kettles, irons, and standard household plugs." << endl;
            break;
        case 4:
            cout << "20 A Fuse: Suitable for water heaters, air conditioners, and medium power equipment." << endl;
            break;
        case 5:
            cout << "32 A Fuse: Suitable for heavy-duty appliances such as cookers and industrial equipment." << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}
