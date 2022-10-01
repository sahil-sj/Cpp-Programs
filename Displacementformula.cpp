#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = Sahil Mendiratta"<<endl<<"enrollment no = 10829802021"<<endl;
	int s, u, t, a;
	cout << "enter the value of initial velocity, time and accerlation respectively" << endl;
	cin >> u >> t >> a;
	s = (u*t)+ (a*(t*t));
	cout << "Displacement = " << s << endl;
}
