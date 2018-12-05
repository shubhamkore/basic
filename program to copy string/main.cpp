#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[50],s2[50];
    cout << "enter string" << endl;
    cin.getline(s1, 50);

    strcpy(s2,s1);

    cout<<"s1="<<s1<<endl;
    cout<<"s2="<<s2<<endl;
    return 0;
}
