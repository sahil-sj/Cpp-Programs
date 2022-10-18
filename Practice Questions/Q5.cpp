#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l,b;
    void setdim()
    {
        cout<<"Enter length and breadth respectively: "<<endl;
        cin>>l>>b;
    }
    void getarea()
    {
        cout<<"The area of rectange is : "<<l*b<<endl;
    }
};
int main()
{
    rectangle r;
    r.setdim();
    r.getarea();
    return 1;
}