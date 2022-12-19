#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float Y, step, x, max, min;
    cout << "Enter start x: ";
    cin >> x;
    cout << "Enter max x: ";
    cin >> max;
    cout << "Enter step: ";
    cin >> step;

    cout << "Results of calculations: " << endl;

    cout << setw(10) << "Y" << setw(15) << "x" << endl;
    while (x >= max && x <= min)
    {
        Y = pow(x, 1. / 3) + pow(x, 3.) - 3;
        cout << setw(3) << "Y = " << Y << setw(10) << "x = " << x << endl;
        x = x + step;
        Y = x + step;
    }

    cout << "" << endl;
    cout << "" << endl;

    cout << "Loop break" << endl;
    cout << "End of the programm / stop" << endl;

    system("pause");
    return 0;
}
