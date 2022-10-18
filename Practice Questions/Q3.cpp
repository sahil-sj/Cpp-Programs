#include<iostream>
#include<string.h>
using namespace std;
class triangle
{
    public:
    int p,b,h;
    triangle(int m,int n,int o)
    {
        p=m;
        b=n;
        h=o;
    }
    void perimeter()
    {
        cout<<"Perimeter of triangle is : "<<p+b+h<<endl;
    }
    void area()
    {
        cout<<"Area of triangle is : "<<0.5*p*b;
    }
};
int main()
{
    triangle t1(3,4,5);
    t1.perimeter();
    t1.area();
    return 1;
}