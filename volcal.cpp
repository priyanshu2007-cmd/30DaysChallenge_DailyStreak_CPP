#include <iostream>
using namespace std;
int main() {
    float r, h, vol;
    cout << "Enter radius :";
    cin >> r;
    cout<< "Enter height :";
    cin>> h;
    vol=3.14*r*r*h;
    cout<<"Volume of the cylinder is: "<< vol;
    return 0;
}