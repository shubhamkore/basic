#include <iostream>

using namespace std;
int fact(int n)
{
    if(n>0)
        return n*fact(n-1);
    else
        return 1;
}
int main()
{
    int n;
    cout << "enter a positive integer" << endl;
    cin>>n;

    cout<<"fact is= "<<fact(n);
    return 0;
}
