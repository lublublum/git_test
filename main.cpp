#include <iostream>
#include "func.h"

using namespace std;

int main()
{
    int factValue;
    cout << "Git test:" << endl;
    
    cout << "Enter factorial number: ";
    cin >> factValue;
    
    cout << "factorial " << factValue << " = " << fact(factValue);

    cout << "test github ecosystem";
    return 0;
}