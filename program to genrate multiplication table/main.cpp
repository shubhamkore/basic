#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout << "enter number" << endl;
    cin>>n;

    for(int i=1;i<=10;i++)
    {
        sum=n*i;
        cout<<n<<" * "<<i<<" = "<<sum<<endl;
    }
    return 0;
}
