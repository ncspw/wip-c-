#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// prototypes go here
void input(double & a, double & b); //prototype for i(input)
void output (double a, double b); //prototype for output
void addition(double & a, double & b, double c, double d);
void subtraction(double & a, double & b, double c, double d);
void multiplication(double & a, double & b, double c, double d);
void division(double & a, double & b, double & c, double & d);
void length(double & a, double & b, double & c, double & d);


int main(void)
{
	char choice;
	double A = 0;
	double B = 0;
	double C = 0;
	double D = 0;

	cout << "Welcome to the Complex Number Calculator!" << endl;
	cout << "Here are your options: " << endl;
	cout << "+ (addition)" << endl;
	cout << "- (subtraction)" << endl;
	cout << "* (multiplication)" << endl;
	cout << "/ (division)" << endl;
	cout << "l (length)" << endl;
	cout << "i (new input)" << endl;
	cout << "q (quit)" << endl;

	while(choice != 'q')
	{
		cout << "Enter what you want to do: ";
		cin >> choice;

		switch(choice)
		{
			case 'i':
				input(A,B);
				output(A,B);
				break;
			case '+':
				input(C,D);
				addition(A,B,C,D);
				output(A,B);
				break;
			case '-':
				input(C,D);
				subtraction(A,B,C,D);
				output(A,B);
				break;
			case '*':
				input(C,D);
				multiplication(A,B,C,D);
				output(A,B);
				break;
			case '/':
				input(C,D);
				division(A,B,C,D);
				output(A,B);
				break;
			case 'l':
				input(C,D);
				division(A,B,C,D);
				output(A,B);
				break;
			case 'q':
				cout << "Thanks for using our calculator!" << endl;
				break;
			default:
				cout << "Not a valid choice!" << endl;
				break;
		}
	}

	return 0;
}

// function definitions
void input(double & a, double & b) //input function definitions
{
	cout << "Enter the real part: ";
	cin >> a;
	cout << "Enter the imaginary part: ";
	cin >> b;
}

void output(double a, double b)
{
	cout << fixed << setprecision(2) << "Current value: " << a << " + " << b << "i" << endl;
}
void addition(double & a, double & b, double c, double d)
{
	a = a + c;
	b = b + d;
}
void subtraction(double & a, double & b, double c, double d)
{
	a = a - c;
	b = b - d;
}
void multiplication(double & a, double & b, double c, double d)
{
	a = (a*c) - (b*d);
	b = (b*c) + (a*d);
}
void division(double & a, double & b, double & c, double & d)
{
	a = ((a * c)+(b * d)/((c * c)+(d * d)));
	b = (((b * d)-(a * d))/((c * c)+(d * d)));
}
void length(double & a, double & b, double & c, double & d)
{
	a = sqrt(c * c) + (d * d);
}
