#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V54.3.in");

void pal(int a,int&b)
{
    int x,x1,y,y1,ogl1,ogl2;
    x=a;
    y=a;
    b=0;
    while(b==0)
    {
        ogl1=0;
        ogl2=0;
        x1=x;
        while(x1)
        {
            ogl1=ogl1*10+x1%10;
            x1=x1/10;
        }
        y1=y;
        while(y1)
        {
            ogl2=ogl2*10+y1%10;
            y1=y1/10;
        }
        if(ogl2==y)
        {
            b=y;
        }
        if(ogl1==x)
        {
            b=x;
        }
        x--;
        y++;
    }

}

int main()
{
    int n,x;
    fin>>n;
    while(fin>>x)
    {
        pal(x,n);
        if(n!=0)
        {
            cout<<n<<" ";
        }
    }

    return 0;
}
