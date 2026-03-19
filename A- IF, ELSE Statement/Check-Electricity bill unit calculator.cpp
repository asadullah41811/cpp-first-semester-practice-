#include <iostream>
using namespace std;

int main()
{
    int units;
    int bill;

    cout << "Enter the units consumption: " << endl;
    cin >> units;

    if (units <= 100)
    {
        bill = units * 15;
    }
    else if (units <= 200)
    {
        bill = (100 * 15) + (units - 100) * 25;
    }
    else if (units <= 300)
    {
        bill = (100 * 15) + (100 * 25) + (units - 200) * 35;
    }
    else
    {
        bill = (100 * 15) + (100 * 25) + (100 * 35) + (units - 300) * 45;
    }

    cout << "YOUR TOTAL BILL IS: " << bill << endl;

    return 0;
}
