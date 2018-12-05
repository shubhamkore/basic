#include <iostream>

using namespace std;

int main()
{
    int t1=0,t2=1,nexterm=0,n;

    cout << "enter term" << endl;
    cin>>n;
    cout<<t1<<" "<<t2<<" ";
    for(int i=2;i<=n;i++)
    {

        nexterm=t1+t2;
        cout<<nexterm<<" ";
        t1=t2;
        t2=nexterm;


        //cout<<" "<<nexterm<<" ";
    }
    return 0;
}
