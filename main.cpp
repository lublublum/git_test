#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    int factValue;
    cout << "Git test:" << endl;
    
    cout << "Enter factorial number: ";
    cin >> factValue;
    
    cout << "factorial " << factValue << " = " << fact(factValue) << endl << endl;

    House myHouse;
    float lenght;
    float width;

    cout << "Enter house's lenght ";
    cin >> lenght;

    cout << "Enter house's width ";
    cin >> width;

    myHouse.setWidth(width);
    myHouse.setLenght(lenght);
    cout << "House's square = " << myHouse.getHouseSquare();

    return 0;
}