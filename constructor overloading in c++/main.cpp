#include <iostream>

using namespace std;
class demo
{
    int x,y;
public:
    demo();
    demo(int a,int b);
    void input(void);
    void disp(void);
};

demo::demo()
{
    x=10;
    y=20;
}

demo::demo(int a,int b)
{
    x=a;
    y=b;
}
void demo::input()
{
    cout<<"enter x and y"<<endl;
    cin>>x;
    cin>>y;
}
void demo::disp()
{
    cout<<"x and y are"<<x<<endl<<y<<endl;
}
int main()
{
    demo d;
    d.disp();
    demo d2(20,30);
    d2.disp();
    d.input();
    d.disp();
    //cout << "Hello world!" << endl;
    return 0;
}
