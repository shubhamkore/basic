#include <iostream>

using namespace std;
int calc(int );
int calc(int,int);



int main()
{
    int s;
    cout<<"enter a number"<<endl;
    cin>>s;
    cout << "square is" <<calc(s) <<endl;

    int a,b;
    cout<<"enter a and b" <<endl;
    cin>>a>>b;
    cout<<"add is"<<calc(a,b);
    return 0;
}
int calc(int s)
{
    return(s*s);
}

int calc(int a ,int b)
{
    return(a+b);

}
