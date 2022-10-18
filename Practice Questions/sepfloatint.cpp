#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = Sahil Mendiratta"<<endl<<"enrollment no = 10829802021"<<endl;
	float frac,a;
	int integ;
	cout<<"enter no in decimal form"<<endl;
	cin >>a;
	integ = int(a);
	frac= a-integ;
	cout<<"integer part is "<< integ<< " Fraction Part is "<<frac;
	
}
