#include <iostream>
using namespace std;
int main() {
    float l,b;
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle:";
    cin>>b;
    float area=l*b;
    float perimeter=2*(l+b);
    cout<<"Area of rectangle="<<area<< endl;
    cout<<"Perimeter of rectangle="<<perimeter<<endl;
    return 0;
}