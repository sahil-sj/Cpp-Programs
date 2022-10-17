#include<iostream>
using namespace std;
class complex
{
    public : float real;
    float img;
    void getdata();
    void addata(complex c1,complex c2);
    void printdata();
};
void complex::getdata()
{
    cout<<"Enter real part"<<endl;
    cin>>real;
    cout<<"Enter img part"<<endl;
    cin>>img;
}
void complex::addata(complex c1,complex c2)
{
    real=c1.real+c2.real;
    img=c1.img + c2.img;
}
void complex::printdata()
{
    cout<<real<<" + i"<<img;
}
int main()
{
    complex c1,c2,z;
    c1.getdata();
    c2.getdata();
    z.addata(c1,c2);
    cout<<"First number "<<endl;
    c1.printdata();
    cout<<"Second Number"<<endl;
    c2.printdata();
    cout<<"Sum of two complex no is "<<endl;
    z.printdata();
    return 1;
}
