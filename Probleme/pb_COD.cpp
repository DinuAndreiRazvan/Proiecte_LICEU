#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
ifstream fin("pb_COD.in");

int main()
{
    char s[]="ADFGX",a,b,x[200][200],t[21],p[51],c[21],m,v[50][50],n[200],w[50];
    int i=0,j=0,pk,ok,nk=0,maxnk,no,mo;
    fin>>ok;
    fin.get();

    i=0;
    while(i<5)
    {
        j=0;
        a=s[i];
        while(j<5)
        {
            b=s[j];
            fin>>m;
            x[a][b]=m;
            cout<<x[a][b]<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    fin.get();
    fin.getline(t,20);
    fin.getline(p,50);
    cout<<p<<endl;
    pk=0;

    while(pk<50)
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                a=s[i];
                b=s[j];
                if(x[a][b]==p[pk])
                {
                    n[nk]=a;
                    nk++;
                    n[nk]=b;
                    nk++;
                }
            }
        }
        pk++;
    }
    cout<<n<<endl<<t<<endl;
    maxnk=nk;
    nk=0;
    for(i=0;i<50;i++)
    {
        for(j=0;j<strlen(t);j++)
        {
            v[i][j]=n[nk];
            nk++;
            cout<<v[i][j]<<" ";
            if(nk==maxnk)
            {
                i=50;
                j=strlen(t)-1;
            }
        }
        cout<<endl;
    }

    nk=strlen(n)/strlen(t)+1;

    for(i=0;i<strlen(t);i++)
    {
        for(j=i;j<strlen(t);j++)
        {
            if(t[i]>t[j])
            {
                w[0]=0;
                m=t[i];
                t[i]=t[j];
                t[j]=m;
                for(no=0;no<nk;no++)
                {
                    a=v[no][i];
                    v[no][i]=v[no][j];
                    v[no][j]=a;
                }
            }
        }
    }

    cout<<t<<endl;

    for(i=0;i<nk;i++)
    {
        for(j=0;j<strlen(t);j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<nk;i++)
    {
        for(j=0;j<strlen(t);j++)
        {
            cout<<v[j][i];
        }
        cout<<" ";
    }



    return 0;
}
