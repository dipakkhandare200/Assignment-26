//Define a class Bank and define member functions to read principal , rate of interest
//and year. Another member functions to calculate simple interest and display it.
//Initialise all details using constructor.
#include<iostream>
using namespace std;
class Bank
{
private:
    float p,r,t,si,amount;
public:
  void bankread()
   {
       cout<<"The Enter principle amount=";
       cin>>p;
       cout<<endl<<"Enter rate of intrest=";
       cin>>r;
       cout<<endl<<"Enter the no of years=";
       cin>>t;
    }
   float simple_intrest()
    {
        si=(p *r*t)/100;
          cout<<"simple intrest="<<si<<endl;
    }
   void showdata()
   {
       cout<<"principle amount ="<<p<<endl<<"rate of intrest="<<r<<endl<<"no of years you want="<<t<<endl;

   }
};
int main()
{
  Bank b1;
  b1.bankread();
  b1.showdata();
  b1.simple_intrest();
}
