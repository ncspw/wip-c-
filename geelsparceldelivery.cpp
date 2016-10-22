//Weight Calculator for Geel's Overnight Delivery Parcel
//Written by Nils Skaane 9/15/16

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(void)
{
	//define's ANSI color code

	char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
	char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
	char pink[] = { 0x1b, '[', '1', ';', '3', '5', 'm', 0 };
	char yellow[] = { 0x1b, '[', '1', ';', '3', '3', 'm', 0 };
	char green[] = { 0x1b, '[', '1', ';', '3', '2', 'm', 0 };
	char cyan[] = { 0x1b, '[', '1', ';', '3', '6', 'm', 0 };
    char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };

	//define's variables

	double we,l,w,h; //we=weight, l=length, w=width, h=height
	string name;

	//client inserts their specs right here

	cout << green << "Welcome to Geel's Overnight Delivery Parcel " << normal << endl;

	cout << "Please enter your " << cyan << "name" << normal << endl;
	cin >> name;
	cout << endl << "Please enter the " << cyan << "weight (kg)" << normal << endl;
	cin >> we;
	cout << "Please enter the " << cyan << "length (m)" << normal << endl;
	cin >> l;
	cout << "Please enter the " << cyan << "width (m)" << normal << endl;
	cin >> w;
	cout << "Please enter the " << cyan << "height (m)" << normal << endl;
	cin >> h;

	//appropriate size messages

	if(we <= 28.0){
		cout << endl << "Your package is the appropriate " << green << "weight." << normal << endl;
	}

	if(l <= 1.0){
		cout << "Your package is the appropriate " << green << " length." << normal << endl;
	}

	if(w <= 0.5){
		cout << "Your package is the appropriate " << green << " width." << normal << endl;
	}

	if( h <= 0.5){
		cout << "Your package is the appropriate " << green << " height." << normal << endl;
	}

	//oversize package message

	if(we >= 28.1){
		cout << endl << "Your package is " << yellow << (we-28.0) << red << " kilogram(s) overweight." << normal << endl;
	}

	if(l >= 1.01){
		cout << "Your package is " << yellow << (l-1.0) << red << " meter(s) to long." << normal << endl;
	}

	if(w >= 0.51){
		cout << "Your package is " << yellow << (w-0.5) << red << " meter(s) wide." << normal << endl;
	}

	if( h >= 0.51){
		cout << "Your package is " << yellow << (h-0.5) << red << " meter(s) to tall." << normal << endl;
	}

	//overage fees 2.45$/kg, 2$/m


	if(we >= 28.1){
		cout << endl << fixed << setprecision(2) << "You will be charged $" << red << (we-28.0)*2.45 << normal << " For " << yellow << (we-28.0) << normal << " kilograms extra. " << endl;
	}

	if(l >= 1.01){
		cout << "You will be charged $" << red << (l-1.0)*2.0 << normal << " For " << yellow << (l-1.0) << normal << " meters extra. " << endl;
	}

	if(w >= 0.51){
		cout << "You will be charged $" << red << (w-0.5)*2.0 << normal << " For " << yellow << (w-0.5) << normal << " meters extra. " << endl;
	}

	if( h >= 0.51){
		cout << "You will be charged $" << red << (h-0.5)*2.0 << normal << " For " << yellow << (h-0.5) << normal << " meters extra. " << endl;
	}

	//total overage fees combined

	cout << endl << fixed << setprecision(2) << "Your total overage fee is $" << red << ((we-28.0)*2.45)+((l-1.0)*2.0)+((w-0.5)*2.0)+((h-0.5)*2.0) << normal << endl << endl << endl;

	//end of usage message

	cout << green << "Thank you " << cyan << name << green << " for choosing Geel's Parcel." << normal << endl;

	return 0;
}
