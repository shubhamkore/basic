#include <iostream>

using namespace std;
class time
{
private:
    int hh,mm,ss;
public:
    void getdata(void);
    void putdata(void);
    void addtime(time t1,time t2);

};
void time::getdata()
{
    cout<<"enter hours"<<endl;
    cin>>hh;
    cout<<"enter minutes"<<endl;
    cin>>mm;
    cout<<"enter seconds"<<endl;
    cin>>ss;
}

void time::putdata()
{
    cout<<"Time after add"<<endl;
    cout<<hh<<":"<<mm<<":"<<ss<<endl;

}
void time::addtime(time t1,time t2)
{
    ss=t1.ss+t2.ss;
    mm=t1.mm+t2.mm+ss/60;
    hh=t1.hh+t2.hh+mm/60;
    mm=mm%60;
    ss=ss%60;

}
int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.addtime(t1,t2);
    t3.putdata();
    return 0;
}
