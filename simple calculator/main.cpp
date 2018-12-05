#include <iostream>

using namespace std;

int main()
{
    char op;
    float n1,n2;

    cout << "enter two number" << endl;
    cin>>n1>>n2;

    cout<<"enter operator"<<endl;
    cin>>op;

    switch(op)
    {
    case'+':
        cout<<"Addition is = "<<n1+n2;
        break;
    case'-':
        cout<<"subtraction is= "<<n1-n2;
        break;
    case'*':
        cout<<"multiplication is"<<n1*n2;
        break;
    case'/':
        cout<<"division is= "<<n1/n2;
        break;
    default:
        cout<<"INVALID OPRATOR"<<endl;
    }
    return 0;
}
