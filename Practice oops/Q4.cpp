#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l,b;
    rectangle(int le,int br)
    {
        l=le;
        b=br;
    }
    void area()
    {
        cout<<"Area of rectange is : "<<l*b<<endl;
    }
};
int main()
{
    rectangle r1(4,5),r2(5,8);
    r1.area();
    r2.area();
    return 1;
}
