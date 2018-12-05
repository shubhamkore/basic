#include <iostream>

using namespace std;

int main()
{
    int yr;
    cout << "enter year" << endl;
    cin>>yr;

    if(yr%4==0)
    {
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not an leap year"<<endl;
    }
    return 0;
}
