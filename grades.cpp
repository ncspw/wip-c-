#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int gradeb;
	int gradea;
	int students;


	cout << "Please enter the amount of students. " << endl;
	cin >> students;
	cout << "Please enter each grade. " << endl;
	cin >> gradea, gradeb;

	while(gradea != -1){
		gradea = gradea + gradeb;
		cout << "Input the next grade, type -1 to end" << endl;
	}

	if(gradea == -1){
	cout << gradea/students << " is your class' total average." << endl;
	}

	gradeb = gradea/students;
	cout << "Your average class grade is " << gradeb << endl;

		return 0;
}

/*

*/
