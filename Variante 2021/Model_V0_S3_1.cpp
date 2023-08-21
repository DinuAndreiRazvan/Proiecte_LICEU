#include<iostream>

using namespace std;

void prime(int n,int&x,int&y)
{
    int d,k=0,i;
    for(i=1;i<n;i++)
    {
        d=2;
        k=0;
        while(d<=i/2)
        {
            if(i%d==0)
            {
                k++;
            }
            d++;
        }
        if(k==0)
        {
            x=y;
            y=i;
        }
    }

}

int main()
{
    int n,x,y;
    cin>>n;
    prime(n,x,y);
    cout<<x<<" "<<y;
}
