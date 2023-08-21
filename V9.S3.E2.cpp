#include<iostream>
#include<string.h>

using namespace std;

int main()

{
    int n,i=0,j,x,k=0;
    char v[20][20];
    cin>>n;
    while(i<n)
    {
        char b[20];
        cin>>b;
        strcpy(v[i],b);
        i++;
    }
    x=strlen(v[n-1]);
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<x;j++)
        {
            if(v[i][j]==v[n-1][j])
            {
                k++;
            }
        }
        if(k==x)
        {
            cout<<endl<<v[i]<<" ";
        }
        k=0;
    }
    return 0;
}
