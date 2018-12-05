#include <iostream>

using namespace std;

int main()
{
    int r,c,i,j,a[20][20],b[20][20],sum[20][20];

    cout << "enter how many rows" << endl;
    cin>>r;

    cout << "enter how many column" << endl;
    cin>>c;

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        cout<<"enter elements of a"<<i+1<<j+1<<endl;
        cin>>a[i][j];
    }

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        cout<<i+1<<j+1<<"enter elements of b"<<endl;
        cin>>b[i][j];
    }


        for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
        {
            cout <<sum[i][j]<< "  ";
            if(j == c - 1)
                cout << endl;
        }


    return 0;
}

