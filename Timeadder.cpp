#include<iostream>
using namespace std;

class Time
{
    int hh,mm,ss;
    public:
        Time()
        {
            hh,mm,ss=0,0,0;
        }
        Time(int H,int M,int S)
        {
            hh=H;
            mm=M;
            ss=S;
        }
        Time operator +(Time c)
        {
            Time x;
            x.hh=hh+c.hh;
            x.mm=mm+c.mm;
            x.ss=ss+c.ss;
            x.normalize();
            return x;
        }
        void normalize()
        {
            if(ss>=60)
            {
                int m,r;
                r=ss%60;
                m=ss/60;
                ss=r;
                mm+=m;
            }
            if(mm>=60)
            {
                int m,r;
                r=mm%60;
                m=mm/60;
                mm=r;
                hh+=m;
            }
        }
        void display()
        {
            cout<<hh<<":"<<mm<<":"<<ss;
        }
};
int main()
{
    Time c1(10,80,100);
    Time c2(7,80,105);
    Time c3=c1+c2;
    c3.display();
    return 0;
}
