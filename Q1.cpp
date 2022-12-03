//1. Define a class Complex to represent a complex number with instance variables a and
//b to store real and imaginary parts. Also define following member functions
//a. void setData(int,int)
//b. void showData()
//c. Complex add(Complex)
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
   complex add( complex c)
    {
       complex temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return temp;
    }
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"real="<<a<<"imagenary="<<b<<endl;
    }

};
int main()
{
    complex c1,c2,c3;
    c1.setdata(5,7);
    c2.setdata(7,8);
    c3=c1.add(c2);
    c3.showdata();
}

