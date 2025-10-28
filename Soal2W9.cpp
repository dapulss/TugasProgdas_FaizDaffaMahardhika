#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.1416;

double distance (double x1, double y1, double x2, double y2) {
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return d;
}

double radius (double x1, double y1, double x2, double y2) {
    double r = distance(x1, y1, x2, y2);
    return r;
}

double circumference (double r) {
    double c = 2 * PI * r;
    return c;
}

double area (double r) {
    double a = PI * r * r;
    return a;
}

int main () {

    double x1,y1,x2,y2;
    cout << "Masukkan koordinat titik pusat lingkaran (x1 y1) : ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik pada lingkaran (x2 y2) : ";
    cin >> x2 >> y2;

    cout << "\nJarak antara titik pusat dan titik pada lingkaran = " << distance(x1,y1,x2,y2) << endl;
    cout << "Jari-jari lingkaran = " << radius(x1,y1,x2,y2) << endl;
    cout << "Keliling lingkaran = " << circumference(radius(x1,y1,x2,y2)) << endl;
    cout << "Luas lingkaran = " << area(radius(x1,y1,x2,y2)) << endl;

    return 0;

}