#include <iostream>

using namespace std;

int main()
{
    string s1,s2,result;
    cout << "1 st string" << endl;
    getline(cin,s1);
    cout<<"2nd string"<<endl;
    getline(cin,s2);

    result=s1 + s2;

    cout<<result<<endl;
    return 0;
}
