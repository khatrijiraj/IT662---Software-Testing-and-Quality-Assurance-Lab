#include <bits/stdc++.h>
using namespace std;

// calculation of the area of a triangle
double calculate_area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Area of the triangle: " << calculate_area(a, b, c) << endl;
    return 0;
}
