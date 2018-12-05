#include <iostream>
#include<stdio.h>

using namespace std;
class basic_info
{
protected:
    int empid;
    char name[30];
    char gender;
public:
    void getinfo(void);
};

void basic_info::getinfo()
{
    cout<<"enter employee id-"<<endl;
    cin>>empid;
    cout<<"enter name- "<<endl;
    cin>>name;
    cout<<"enter gender"<<endl;
    cin>>gender;
}

class dept_info
{
protected:
    int deptid;
    char dept_name;
public:
    void getdept(void);


};

void dept_info::getdept()
{
    cout<<"enter department id-"<<endl;
    cin>>deptid;
    cout<<"enter department name-"<<endl;
    cin>>dept_name;

}

class employee:private basic_info,private dept_info
{
public:
    void get_empinfo(void)
    {
    cout<<"employee baic details- "<<endl;
    getinfo();
    cout<<"department information-"<<endl;
    getdept();
    }

    void print_empinfo(void)
    {
        cout<<"employee name -"<<name<<endl;
        cout<<"employee id- "<<empid<<endl;
        cout<<"employee gender- "<<gender<<endl;
        cout<<" department id- "<<deptid<<endl;
        cout<<"department name- "<<dept_name<<endl;

    }


};
int main()
{
    employee e;
    e.get_empinfo();
    e.print_empinfo();
    return 0;
}
