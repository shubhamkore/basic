#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    cout << "enter first number" << endl;
    cin>>n1;
    cout << "enter second number" << endl;
    cin>>n2;
    cout << "enter third number" << endl;
    cin>>n3;

    if(n1>=n2 && n1>=n3)
        cout<<" largest= "<<n1<<endl;
    else if(n2>=n1 && n2>=n3)
        cout<<" largest= "<<n2<<endl;
    else if(n3>=n1 && n3>=n1)
        cout<<" largest= "<<n3<<endl;
    return 0;
}
