#include <iostream>

using namespace std;

int main()
{
    int i,num[5],n;

    cout << "enter how many number of data" << endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<i+1<<"enter element"<<endl;
        cin>>num[i];
    }

    for(i=0;i<n;i++)
    {
        if(num[0]<num[i])
            num[0]=num[i];
    }
    cout<<"largest number"<<num[0];
    return 0;
}
