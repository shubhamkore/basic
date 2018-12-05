#include <iostream>

using namespace std;

int main()
{
    int r,n,no,sp,p;
    cout << "enter number of rows" << endl;
    cin>>no;
    n=no;

    for(r=1;r<=no;r++)
    {
        for(sp=1;sp<=n;sp++)
        {
            cout<<" ";
        }
        n--;

        for(p=1;p<=r;p++)
        {
            cout<<r<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
