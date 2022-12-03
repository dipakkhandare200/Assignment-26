//Define a class Time to represent a time with instance variables h,m and s to store
//hour, minute and second. Also define following member functions
//a. void setTime(int,int,int)
//b. void showTime()
//c. void normalize()
//d. Time add(Time)
#include<iostream>
using namespace std;
class time
{
private:
    int a,b,c;
public:

    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void showdata()
    {
        cout<<a<<":"<<b<<":"<<c<<endl;
    }
    void normalize()
    {
        b=b+c/60;
        c=c%60;
        a=a+b%60;
        b=b%60;
    }
time add( time t)
    {
       time temp;
       temp.c=c+t.c;
       temp.b=b+t.b;
       temp.a=a+t.a;
       temp.normalize();
       return temp;
    }

};
int main()
{
    time t1,t2,t3;
    t1.setdata(5,50,30);
    t2.setdata(7,20,34);
    t3=t1.add(t2);
    t3.showdata();
}

