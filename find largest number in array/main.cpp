#include <iostream>

using namespace std;

int main()
{
    int i,n;
    int arr[100];
    cout << "enter number elements you want to enter" << endl;
    cin>>n;

    for(i=0;i<=n;i++)
    {
        cout<<"enter elements "<<i+1<<endl;
        cin>>arr[i];
    }

    for(i=1;i<=n;i++)
    {
        if(arr[0]<arr[i])
            arr[0]=arr[i];
    }
    cout<<"largest element is"<<arr[0]<<endl;
    return 0;
}
