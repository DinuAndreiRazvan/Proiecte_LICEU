#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,i,j,p=0,k;
    float s=0,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            y=i;
            s=s+1/y;
        }
        else
        {
            j=i;
            k=1;
            while(j!=1)
            {
                k=k*j;
                j=j-2;
            }
            s=s+k;
        }
    }
    cout<<s;

}
