# include<iostream>
using namespace std;
class complex{
    public:
    float real,img;
    void getdata(int r,int i)
    {
        real=r;
        img=i;
    }
    void diff(complex c1,complex c2)
    {
        real= c1.real - c2.real;
        img= c1.img- c2.img;
    }
    void print()
    {
        cout<<real<<" + i"<<img;
    }
}; 
int main()
{
    cout<<"Name = Sahil mendiratta\nEnrollment no = 10829802021\n";
    complex c1,c2,c3;
    c1.getdata(5,8);
    c2.getdata(3,4);
    c3.diff(c1,c2);
    c3.print();
}