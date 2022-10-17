#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    int rno;
    string name;
    void getdata(string n,int r)
    {
        name=n;
        rno=r;
    }
    void printdata()
    {
        cout<<"Name= : "<<name<<endl;
        cout<<"Roll no : "<<rno<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata("john",2);
    s1.printdata();
    return 1;
}