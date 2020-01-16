#include <iostream>

using namespace std;

int main (){

    int gallonsInTank = 20;
    const float MILES_PER_GALLON_HIGHWAY = 28.9;
    const float MILES_PER_GALLON_TOWN = 23.5;

    cout << "Gas milage in town: " << gallonsInTank * MILES_PER_GALLON_TOWN << endl;
    cout << "Gas milage in highway: " << gallonsInTank * MILES_PER_GALLON_HIGHWAY << endl;

    return 0;
}