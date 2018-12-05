#include <iostream>

using namespace std;

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
    int x,y;
    cout << "enter two numbers" << endl;
    cin>>x>>y;

    cout<<"before swapping"<<endl;
    cout<<"x= "<<x<<" y= "<<y<<endl;

    swap(&x,&y);

    cout<<"after swapping"<<endl;
    cout<<"x= "<<x<<" y= "<<y<<endl;
    return 0;
}
