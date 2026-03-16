#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double C, F;

    // Step 1: Input Celsius
    cin >> C;

    // Step 2: Convert to Fahrenheit
    F = (9 / 5.0) * C + 32;

    cout << fixed << setprecision(2);

    // Step 3: Print Fahrenheit
    cout << F << endl;

    return 0;
}
