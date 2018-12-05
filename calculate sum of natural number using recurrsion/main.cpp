#include <iostream>

using namespace std;
int add(int n)
{
    if(n!=0)
        return n+add(n-1);
    return 0;
}
int main()
{
    int n;
    cout << "enter a positive integer" << endl;
    cin>>n;

    cout<<"sum is:= "<<add(n);
    return 0;
}
