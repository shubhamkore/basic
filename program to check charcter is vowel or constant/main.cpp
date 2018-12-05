#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"enter a charcter"<<endl;
    cin>>ch;
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
    cout<<"vowel"<<endl;
}
        else
        {
            cout<<"constant"<<endl;
        }
    return 0;
}
