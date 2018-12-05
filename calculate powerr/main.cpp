#include <iostream>

using namespace std;

int main()
{
    int n1,n2,sum=1;
    cout << "enter a number" << endl;
    cin>>n1;
    cout<<"enter power number"<<endl;
    cin>>n2;

    while(n2>0)
    {
        sum=sum*n1;
        n2--;
    }
    cout<<"power is = "<<sum;
    return 0;
}
