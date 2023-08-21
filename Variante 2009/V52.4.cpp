#include<iostream>

using namespace std;

int main()
{
    int n,j,i,v[100],ok=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(v[i]==v[j])
           {
               ok=0;
           }
        }
    }
    if(ok==0)
    {
        cout<<"Nu";
    }
    else
    {
        cout<<"Da";
    }

    return 0;
}
