#include <iostream>

using namespace std;

int main()
{
    int a=10,c,d;
    int &ref=a;

    c=a+30;
    d=ref+40;
     cout << "sum is" << c <<endl;
      cout << "Hello world!" << d<< endl;
   /* cout << "value of a" << a<< endl;
     cout <<" value of ref"<< ref<<endl;
     cout<<"address of a "<< &a<<endl;
    cout << "address of ref " << &ref << endl;
    */

    return 0;
}
