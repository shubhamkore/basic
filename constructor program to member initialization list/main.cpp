#include <iostream>

using namespace std;

class demo
{
private:
    const int x,y;
public:
    demo():x(10),y(20){};
    demo(int a,int b):x(a),y(b){};
    void disp(void);
};

void demo::disp()
{
    cout<<x<<endl<<y<<endl;
}

int main()
{
    demo d;
    d.disp();
    demo d2(40,50);
    d2.disp();
   // cout << "Hello world!" << endl;
    return 0;
}
