//Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class counter
{
private:
    int count;
public:
    counter()
    {
        count=0;
    }
    void inc_count()
    {
        count++;
    }
    int get_count()
    {
        return count;
    }
};
int main()
{
    counter c1;
    cout<<"Before calling counter function,count="<<endl;
    cout<<c1.get_count()<<endl;
    c1.inc_count();
    cout<<"After calling counter function ,count="<<endl;
    cout<<c1.get_count()<<endl;

}
