#include <iostream>

using namespace std;

int main()
{
    int i,rem,num1,num2,sum,num;
    cout<<"enter first number"<<endl;
    cin>>num1;

    cout<<"enter second  number"<<endl;
    cin>>num2;

    for(i=num1;i<=num2;i++)
    {
        sum=0;
        num=i;
        for(;num>0;)
        {
            rem=num%10;
            sum=sum+rem*rem*rem;
            num/=10;

        }
        if(sum==i)
        {
            cout<<" "<< i <<" ";
        }
    }

    return 0;
}
