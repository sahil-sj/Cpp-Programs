// WAP to print the object no whenever we create an object using static and default constructor.
#include<bits/stdc++.h>
using namespace std;
class counter{
    public:
    static int count;
    counter(){
        count++;
        cout<<"Object no : "<<count<<endl;
    }
};
int counter :: count;
int main(){
    cout << "Name: Sahil Mendiratta"<< endl << "Enrollnment no: 10829802021"<<endl;
    counter o1;
    counter o2;
}
