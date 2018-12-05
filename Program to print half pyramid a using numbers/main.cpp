#include <iostream>

using namespace std;

int main()
{
    int r,p,n;
    cout << "enter number of rows you want" << endl;
    cin>>n;


    for(r=1;r<=n;r++)
    {
        for(p=1;p<=r;p++)
        {
            cout<<p;
        }
        cout<<endl;
    }
    return 0;
}
