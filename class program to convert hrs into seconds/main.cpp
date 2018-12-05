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
    cout<<"enter hours"<<endl;
    cin>>hh;
    cout<<"enter minutes"<<endl;
    cin>>mm;
    cout<<"enter seconds"<<endl;
    cin>>ss;
}

void time::display()
{
    cout<<"converted time in seconds- "<<sec<<endl;
}
void time::convert()
{
    sec=hh*3600+mm*60+ss;
}
int main()
{
    time t;
    t.gettime();
    t.convert();
    t.display();
    return 0;
}
