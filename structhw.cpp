#include<iostream>

using namespace std;
// creating the struct object
struct Hardware
{
  // can define multiple variables of differeing types
  string model; // Model of server
  string servicetag; // Servicetag for callserve
  int rackreq; // Required U
  double memory; // Memory;Ram, measured in GB
  int procmodel; // Proccessor
  int psureq; // Power supply requirement
};


int main()
{
  string whichServer; // Variable to select which server used

  cout << "Please do not enter units ie(watts, gigabytes, 'U', etc). Only enter letters when specified." << endl << endl;

  Hardware Server1A; // First server

  cout << "What is the model? (Letters & Numbers)" << endl;
  cin >> Server1A.model;
  cout << "What is the service tag? (Letters)" << endl;
  cin >> Server1A.servicetag;
  cout << "What is the required rack space?" << endl;
  cin >> Server1A.rackreq;
  cout << "How much memory is inside the machine?" << endl;
  cin >> Server1A.memory;
  cout << "What model proccessors are inside the machine?" << endl;
  cin >> Server1A.procmodel;
  cout << "What is the wattage of the power supplies?" << endl;
  cin >> Server1A.psureq;

  cout << "Please enter the specs for Server2A" << endl;

  Hardware Server2A; // Second server

  cout << "What is the model? (Letters & Numbers)" << endl;
  cin >> Server2A.model;
  cout << "What is the service tag? (Letters)" << endl;
  cin >> Server2A.servicetag;
  cout << "What is the required rack space?" << endl;
  cin >> Server2A.rackreq;
  cout << "How much memory is inside the machine?" << endl;
  cin >> Server2A.memory;
  cout << "What model proccessors are inside the machine?" << endl;
  cin >> Server2A.procmodel;
  cout << "What is the wattage of the power supplies?" << endl;
  cin >> Server2A.psureq;

  cout << "Which server specs would you like to see? Server(1A or 2A)" << endl;
  cin >> whichServer;

  if(whichServer == "1A") // Goes here if chosen 1A
  {
    cout << Server1A.model << endl;
    cout << Server1A.servicetag << endl;
    cout << Server1A.rackreq << "U" << endl;
    cout << Server1A.memory << "GB" << endl;
    cout << Server1A.procmodel << endl;
    cout << Server1A.psureq << "W" << endl;
  }
  else if(whichServer == "2A") // Goes here if chosen 2A
  {
    cout << Server2A.model << endl;
    cout << Server2A.servicetag << endl;
    cout << Server2A.rackreq << "U" << endl;
    cout << Server2A.memory << "GB" << endl;
    cout << Server2A.procmodel << endl;
    cout << Server2A.psureq << "W" << endl;
  }
  else // If something else is chosen it goes here
  {
    cout << "Please select either server 1A or 2A." << endl;
  }



  return 0;
}
