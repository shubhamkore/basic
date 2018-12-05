#include <iostream>

using namespace std;

int main()
{
    int r,n,p;
    cout << "enter number of rows " << endl;
    cin>>n;

    for(r=n;r>=1;r--)
    {
        for(p=1;p<=r; p++)
        {
            cout<<"*";

        }
            cout<<endl;
    }
    return 0;
}
