// Given a number R calculate the area of a circle using the following formula:
// Area = π * R2.
// Note: consider π = 3.141592653.
// Input
// Only one line containing the number R (1  ≤  R  ≤  100).
// Output
// Print the calculated area, with 9 digits after the decimal point.
#include <iostream>
#include <iomanip> //to 15 digits after point

using namespace std;

int main() {
    const double PI = 3.141592653;
    double radius,area;
    cin>>radius;
    area=PI*(radius*radius);
    cout<<fixed << setprecision(9) <<area<<endl;
    return 0;
}