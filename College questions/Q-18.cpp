//given the account no and two account wap a program to transfer a 
//specified sum from one account to another and then update balance
//in both accounts using thr concept of passing the object.
#include<bits/stdc++.h>
using namespace std;
class bankaccount{
	public:
		float currentbalance;
		int accno;
		float amount;
			static int choice;
			bankaccount(float balance,int accountno)
			{
				currentbalance=balance;
				accno=accountno;
			}
			int transfer(bankaccount b1,bankaccount b2)
			{
				cout<<"Type 1 to transfer to account no "<<b2.accno<<endl;
				cout<<"Type 2 to transfer to account no "<<b1.accno<<endl;
				cin>>choice;
				if(choice==1)
					cout<<"Enter How much money do you want to transfer to account no "<<b2.accno<<endl;
					cin>>amount;
					if(amount<=currentbalance)
					{
						b1.currentbalance-=amount;
						b2.currentbalance+=amount;
					}
					else
						cout<<"Insufficient Balance!"<<endl;
				elif(choice==2){
					cout<<"Enter How much money do you want to transfer to account no "<<b1.accno<<endl;
					cin>>amount;
					if(amount<=currentbalance)
					{
						b2.currentbalance-=amount;
						b1.currentbalance+=amount;
					}
					else
						cout<<"Insufficient Balance!"<<endl;
			}
			void show()
			{
				cout<<"Your Account no: "<<accno<<endl<<"Your Current Balance: "<<currentbalance<<endl;
			}
};
int bankaccount::choice;
int main(){
    cout << "Name: Sahil Mendiratta"<< endl << "Enrollnment no: 10829802021"<<endl;
    	bankaccount b1(15000,4534567),b2(25000,4353212),c(0,0);
    	b1.show();
    	b2.show();
    	c.transfer(b1,b2);
    	b1.show();
    	b2.show();
}
