#include<iostream>
using namespace std;
class employee
{
    public:
    int yOfjoin,salary;
    string name,address;
    employee(string n,int y,int s,string a)
    {
        name=n;
        yOfjoin=y;
        salary=s;
        address=a;
    }
    void print()
    {
        cout<<name<<"\t"<<yOfjoin<<"\t"<<salary<<"\t"<<address<<endl;
    }
};
int main()
{
    employee e1("robert",1994,35000,"64C WallsStreat"),e2("robt",194,3500,"60C WallsStreat"),e3("robt",19,5000,"64C WallsStrt");
    cout<<"Name\tYear\tSalary\tAddress\n";
    e1.print();
    e2.print();
    e3.print();
    return 0;
}