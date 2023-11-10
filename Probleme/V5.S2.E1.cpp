#include<iostream>

using namespace std;

int main()

{
    int n,y,x=1,d=2;
    cin>>n;
    y=n;
    do
    {
        if(n%d==0)
        {
            x=d;
            y=n/d;
        }
        d++;
    }while(x<y);
    if(x==y)
    {
        cout<<"D"<<x;
    }
    else
    {
        cout<<"N";
    }


    return 0;

}
