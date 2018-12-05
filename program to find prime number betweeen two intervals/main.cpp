#include <iostream>

using namespace std;

int main()
{
    int i,j,flag;

    for(i=1;i<100;i++)
    {
        for(j=2;j<i;j++)
        {
            flag=0;
            if(i%j==0)
            {
                flag =1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<" "<<i<<" ";
        }
    }
    return 0;
}
