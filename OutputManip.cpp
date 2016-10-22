#include<iostream>
#include<iomanip>
#include<cmath>

// iomanip has several different functions built in to manipulate output
// i.e. rounding numerical values, making the code look pretty, etc.

using namespace std;

int main(void)
{
	/*
	// rounding
	
	cout << fixed << setprecision(5) << M_PI << endl; // outputs pi, fixed gives decimal points only
	*/
	
	cout << "Michael Phelps" << setw(20) << "Ryan Lockperson" << setw(20)	<< "John Cena" << endl;
	return 0;
}

