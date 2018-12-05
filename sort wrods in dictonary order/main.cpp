#include <iostream>

using namespace std;

int main()
{
    string str[100],temp;
    cout << "enter 10 words" << endl;
    for(int i=0;i<10;i++)
    {
        getline(cin,str[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++)
    {
        if(str[i]>str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
    }

    cout<<"in dictionary order"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}
