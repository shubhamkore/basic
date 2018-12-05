#include <iostream>

using namespace std;
class demo
{
    int x,y;
public:
    demo(int a,int b);
    void input(void);
    void disp(void);
};

demo::demo(int a,int b)
{
    x=a;
    y=b;
}
void demo::input()
{
    cout<<"enter value of x and y"<<endl;
    cin>>x;
    cin>>y;
}

void demo::disp()
{
    cout<<"the value are"<<x<<"  "<<y<<endl;
}
int main()
{
    demo d(10,20);
    d.disp();
    d.input();
    d.disp();
   // cout << "Hello world!" << endl;
    return 0;
}
