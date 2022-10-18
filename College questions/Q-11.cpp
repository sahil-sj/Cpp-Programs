// wap to returning object from function.
#include<iostream>
using namespace std;
class complex
{
    public:
    int real, img;
    complex diff(complex c1,complex c2)
    {
        complex temp;
        temp.real=c1.real - c2.real;
        temp.img = c1.img-c2.img;
        return temp;
    }
    void getdata(int r, int i)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<" + ("<<img<<")i";
    }
};
int main()
{
    cout<<"Name = Sahil mendiratta\nEnrollment no = 10829802021\n";
    complex c1,c2,c3;
    c1.getdata(5,4);
    c2.getdata(3,8);
    c3=c3.diff(c1,c2);
    c3.print();
}
