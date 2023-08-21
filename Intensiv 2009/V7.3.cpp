#include<iostream>
#include<fstream>

using namespace std;
ofstream fout("V7.3.out");

int main()
{
    int n,v[100],k,i,ok=0,aux1=-1,aux2=-1;
    cin>>n;
    for(i=0;i<3*n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        if(ok==0 && v[i]%2==0)
        {
            ok=1;
            aux1=i;
        }
    }
    for(i=2*n;i<3*n;i++)
    {
        if(v[i]%2==1)
        {
            aux2=i;
        }
    }

    if(aux1!=-1 && aux2!=-1)
    {
        k=v[aux1];
        v[aux1]=v[aux2];
        v[aux2]=k;
    }
    for(i=0;i<3*n;i++)
    {
        fout<<v[i]<<" ";
    }

        return 0;

}
