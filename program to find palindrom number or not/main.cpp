#include <iostream>

using namespace std;

int main()
{
    int no,rem,rev=0,n;
    cout << "enter a number" << endl;
    cin>>no;

    n=no;
    while(no!=0)
    {
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    if(rev==n)
    {
        cout<<"palindrom number"<<endl;
    }
    else
    {
        cout<<"not an pallindrom number"<<endl;
    }
    return 0;
}
