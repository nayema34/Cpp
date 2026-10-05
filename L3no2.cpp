#include<iostream>
using namespace std;
class set{
    int m,n;
    public:
    void input(void);
    void display(void);
};
void set::input(void)
{
    cout<<"Enter the value of m and n: "<<endl;
    cin>>m>>n;
}
void set::display(){
    if(m>=n)
    {
            cout<<"Largest value="<<m<<endl;
    }
    else
    
            cout<<"Largest value="<<n<<endl;
}
    int main()
{
    set A;
    A.input();
    A.display();
    return 0;
}