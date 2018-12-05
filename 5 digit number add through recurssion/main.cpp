#include <iostream>

using namespace std;
int add(int a);

int main()
{
    int no;
    cout << "enter 5 digit int number" << endl;
    cin>>no;

    cout<<"addition is"<<add(no);
    return 0;
}
int add(int a)
{
    if(a!=0)
        return a%10 + add(a/10);
    else
        return 0;
}
