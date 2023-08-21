#include<iostream>

using namespace std;

#define MAX_MAT 101

struct matrice
{
    unsigned int nrLinii,nrColoane;
    unsigned int mat[MAX_MAT][MAX_MAT];
};

    matrice primeTwins(unsigned int countt , unsigned int lowerBound )
    {
        matrice primetwins;
        unsigned int i=0,x,y,d,k1,k2,a;
        if(lowerBound%2==0)
        {
            lowerBound++;
        }
        x=lowerBound;
        y=x+2;
        while(countt)
        {
            d=2;
            k1=0;
            a=x;
            while(d<=a/2)
            {
                if(a%d==0)
                {
                    k1=1;
                }
                d++;
            }

            d=2;
            k2=0;
            a=y;
            while(d<=a/2)
            {
                if(a%d==0)
                {
                    k2=1;
                }
                d++;
            }

            if(k1==k2 && k2==0)
            {
                countt--;
                primetwins.mat[i][0]=x;
                primetwins.mat[i][1]=y;
                i++;
            }

            x=y;
            y=y+2;
        }
        primetwins.nrLinii=i;
        primetwins.nrColoane=2;

        return primetwins;

    }

int main()
{
    matrice primetwins;
    unsigned int countt=2 , lowerBound=2,i,j;
    primetwins=primeTwins(countt,lowerBound);

    for(i=0;i<primetwins.nrLinii;i++)
    {
        for(j=0;j< primetwins.nrColoane;j++)
        {
            cout<<primetwins.mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
