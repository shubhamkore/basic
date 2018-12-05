#include <iostream>

using namespace std;
class basic
{
private:
    char name[30];
    int age;
    char g;
public:
    void get_info(void);
    void put_info(void);

};
void basic::get_info()
{
    cout<<"enter name of student"<<endl;
    cin>>name;
    cout<<"enter age of student"<<endl;
    cin>>age;
    cout<<"enter gender of student"<<endl;
    cin>>g;
}
void basic::put_info()
{
    cout<<"name- "<<name<<endl;
    cout<<"age- "<<age<<endl;
    cout<<"gender - "<<g<<endl;
}

class result:public basic
{
private:
    int totalM;
    float per;
    char grade;
public:
    void getmarks(void);
    void putmarks(void);
};

void result::getmarks()
{
    cout<<"total marks= "<<endl;
    cin>>totalM;

    per=(float)totalM/500*100;

    cout<<"enter grade "<<endl;
    cin>>grade;
}

void result::putmarks()
{
    cout<<"marks -"<<totalM<<"\t percentage- "<<per<<"\t grade- "<<grade<<endl;
}
int main()
{
    result r;
    r.get_info();
    r.getmarks();
    r.put_info();
    r.putmarks();
    return 0;
}
