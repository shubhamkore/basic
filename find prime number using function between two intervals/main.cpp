#include <iostream>

using namespace std;
int checkprime(int );

int main()
{
    int n1,n2;
    bool flag;
    cout << "enter two positive number" << endl;
    cin>>n1>>n2;
    for(int i=n1+1;i<n2;i++)
    {
        flag=checkprime(i);

        if(flag)

            cout<<" " <<i<<" ";

    }
    return 0;
}
int checkprime(int n)
{
    bool flag=true;

    for(int j=2;j<=n;j++)
    {
        if(n%j==0)
        {
            flag= false;
            break;
        }
        return flag;
    }

}
