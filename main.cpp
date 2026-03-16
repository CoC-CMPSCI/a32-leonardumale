#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numMale, numFemale, numOthers;
    double percM, percF, percO;
    int total;

    cin >> numMale >> numFemale >> numOthers;

    total = numMale + numFemale + numOthers;

    percM = (double)numMale / total * 100;
    percF = (double)numFemale / total * 100;
    percO = (double)numOthers / total * 100;

    cout << fixed << setprecision(2);
    cout << percM << ", " << percF << ", " << percO;

    return 0;
}
