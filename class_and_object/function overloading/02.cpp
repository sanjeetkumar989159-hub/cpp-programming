//write a program  to overload increment operator for subscribe customer youtube channel and here ++ operator will be overloaded

#include<iostream> 
using namespace std;

class youtube
{
    private :
    int subscribers;
    public :
     youtube (int s)
     {
        subscribers=s;
     }
    void operator ++()
    {
        subscribers++;
    }
    void display()
    {
        cout<<"number of subscribers is :"<<subscribers;
    }

};
int main()
{
    youtube y(500);
    ++y;
    y.display();

}
