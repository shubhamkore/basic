#include <iostream>

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
    student s;
    s.getdata();
    s.putdata();
    return 0;
}
