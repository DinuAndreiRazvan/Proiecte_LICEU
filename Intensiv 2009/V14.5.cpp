#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,i,j=0,k,aux,cnt=0,a[10][10];
    cin>>n;
    aux=n;
    while(aux!=0)
    {
        cnt++;
        aux=aux/10;
    }
    while(n!=0)
    {
        k=n%10;
        for(i=0;i<cnt;i++)
        {
            a[i][j]=k;
        }
        n=n/10;
        j++;
    }
    for(i=0;i<cnt;i++)
    {
        for(j=0;j<cnt;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;


}
