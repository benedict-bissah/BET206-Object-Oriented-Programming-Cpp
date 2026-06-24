#include <iostream>
using namespace std;

int main()
{
	float temperature;
	
	cout << "Enter motor temperature:";
	cin >> temperature;
		
	while (temperature <= 90){
	
	  cout << "Temperature is safe. Continue testing."<<endl;
	  cout << "Enter motor temperature";
	  cin >>temperature;
	}
	cout <<"Motor temperature unsafe. Stop motor test." << endl;
	
	return 0;
}
