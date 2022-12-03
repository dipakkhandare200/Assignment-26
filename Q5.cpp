//Define a class Date and write a program to Display Dateand initialise date object using Constructors.
#include<iostream>
using namespace std;
class data
{
private:
    int dd,mm,yy;
public:
   dateset(int x,int y,int z)
   {
       dd=x;
       mm=y;
       yy=z;
       cout<<"Date has been created"<<endl;
   }
   void showdata()
   {
       cout<<"The Entered date="<<dd<<"-"<<mm<<"-"<<yy<<endl;
   }
};
int main()
{  int a,b,c;
    data d1;
    cout<<"Enter the date,month,year="<<endl;
    cin>>a>>b>>c;
  d1.dateset(a,b,c);
  d1.showdata();
}
