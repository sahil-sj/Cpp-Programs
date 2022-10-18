#include<iostream>
using namespace std;
class employee
{
    public:
    int salary,noOfhours;
    void getinfo(int s,int n)
    {
        salary=s;
        noOfhours=n;
    }
    int addsal()
    {
        if (salary<500)
        {
            salary+=10;
            return salary;
        }
        
    }
    int addwork()
    {
        if (noOfhours>6)
        {
            salary+=10;
            return salary
        }   
    }
};
int main()
{
    employee e1;
    int sal,no;
    cout<<"enter salary"<<endl;
    cin>>sal;
    cout<<"Enter no of hours"<<endl;
    cin>>no;
    e1.getinfo(sal,no);
    int c;
    c= e1.addsal() + e1.addwork() - sal;
    cout<<"The final salary is : "<<c;
    return 0;
}