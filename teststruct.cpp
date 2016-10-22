#include <iostream>
#include <string>
#include <sstream>

using namespace std;
// creating the struct object
struct Hardware
{
  // can define multiple variables of differeing types
  string model;
  int servicetag;
  char rackreq;
  double memory;
  int procmodel;
  int psureq;
};


int main()
{
  string whichServer;

  Hardware Server1A;

  cout << "What is the model?" << endl;
  getline (cin,Server1A.model);
  cout << "What is the service tag?" << endl;
  getline (cin,Server1A.servicetag);
  cout << "What is the required rack space?" << endl;
  getline (cin,Server1A.rackreq);
  cout << "How much memory is inside the machine?" << endl;
  getline (cin,Server1A.memory);
  cout << "What model proccessors are inside the machine?" << endl;
  getline (cin,Server1A.procmodel);
  cout << "What is the wattage of the power supplies?" << endl;
  getline (cin,Server1A.psureq);

  Harware Server2A;

  cout << "What is the model?" << endl;
  getline (cin,Server2A.model);
  cout << "What is the service tag?" << endl;
  getline (cin,Server2A.servicetag);
  cout << "What is the required rack space?" << endl;
  getline (cin,Server2A.rackreq);
  cout << "How much memory is inside the machine?" << endl;
  getline (cin,Server2A.memory);
  cout << "What model proccessors are inside the machine?" << endl;
  getline (cin,Server2A.procmodel);
  cout << "What is the wattage of the power supplies?" << endl;
  getline (cin,Server2A.psureq);

  cout << "Which server specs would you like to see? Server(1A or 2A)" << endl;
  cin << whichServer;

  if(whichServer == "1A")
  {
    cout << Server1A.model;
    cout << Server1A.servicetag;
    cout << Server1A.rackreq;
    cout << Server1A.memory;
    cout << Server1A.procmodel;
    cout << Server1A.psureq;
  }
  else if(whichServer == "2A")
  {
    cout << Server2A.model;
    cout << Server2A.servicetag;
    cout << Server2A.rackreq;
    cout << Server2A.memory;
    cout << Server2A.procmodel;
    cout << Server2A.psureq;
  }
  else
  {
    cout << "Please select either server 1A or 2A." << endl;
  }



  return 0;
}
