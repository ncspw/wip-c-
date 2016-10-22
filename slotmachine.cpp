#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
  //generate random numbers
  srand(time(NULL));
  //define variables tokens=# of tokens for gambling, spin=spins, pull=yes pull or no pull
  string pull;
  int tokens=100;


  cout << "You have " << tokens << " tokens. Pull? Y/N" << endl;
  cin >> pull;
  //go to while if they type "Y"
while((pull == "Y" || pull == "y" || pull == "yes" || pull == "yea" || pull=="ya")&&(tokens >= 1))
  {
    tokens=tokens-1;
    int sp1 = (rand() % 3) + 1;
    int sp2 = (rand() % 3) + 1;
    int sp3 = (rand() % 3) + 1;

    cout << sp1 << " | " << sp2 << " | " << sp3 << endl;

    if(sp1 == 1 && sp2 == 1 && sp3 == 1)
    {
      tokens=tokens+4;
      cout << "You won 4 tokens!" << endl;
      cout << "You have " << tokens << " tokens." << endl;
    }
    else if(sp1 == 2 && sp2 == 2 && sp3 == 2)
    {
      tokens=tokens+8;
      cout << "You won 8 tokens!" << endl;
      cout << "You have " << tokens << " tokens." << endl;
    }
    else if(sp1 == 3 && sp2 == 3 && sp3 == 3)
    {
      tokens=tokens+12;
      cout << "You won 12 tokens!" << endl;
      cout << "You have " << tokens << " tokens." << endl;
    }
    else
    {
      cout << "You lost." << endl;
      cout << "You have " << tokens << " tokens.  Pull? Y/N" << endl;
      cin >> pull;
    }

  }
  if((pull != "Y" || pull != "y" || pull != "yes" || pull != "yea" || pull != "ya") || (tokens <= 1))
  {
    cout << "Thanks for playing! You have " << tokens << " tokens left." << endl;

  }





  return 0;
}
