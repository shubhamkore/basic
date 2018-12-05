#include <iostream>

using namespace std;

int main()
{
    int r,p,n,value=1;
    cout << "enter number of rows" << endl;
    cin>>n;

    for(r=1;r<=n;r++)
    {
        for(p=1;p<=r;p++)
        {
            cout<<value;
            value++;
        }

        cout<<endl;
    }
    return 0;
}
