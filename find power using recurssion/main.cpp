#include <iostream>

using namespace std;
int calculate(int x,int y)
{
    if(y!=0)
        return (x*calculate(x,y-1));
        else
        return 1;
}
int main()
{
    int n1,n2;
    cout << "enter base and power" << endl;
    cin>>n1;
    cin>>n2;


    cout<<"power is="<<calculate(n1,n2);
    return 0;
}
