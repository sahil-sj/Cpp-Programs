//WAP to illustrate the use of objects as function arguments in pass
//by value mechanism by performing the addition of two distance which
//are in feets and inches format.
#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
	public:
		void set_distance()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void get_distance()
		{
			cout<<"Distance is feet= "<<feet<<", inches= "<<inches<<endl;
		}
		void add(Distance d1, Distance d2)
		{
			feet = d1.feet + d2.feet;
			inches = d1.inches + d2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{
	cout << "Name: Sahil Mendiratta"<< endl << "Enrollnment no: 10829802021"<<endl;
	Distance d1, d2, d3;
	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	d3.get_distance();
	return 0;
}
