#include <iostream>

using namespace std;

int main()
{
    int a,b,temp;
    cout << "enter 1st number " << endl;
    cin>>a;

    cout<<"enter 2nd number"<<endl;
    cin>>b;
    cout<<"before swapping"<<endl;
    cout<<"a="<< a<<" b= "<< b<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
    return 0;
}
