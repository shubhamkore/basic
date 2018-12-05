#include <iostream>

using namespace std;
int a=20;
int main()
{
    int a=10;
    cout << "local a is" <<a<< endl;
    cout<<"global a is"<<::a<<endl;
    return 0;
}
