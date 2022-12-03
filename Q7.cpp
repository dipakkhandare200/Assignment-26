//Define a class Box and write a program to enter length, breadth and height and
//initialise objects using constructor also define member functions to calculate volume of the box
#include<iostream>

using namespace std;
class box
{
public:

int  length,width,height;
double volume(int x,int y,int z)
{
length=x;
width=y;
height=z;
return(length*width*height);

}
cube(int length,int width,int height)
{
cout << "\nA constructor is called" << endl;
}
};
int main()
{
           int a,b,c;
            cout<<"Enter the length,width,height=";
            cin>>a>>b>>c;
            box b1;
            b1.volume(a,b,c);
            cout << "\n length,width,height: " << b1.length<<endl<<b1.width<<endl<<b1.height<< endl;
            cout << "\nThe volume of the box is : " << b1.length*b1.height*b1.width<< endl;
            return(0);

}
