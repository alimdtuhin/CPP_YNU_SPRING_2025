#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double radius, volume;

    cout << "Calculate the volume of a sphere :" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Input the radius of a sphere : ";
    cin >> radius;

    volume = (4.0 / 3) * M_PI * pow(radius, 3);

    cout << fixed << setprecision(2);
    cout << "The volume of a sphere is : " << volume << endl;

    return 0;
}
