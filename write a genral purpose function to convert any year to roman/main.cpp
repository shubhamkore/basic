#include <iostream>

using namespace std;
int roman(int yr)
{
    if(yr>=1000)
    {
        cout<<"M";

    roman(yr-1000);

    }

    else if(yr>=500)
    {
        cout<<"D";

    roman(yr-500);

    }

    else if(yr>=100)
    {
        cout<<"C";

    roman(yr-100);

    }

    else if(yr>=50)
    {
        cout<<"L";

    roman(yr-50);

    }

    else if(yr>=10)
    {
        cout<<"X";

    roman(yr-10);

    }
     else if(yr>=5)
    {
        cout<<"V";

    roman(yr-5);

    }

    else if(yr>=1)
    {
        cout<<"I";

    roman(yr-1);

    }

    cout<<"\n";



}

int main()
{
    int yr;
    cout << "enter year " << endl;
    cin>>yr;
roman(yr);
    //cout<<"  converted into roman "<<roman(yr)<<endl;
    return 0;
}
