#include<iostream>

using namespace std;
// creating the struct object
struct Pokemon
{
  // can define multiple variables of differeing types
  string name;
  int lvl;
  char type;
  double weight;
  int attack;
  int defense;
};

int main()
{
  Pokemon pikachu;

  cout << "What is pikachu's name?" << endl;
  getline(cin,pikachu.name);
  cout << "What's its level?" << endl;
  getline(cin,pikachu.lvl);
  cout << "What's its weight?" << endl;
  getline(cin,pikachu.weight);
  cout << "What's its attack?" << endl;
  getline(cin,pikachu.attack);
  cout << "What's its defense?" << endl;
  getline(cin,pikachu.defense);

  Pokemon charmander;

  cout << "What is charmanders's name?" << endl;
  getline(cin,charmanders.name);
  cout << "What's its level?" << endl;
  getline(cin,charmanders.lvl);
  cout << "What's its weight?" << endl;
  getline(cin,charmanders.weight);
  cout << "What's its attack?" << endl;
  getline(cin,charmanders.attack);
  cout << "What's its defense?" << endl;
  getline(cin,charmanders.defense);


  cout << pikachu.type << endl;


  return 0;
}
