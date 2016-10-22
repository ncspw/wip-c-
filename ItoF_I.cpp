#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(void)
{	

	int i;
	cout << "Please enter your height in inches" << endl;
	cin >> i;
	cout << "You are " << (i/12) << "ft" << (i%12) << "in" << endl; 

	
	return 0;
}