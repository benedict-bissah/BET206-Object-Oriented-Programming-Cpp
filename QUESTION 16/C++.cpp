#include <iostream>
using namespace std;

int main() 
{
	float voltage, current, power;
	char choice;
	
	do
	{
		cout<< "Enter Voltage (V):";
		cin >>  voltage;
		
		cout << "enter current(A):";
		cin >> current;
		
		power = voltage * current;
		
		cout<< "Power=" << power<< "W" << endl;
		
		cout << "Do you want another calculation? (Y/N):";
		cin >> choice;
		 
	}while (choice == 'Y' || choice == 'y');
	
	cout << "Program ended." << endl;
	
	return 0;
}
