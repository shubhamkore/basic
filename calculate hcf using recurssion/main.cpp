#include <iostream>

using namespace std;
int hcf(int x,int y)
{
    if(y!=0)
        return hcf(y,x%y);
    else
        return x;
}
int main()
{
    int n1,n2;
    cout << "enter two numbers" << endl;
    cin>>n1>>n2;

    cout<<"hcf is "<<hcf(n1,n2);
    return 0;
}
