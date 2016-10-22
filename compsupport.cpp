//Computer Support software
//Written by Nils Skaane

//after question answered how to end convo not keep spitting questions out

#include<iostream>
#include<iomanip>
#include<cmath>
#include <time.h>

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

  	string name,os;
    double age;
    //int year = aTime->tm_year + 1900; // Year is # years since 1900

    //gather variable info

    cout << green << "Welcome to" << blue << " Nils " << green << "Computer Repair Shop" << normal << endl;
    cout << "Please enter the following information " << endl;
    cout << cyan << "Name" << normal << endl;
    cin >> name;
    cout << cyan << "Operating System" << normal << endl;
    cin >> os;
    cout << cyan << "Age of Computer (yrs)" << normal << endl;
    cin >> age;
    cout << "Thank you for this information " << endl;


    //current
    if(age <= 4.99){
      string bdsupport2,bsupport2,rip2,nbeep2,hsware2,moffice;
      cout << endl << endl << endl << "Welcome to the" << green << " Current Computer " << normal << "repair area" << endl;
      cout << blue << "------------------------------------------------------------------------------" << normal << endl;
      cout << "Is your computer experienceing hardware or software issues?" << endl;
      cin >> hsware2;

      //software
      if(hsware2 == "software"){
      cout << endl << "Does your issue have to do with Microsoft Office?" << endl;
      cin >> moffice;
          if(moffice == "yes"){
              cout << "Have you updated to " << red << "Microsoft Office " << "2016" << normal << " ?" << endl;
          }
      }//end software

      //hardware
      if(hsware2 == "hardware"){
      cout << endl << "Does your computer beep and the drive spin?" << endl;
      cin >> bdsupport2;
          if(bdsupport2 == "yes"){
              cout << "Please contact information services support." << endl;
          }
      cout << "Does your computer beep but the drive stay stationary?" << endl;
      cin >> bsupport2;
          if(bsupport2 == "yes"){
              cout << "Do you have a solid state drive or hard disk drive?" << endl;
          }
      cout << "Does the computer neither the hardrive spins nor the computer beeps?" << endl;
      cin >> rip2;
          if(rip2 == "yes"){
              cout << "Please bring your computer to the technical repair center." << endl;
          }
      cout << "Does the computer boot without a beep?" << endl;
      cin >> nbeep2;
          if(nbeep2 == "yes"){
              cout << "Please check the speaker connections;" << endl;
          }
      }//end hardware
    }//end if current



    //legacy
    if(age >= 5){
      string bdsupport,bsupport,rip,nbeep,hsware;
      cout << endl << endl << endl << "Welcome to the" << green << " Legacy Computer " << normal << "repair area" << endl;
      cout << blue << "------------------------------------------------------------------------------" << normal << endl;
      cout << "Is your computer experienceing hardware or software issues?" << endl;
      cin >> hsware;

      //hardware
      if(hsware == "hardware"){
      cout << endl << "Does your computer beep and the drive spin?" << endl;
      cin >> bdsupport;
          if(bdsupport == "yes"){
              cout << "Please contact information services support." << endl;
          }
      cout << "Does your computer beep but the drive stay stationary?" << endl;
      cin >> bsupport;
          if(bsupport == "yes"){
              cout << "Please check the boot partion S(ATA)(AS) connections." << endl;
          }
      cout << "Does the computer neither the hardrive spins nor the computer beeps?" << endl;
      cin >> rip;
          if(rip == "yes"){
              cout << "Please bring your computer to the technical repair center." << endl;
          }
      cout << "Does the computer boot without a beep?" << endl;
      cin >> nbeep;
          if(nbeep == "yes"){
              cout << "Please check the speaker connections;" << endl;
          }
      }//end hardware if

      //software
      if(hsware == "software"){
      cout << endl << "Does your issue have to do with Microsoft Office?" << endl;
      }//end software lefacy
    }//end legacy if


	return 0;

}
