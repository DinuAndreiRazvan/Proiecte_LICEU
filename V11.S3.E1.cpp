#include<iostream>
#include<math.h>

using namespace std;
void patrate(int x, int y)
{
    int d,s=0,aux,i;
    for(i=x;i<=y;i++)
    {
        d=sqrt(i);
        if(d*d==i)
        {
            cout<<i<<"+";
            s=s+i;
        }
    }
    cout<<"\b="<<s;
}

int main()

{
    int x,y;
    cin>>x>>y;
    patrate(x,y);


    return 0;

}
