#include <iostream>
//#define MAX 10
using namespace std;
class student
{
private:
    int roll;
    char name[20];
    int total;
    float perc;
public:
    void getdata(void);
    void putdata(void);

};

void student::getdata()
{
    cout<<"enter roll number"<<endl;
    cin>>roll;
    cout<<"enter name of student"<<endl;
    cin>>name;
    cout<<"enter total"<<endl;
    cin>>total;

        perc=(float)total/500*100;

}

void student::putdata()
{
    cout<<"roll number= "<<roll<<endl;
    cout<<"name is= "<<name<<endl;
    cout<<"total is= "<<total<<endl;
    cout<<"percentage is"<<perc<<endl;
}
int main()
{
    student s[10];
    int n,i;
    cout << "enter how many records you want to enter" << endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"enter details of student"<<i+1<<endl;
        s[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        cout<<"student details are"<<endl;
        s[i].putdata();
    }
    return 0;
}
