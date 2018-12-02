#include <iostream>

using namespace std;
int cyclic(int *a,int *b,int *c)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;

}
int main()
{
    int a,b,c;
    cout << "enter a=" << endl;
    cin>>a;
    cout << "enter b " << endl;
    cin>>b;
    cout << "enter c " << endl;
    cin>>c;

    cyclic(&a,&b,&c);

    cout<<"cyclic order is"<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;


    return 0;
}
