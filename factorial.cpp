#include<iostream>
using namespace std;
int main()
{
	cout<<"Name = Sahil Mendiratta"<<endl<<"enrollment no = 10829802021"<<endl;
	int n,fact=1;
	cout<<"Enter no to calculate for factorial\n";
	cin>>n;
	for(int i=1;i<=n;i++)
		fact*=i;
	cout<<"The factorial of "<<n<<" is : "<<fact;
}
