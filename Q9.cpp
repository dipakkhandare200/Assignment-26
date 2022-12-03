//Define a class Bill and define its member function get() to take detail of customer ,
//calculateBill() function to calculate electricity bill using below tariff :
//Upto 100 unit RS. 1.20 per unit
//From 100 to 200 unit RS. 2 per unit
//Above 200 units RS. 3 per unit.
#include<iostream>
using namespace std;
class Bill
{
private:
    int c_no;
    char c_name[20];
    int units;
    double totalbill;
public:
  void customerdetails()
   {
       cout<<"Enter the customer number=";
       cin>>c_no;
       cout<<endl<<"Enter the name of customer=";
       cin>>c_name;
       cout<<endl<<"Enter the units=";
       cin>>units;
    }
   void calculatebill()
    {
        if(units<=100)
        {
            totalbill=units*1.20;
        }
        else if(units<=200)
        {
            totalbill=100*1.20+(units-100)*2;
        }
        else
        {
          totalbill=100*1.20+200*2+(units-300)*3;

        }
          cout<<"totalbill="<<totalbill<<endl;
    }
   void showdata()
   {
       cout<<"Customer Number ="<<c_no<<endl<<"Coustomer Name="<<c_name<<endl<<"Units="<<units<<endl;

   }
};
int main()
{
  Bill b1;
  b1.customerdetails();
  b1.showdata();
  b1.calculatebill();
}
