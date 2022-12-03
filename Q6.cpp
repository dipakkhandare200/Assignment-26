//Define a class student and write a program to enter student details using constructor and define member function to display all the details.
#include<iostream>
using namespace std;
class student
{
private:
    char name[20];
    int  standard,rollno;
public:
   studentdataset()
   {
       cout<<"Student Name="<<endl;
       cin>>name;
       cout<<"Student class="<<endl;
       cin>>standard;
       cout<<"Student Rollnumber="<<endl;
       cin>>rollno;
       cout<<"Student Data has been created"<<endl;
   }
   void showdata()
   {
       cout<<"The Entered data"<<endl<<"Name="<<name<<endl<<"class="<<standard<<endl<<"Roll No="<<rollno<<endl;
   }
};
int main()
{
  student s1;
  s1.studentdataset();
  s1.showdata();
}
