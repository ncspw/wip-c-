#include<iostream>
#include<iomanip>

using namespace std;

int main(void)
{	
	double f;
	cout << "Please enter your temperature  "; //enter temp 
	cin >> f; //input variable f
	cout << fixed << setprecision(2) << "Your temp in Kelvin is " << (5.0/9)*(f+459.67) << endl; //output temp in Kelvin
	cout << fixed << setprecision(2) << "Your total in Celcius is " << (5.0/9)*(f-32.0) << endl; //output temp in Celcius
	
	
	return 0;
}

//(f-39)*(5/9) << endl;