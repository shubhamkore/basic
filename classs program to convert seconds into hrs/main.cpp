#include <iostream>

using namespace std;

class time
{
private:
    int sec;
    int hh,mm,ss;
public:
    void gettime(void);
    void convert(void);
    void display(void);
};

void time::gettime()
{
    cout<<"enter seconds"<<endl;
    cin>>sec;

}

void time::display()
{
    cout<<"converted time in hours format- "<<endl;

    cout<<hh<<":"<<mm<<":"<<ss<<endl;
}
void time::convert()
{
    mm=sec/60;
    ss=sec%60;
    hh=mm/60;
    mm=mm%60;
    //ss=ss%60;
}
int main()
{
    time t;
    t.gettime();
    t.convert();
    t.display();
    return 0;
}

