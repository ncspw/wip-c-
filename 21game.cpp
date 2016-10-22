#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
  srand(time(NULL)); // roll from time
  int roll1 = rand() % 10 + 1;  // roll in range of 1-10
  int roll2 = rand() % 10 + 1;
  int roll3 = rand() % 10 + 1;
  int roll4 = rand() % 10 + 1;  // roll in range of 1-10
  int roll5 = rand() % 10 + 1;  // roll in range of 1-10
  int roll6 = rand() % 10 + 1;
  int roll7 = rand() % 10 + 1;

  int cards=0; // define int card to equal 0
  int rollTotal1=0;
  int rollTotal2=0;
  int rollResult1=0;
  int rollResult2=0;
  int points1=0;
  int points2=0;
  int draw=0;

  string result;
  string playAgain;

  cout << "Would you like to play? (Y/N) ";
  cin >> playAgain;

  while(playAgain == "Y" || playAgain == "y" || playAgain == "yes" || playAgain == "yea")
  {
    cout << "How many cards do you want? " << endl;
    cin >> cards;
  if(cards == 4)
  {
    cards = 0;
    playAgain = "n";
    cout << "You " << roll1 << "|" << roll2 << "|" << roll3 << "|" << roll4 << endl;
    rollTotal1 = roll1 + roll2 + roll3 + roll4;
    cout << "AI " << roll5 << "|" << roll6 << "|" << roll7 << endl;
    rollTotal2 = roll5 + roll6 + roll7;

    rollResult1 = 21 - rollTotal1;
    rollResult2 = 21 - rollTotal2;

    if(rollTotal1 > 21)
    {
      result = "AI";
      points2++;
    }
    else if(rollTotal2 > 21)
    {
      result = "You";
      points1++;
    }
    else if(rollResult1 > rollResult2)
    {
      result = "AI";
      points2++;
    }
    else if(rollResult2 > rollResult1)
    {
      result = "You";
      points1++;
    }
    else if(rollResult1 == rollResult2)
    {
      result = "Draw";
      draw++;
    }

    cout << "You have " << rollTotal1 << ", I have " << rollTotal2 << ". " << result << " won this one! Play again (Y/N)" << endl;
  }
  else if(cards == 3)
  {
    cards = 0;
    playAgain = "n";
    cout << "You " << roll1 << "|" << roll2 << "|" << roll3 << endl;
    rollTotal1 = roll1 + roll2 + roll3;
    cout << "AI " << roll1 << "|" << roll2 << "|" << roll3 << endl;
    rollTotal2 = roll1 + roll2 + roll3;

    rollResult1 = 21 - rollTotal1;
    rollResult2 = 21 - rollTotal2;

    if(rollTotal1 > 21)
    {
      result = "AI";
      points2++;
    }
    else if(rollTotal2 > 21)
    {
      result = "You";
      points1++;
    }
    else if(rollResult1 > rollResult2)
    {
      result = "AI";
      points2++;
    }
    else if(rollResult2 > rollResult1)
    {
      result = "You";
      points1++;
    }
    else if(rollResult1 == rollResult2)
    {
      result = "Mr.Draw";
      draw++;
    }

    cout << "You have " << rollTotal1 << ", I have " << rollTotal2 << ". " << result << " won this one! Play again (Y/N)" << endl;
  }
  else if(cards == 2)
  {
    cards = 0;
    playAgain = "n";
    cout << "You " << roll1 << "|" << roll2 << endl;
    rollTotal1 = roll1 + roll2;
    cout << "AI " << roll1 << "|" << roll2 << "|" << roll3 << endl;
    rollTotal2 = roll1 + roll2 + roll3;

    rollResult1 = 21 - rollTotal1;
    rollResult2 = 21 - rollTotal2;

    if(rollTotal1 > 21)
    {
      result = "AI";
      points2++;
    }
    else if(rollTotal2 > 21)
    {
      result = "You";
      points1++;
    }
    else if(rollResult1 > rollResult2)
    {
      result = "AI";
      points2++;
    }
    else if(rollResult2 > rollResult1)
    {
      result = "You";
      points1++;
    }
    else if(rollResult1 == rollResult2)
    {
      result = "Draw";
      draw++;
    }

    cout << "You have " << rollTotal1 << ", I have " << rollTotal2 << ". " << result << " won this one! Play again (Y/N)" << endl;
  }
  cout << "Would you like to play? (Y/N) ";
  cin >> playAgain;

  if(playAgain == "N" || playAgain == "n")
  {
    cout << "AI Wins: " << points2 << endl;
    cout << "Your Wins: " << points1 << endl;
    cout << "Draws: " << draw << endl;
  }
  }

  return 0;
}
