#include <iostream>

using namespace std;
class a
{
public:
    void adisp(void);

};

void a::adisp()
{
        cout<<"body of a"<<endl;

    }


    class b:public a
    {
    public:
        void bdisp(void);
    };

    void b::bdisp()
    {
        cout<<"body of b"<<endl;
    }
int main()
{
    b B;
    B.adisp();
    B.bdisp();
   // cout << "Hello world!" << endl;
    return 0;
}
