#include <iostream>

using namespace std;

int main()
{
    int no,n,arms=0,rem;
    cout << "enter a number" << endl;
    cin>>no;

    n=no;

    while(no!=0)
    {
        rem=no%10;
        arms+=rem*rem*rem;
        no/=10;

    }
    if(arms==n)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    {

        cout<<"not an armstrong number"<<endl;
    }
    return 0;
}
