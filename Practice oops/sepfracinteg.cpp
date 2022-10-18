#include<iostream>
using namespace std;
int main()
{
	float no,frac;
	int integ;
	cout<<"Enter floating no "<<endl;
	cin>>no;
	integ=int(no);
	frac= no-integ;
	

	cout<<"The Integer part is "<<integ<<" The fraction part is"<<frac;
	
}
