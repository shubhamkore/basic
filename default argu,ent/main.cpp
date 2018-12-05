#include <iostream>

using namespace std;
int add(int x,int y=30,int z=20)
{
    return(x+y+z);
}

int main()
{

    /*cout << add(100) << endl;
    cout<< add(10,20)<<endl;
    cout<<add(10,20,30)<<endl;
    */
    int a,b;
     cout << "enter value of a" << endl;
     cin>>a;
      cout << "B" << endl;
      cin>>b;



      cout<<"add"<<add(a,b);
    return 0;
}
