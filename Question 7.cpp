#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cin>> str;
	
	if (str.find('x') !=string::npos)
	cout << "Contains 'x";
	else
	cout<< "Does not contain 'x";
	
	return 0;

