#include<iostream>
#include<string>

using namespace std;

int main()
{
  string firstName;

  // Get their first name
  cout << "Please enter your first name: " << endl;
  cin >> firstName;

  // Compute their nickname
  string nickName = firstName.substr(0,3);
  string xtraName = firstName.substr(3,999999999999);

  // Output their nickname
  cout << endl;
  cout << "Your nickname is " << nickName << endl;

  // Output leftover from nickname
  cout << "Your left over is " << xtraName << endl;

  // Concentrate nick and extra part of name
  string concName = xtraName + nickName;

  // Output concentrated name
  cout << concName << " is your crazy name!" << endl;

  return 0;
}
