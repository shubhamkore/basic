#include <iostream>

using namespace std;
class demo
{
    int x,y;
public:
    demo();
    void getdata(void);
    void disp(void);
};
demo::demo()
{
    x=0;
    y=0;
}

void demo::getdata()
{
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter y"<<endl;
    cin>>y;

}

void demo::disp()
{
    cout<<"values of a and b are"<<x<<"  "<<y<<endl;
}
int main()
{
    demo d;
    d.getdata();
    d.disp();
    //cout << "Hello world!" << endl;
    return 0;
}
