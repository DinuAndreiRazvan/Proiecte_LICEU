///Raspuns 385

#include<iostream>

using namespace std;

int main()
{
    int a[11][11],i,j,s=0;

    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(i<j)
            {
                s=s+i;
            }
            else
            {
                s=s+j;
            }
        }
    }

    cout<<s;

    return 0;
}
