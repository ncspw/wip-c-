#include <cmath>
using namespace std;
#include <iostream>

int main()
{
    int carModel;
    std::cout << "Enter your car model number:";
    cin >> carModel;
    if (carModel == 119 || carModel == 179 || carModel >= 189 && carModel <= 195 || carModel == 221 || carModel == 780 ) {
        cout << "Your car is defective. Please have it fixed";
        system("pause");
        exit(0);
    }
    else if(carModel == 0) {
        cout << "Program Complete";
        system("pause");
        exit(0);
    }
    else {
        cout << "Your car is OK.";
        system("pause");
        exit(0);
    }
    return 0;
}
