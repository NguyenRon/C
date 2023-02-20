#include <iostream>

using namespace std;

int main() {
    double speed, time;

    
    do {
        cout << "Enter the speed of the vehicle (in miles per hour): ";
        cin >> speed;
    } while (speed < 0);

   
    do {
        cout << "Enter the time traveled (in hours): ";
        cin >> time;
    } while (time < 1);

    
    cout << "Hour\tDistance Traveled\n";
    cout << "------------------------\n";
    for (int i = 1; i <= time; i++) {
        double distance = speed * i;
        cout << i << "\t" << distance << endl;
    }

    return 0;
}