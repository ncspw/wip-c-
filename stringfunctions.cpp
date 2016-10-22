#include<iostream>
#include<string>

using namespace std;

int main()
{
  string urboi;
  string letter;

  cout << "Please enter ur boi's name: " << endl;
  cin >> urboi;

  cout << "What letter are you looking for?" << endl;
  cin >> letter;

  cout << endl;
  cout << letter << " is located at position " << urboi.find(letter) << endl;

  cout << urboi << " is " << urboi.length() << " letters long." << endl;

  cout << endl;
  string subword = urboi.substr(1,4);
  cout << subword << " is part of " << urboi << endl;

  return 0;
}
