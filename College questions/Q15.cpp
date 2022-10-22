// The programdistance.cpp illustrates the use of objects as function arguments in pass y value mechanism .
// It performs the addition of distance in feet and inches.
#include<iostream>
using namespace std;
class distanc
{
    public:
    int feet,inches;
    void setdistance()
    {
        cout<<"Enter distance in feets\n";
        cin>>feet;
        cout<<"Enter distance in inches\n";
        cin>>inches;
    }
    void add(distanc d1,distanc d2)
    {
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
    }
    void getdata()
    {
        cout<<"Feet = "<<feet<<" Inches = "<<inches;
    }
};
int main()
{
    distanc d1,d2,d3;
    d1.setdistance();
    d2.setdistance();
    d3.add(d1,d2);
    d3.getdata();
}
