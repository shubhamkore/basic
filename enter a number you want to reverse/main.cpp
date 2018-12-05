#include <iostream>

using namespace std;

int main()
{
    int n,reversen=0,rem;
    cout << "enter a number" << endl;
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        reversen=reversen*10+rem;
        n/=10;
    }

    cout<<"reversed number is "<<reversen;
    return 0;
}
