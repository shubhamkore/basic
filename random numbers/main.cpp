#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i,num;
   // randomize();
    for(i=1;i<10;i++)
    {

        num=(rand()%10);
        cout<<num<<endl;
    }
    return 0;
}
