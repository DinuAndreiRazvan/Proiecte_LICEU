/*Se citesc 2 dimnsiuni n si m ale unei matrici impreuna cu elementele matricii.
 Sa se numere cate elemente prime sun in matrice? Sa se afiseze randul cu cele mai multe nr prime.*/
#include <iostream>

using namespace std;

int main()
{
    int n,m,v[50][50],cnt=0,d,p,i,j,maxm=0,k,imax=0;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<m;j++)
        {
            d=2;
            p=0;
            while(d<=v[i][j]/2)
            {
                if(v[i][j]%d==0)
                {
                   p=1;
                }
                d++;
            }
            if(p==0)
            {
                cnt++;
                k++;
            }
        }
        if(k>maxm)
        {
            maxm=k;
            imax=i;
        }

    }
    cout<<"in total sunt "<<cnt<<" elemente"<<"\n";
    for(j=0;j<m;j++)
    {
        cout<<v[imax][j]<<" ";
    }
    return 0;


}
