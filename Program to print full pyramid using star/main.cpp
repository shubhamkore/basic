#include <iostream>

using namespace std;

int main()
{
    int r,p,n,sp,no;
    cout << "enter how many rows you want" << endl;
    cin>>n;
    no=n;

    for(r=1;r<=no;r++)
    {
        for(sp=1;sp<=n;sp++)
        {
            cout<<" ";
        }
        n--;
        for(p=1;p<=r;p++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
