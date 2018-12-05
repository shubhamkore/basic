#include <iostream>

using namespace std;

int main()
{
    int n,no,sp,r,p,v=1;
   cout << "enter rows" << endl;
    cin>>no;
    n=no;

    for(r=no;r>=1;r--)
    {
        for(sp=1;sp<=v;sp++)
        {
            cout<<" ";
        }

        v++;

        for(p=1;p<=r;p++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
