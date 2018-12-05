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


    if(n1>=n2)
    {
        if(n1>=n3)

            cout<<n1<< "is greater"<<endl;
            else
            cout<<n3<< "is greater"<<endl;

        }
        else
        {
        if(n2>=n3)
                cout<<n2<< "is greater"<<endl;
        else
            cout<<n3<< "is greater"<<endl;
        }


    return 0;
}
