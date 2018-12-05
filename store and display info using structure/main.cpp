#include <iostream>

using namespace std;

struct student{
    char name[20];
    int roll;
    int marks;
};
int main()
{
    student s;
    cout << "DISPLAYING INFORMATION" << endl;

    cout<<"enter name of student"<<endl;
    cin>>s.name;
    cout<<"enter roll number"<<endl;
    cin>>s.roll;
    cout<<"enter marks"<<endl;
    cin>>s.marks;


    cout<<"name- "<<s.name<<endl;
    cout<<"roll= "<<s.roll<<endl;
    cout<<"marks= "<<s.marks<<endl;
    return 0;
}
