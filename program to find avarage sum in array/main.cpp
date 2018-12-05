#include <iostream>

using namespace std;

int main()
{
    int sum=0,i,num[5],avg,n;

    cout << "enter how many number you want to add" << endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"enter element"<<i<<endl;
        //cout<<i+1;
        cin>>num[i];
        sum=sum+num[i];
    }
    avg=sum/n;
    cout<<"avarage is ="<<avg;

    return 0;
}
