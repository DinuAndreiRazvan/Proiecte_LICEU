/*
18 1 2020
22 11 2020
*/
#include<iostream>

using namespace std;

struct data
{
    int zi;
    int luna;
    int an;
};

int main()
{
    data a,b;
    int c=0,d=0,dif,z=0,i;
    cin>>a.zi>>a.luna>>a.an;
    cin>>b.zi>>b.luna>>b.an;
    cout<<endl;
    if(a.an<b.an)
    {
        cout<<b.zi<<"."<<b.luna<<"."<<b.an;
    }
    else
    {
        if(a.an>b.an)
        {
            cout<<a.zi<<"."<<a.luna<<"."<<a.an;
        }
        else
        {
            if(a.luna<b.luna)
            {
                cout<<b.zi<<"."<<b.luna<<"."<<b.an;
            }
            else
            {
                if(a.luna>b.luna)
                {
                    cout<<a.zi<<"."<<a.luna<<"."<<a.an;
                }
                else
                {
                    if(a.zi<b.zi)
                    {
                        cout<<b.zi<<"."<<b.luna<<"."<<b.an;
                    }
                    else
                    {
                        cout<<a.zi<<"."<<a.luna<<"."<<a.an;
                    }
                }
            }
        }
    }

    for(i=1;i<=b.luna-1;i++)
    {
        if(i<=7)
        {
            if(i==2)
            {
                if(b.an%4==0)
                {
                    d=d+29;
                }
                else
                {
                    d=d+28;
                }
            }
            else
            {
                if(i%2==0)
                {
                    d=d+30;
                }
                else
                {
                    d=d+31;
                }
            }
        }
        else
        {
            if(i%2==0)
                {
                    d=d+31;
                }
                else
                {
                    d=d+30;
                }
        }
    }
    d=d+b.zi;

    for(i=1;i<=a.luna-1;i++)
        {
            if(i<=7)
            {
                if(i==2)
                {
                    if(a.an%4==0)
                    {
                        c=c+29;
                    }
                    else
                    {
                        c=c+28;
                    }
                }
                else
                {
                    if(i%2==0)
                    {
                        c=c+30;
                    }
                    else
                    {
                        c=c+31;
                    }
                }
            }
            else
            {
                if(i%2==0)
                    {
                        c=c+31;
                    }
                    else
                    {
                        c=c+30;
                    }
            }
        }
        c=c+a.zi;

        if(a.an<b.an)
        {
            for(i=a.an+1;i<=b.an;i++)
            {
                if(i%4==0)
                {
                   z=z+366;
                }
                else
                {
                    z=z+365;
                }
            }
            d=d+z;
            cout<<endl<<"a="<<c<<" "<<"b="<<d<<" "<<"Diferenta este de "<<d-c<<" zile"<<endl;
        }
        else
        {
            for(i=b.an+1;i<=a.an;i++)
            {
                if(i%4==0)
                {
                   z=z+366;
                }
                else
                {
                    z=z+365;
                }
            }
            c=c+z;
            if(c<d)
            {
                cout<<endl<<"a="<<c<<" "<<"b="<<d<<" "<<"Diferenta este de "<<d-c<<" zile"<<endl;
            }
            else
            {
                cout<<endl<<"a="<<c<<" "<<"b="<<d<<" "<<"Diferenta este de "<<c-d<<" zile"<<endl;
            }
        }

    return 0;
}
