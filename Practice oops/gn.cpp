#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float no,frac;
	int integ;
	cout<<"Enter floating no "<<endl;
	cin>>no;
	integ=int(no);
	// frac= no-integ;
    frac=fmod(no,1);
	

	cout<<"The Integer part is "<<integ<<" The fraction part is"<<setprecision(3)<<frac;
	
}
