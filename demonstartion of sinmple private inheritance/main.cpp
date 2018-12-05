#include <iostream>

using namespace std;
class A
{
private:
    int c;
protected:
    int x;
public:
    void setval(int v)
    {

        x=v;
    }
};

class B:private A
{
public :
    void printval(void)
    {
        setval(10);
        cout<<"value of x"<<x<<endl;
    }
};
int main()
{
    B b;
   // b.setval();
    b.printval();
    //cout << "Hello world!" << endl;
    return 0;
}
