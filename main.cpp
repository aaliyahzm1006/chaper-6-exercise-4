
#include <iostream>
#include <iomanip>
using namespace std;

double kineticEnergy(double mass, double velocity)
{
    return 0.5 * mass * velocity * velocity;
}

int main()
{
    double mass, velocity;

    cout << "Enter the object's mass in kilograms: ";
    cin >> mass;

    cout << "Enter the object's velocity in meters per second: ";
    cin >> velocity;

    double energy = kineticEnergy(mass, velocity);

    cout << fixed << setprecision(2);
    cout << "Kinetic Energy: " << energy << " joules" << endl;

    return 0;
}
