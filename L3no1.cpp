#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
    public:
    void getdata(int a,float b);//prototype
    void putdata(void)//inline function
    
{
    cout<<"Number: "<<number<<endl;
    cout<<"Cost: "<<cost<<endl;
}
};
void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}
int main()
{
    item x;
    cout<<"\nobject x"<<"\n";
    x.getdata(100, 999.99);
    x.putdata();
    item y;
    cout<<"\nobject y"<<"\n";
    y.getdata(200, 1999.99);
    y.putdata();
    return 0;
}
