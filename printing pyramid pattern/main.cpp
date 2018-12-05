#include <iostream>

using namespace std;

int main()
{
    int loop,c,num,no,space;
    cout << "enter rows" << endl;
    cin>>no;
    space=no;

    for(loop=1;loop<=no;loop++)
    {
        num=loop;
        for(c=1;c<=space;c++)
        {
            cout<<" ";
        }
        space--;
        for(c=1;c<=loop;c++)
        {
            cout<<num;
            num++;
        }
        num--;
        num--;

        for(c=1;c<loop;c++)
        {
            cout<<num;
            num--;
        }
        cout<<endl;
    }
    return 0;
}
