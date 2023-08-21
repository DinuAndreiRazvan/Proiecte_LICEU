///Raspuns:

//1 3 2 4 5 7   1 7 6 2 1 5   7 9 8 2 4 2

#include<iostream>

using namespace std;
int v[1000];

int main()
{
    int z1[7],z2[7],z3[7],c,k,i,j,contor=0;

    for(i=1;i<=6;i++)
    {
        cin>>z1[i];
    }

    for(i=1;i<=6;i++)
    {
        cin>>z2[i];
    }

    for(i=1;i<=6;i++)
    {
        cin>>z3[i];
    }

    for(k=1;k<=6;k++)
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                c=z1[k]*100+z2[i]*10+z3[j];
                v[c]=1;
            }
        }
    }

    for(k=1;k<=6;k++)
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                c=z1[k]*100+z3[i]*10+z2[j];
                v[c]=1;
            }
        }
    }

    for(k=1;k<=6;k++)
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                c=z2[k]*100+z1[i]*10+z3[j];
                v[c]=1;
            }
        }
    }

    for(k=1;k<=6;k++)
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                c=z2[k]*100+z3[i]*10+z1[j];
                v[c]=1;
            }
        }
    }

    for(k=1;k<=6;k++)
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                c=z3[k]*100+z1[i]*10+z2[j];
                v[c]=1;
            }
        }
    }

    for(k=1;k<=6;k++)
    {
        for(i=1;i<=6;i++)
        {
            for(j=1;j<=6;j++)
            {
                c=z3[k]*100+z2[i]*10+z1[j];
                v[c]=1;
            }
        }
    }

    for(i=100;i<=999;i++)
    {
        if(v[i]==1)
        {
            contor++;
        }
    }
    cout<<contor;

    return 0;
}
