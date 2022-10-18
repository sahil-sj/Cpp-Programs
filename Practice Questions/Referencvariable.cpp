#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = Sahil Mendiratta"<<endl<<"Enrollment no = 10829802021"<<endl;
	int a=7;
	int &z=a;
	cout<< "Now Both z and a will refer tovalue of a\n";
	cout<<"The value of a is : "<<a<<endl;
	cout<<"The value of z is also : "<<z;
}
