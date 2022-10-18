#include<iostream>
using namespace std;
class average
{
    public:
    int a,b,c,d;
    average(int a1,int b1 , int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void cavg()
    {
        d=(a+b+c)/3;
    }
    void print()
    {
        cout<<"Average is : "<<d;
    }
};
int main()
{
    average a1(45,46,47);
    a1.cavg();
    a1.print();
}