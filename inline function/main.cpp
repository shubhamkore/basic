#include <iostream>

using namespace std;
//inline max(int x,int y);
inline max(int x,int y)
{

    return(x>y?x:y);
}

int main()
{
    int a,b;
    cout << "enter two values" << endl;
    cin>>a>>b;

    cout<<"max value is "<< max(a,b)<<endl;
    return 0;
}
