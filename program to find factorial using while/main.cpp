#include <iostream>

using namespace std;

int main()
{
    int n,fact=1;
    cout << "enter the number" << endl;
    cin>>n;

    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<"factorial is= "<<fact<<endl;
    return 0;
}
