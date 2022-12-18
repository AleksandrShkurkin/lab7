#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float Y, step, x, max;
    cout << "Enter start x: ";
    cin >> x;
    cout << "Enter max x: ";
    cin >> max;
    cout << "Enter step: ";
    cin >> step;

    cout << "Results: " << endl;

    cout << "" << endl;

    cout << setw(5) << "Y" << setw(15) << "x" << endl;
    while (x <= max)
    {
        Y = pow(x, 1. / 3.) + pow(x, 3.) - 3;
        cout << setw(5) << "Y = " << Y << setw(10) << "x = " << x << endl;
        x += step;
    }

    cout << "" << endl;

    cout << "Loop break" << endl;

    system("pause");
    return 0;
}
