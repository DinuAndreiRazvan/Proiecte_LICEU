#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int v[10000],u[10000];

void inmultire(int x,int &contor,int s[10000])///x=valoarea care se adauga la produs ; contor= numarul de cifre al numarului din vectorul V, respectiv al rezultatului
{
    int i,aux[10000],j;


    if(contor==0)///pentru cazul in care nu avem nici un numar in vectorul V
    {
        i=1;
        while(x)
        {
            s[i]=x%10;
            x=x/10;
            i++;
        }
        contor=i-1;
    }
    else
    {
        for(i=1;i<=contor;i++)
        {
            aux[i]=s[i];
            s[i]=0;     ///muta valoarea in vectorul auxiliar
        }
        i=1;
        while(x)
        {
            for(j=1;j<=contor;j++)
            {
                if(i!=1)
                {
                    s[i]=s[i]+aux[j]*(x%10)+s[i-1]/10;///imi adauga rezultatul inmultirii in vectorul V
                    s[i-1]=s[i-1]%10;
                    if(j==contor && aux[j]>9)
                    {
                        contor++;///contorul se modifica dupa lungimea rezultatului
                    }
                }
                else
                {
                    s[i]=s[i]+aux[j]*(x%10);
                    if(s[i]>9)
                    {
                        s[i+1]=s[i]/10;
                        s[i]=s[i]%10;
                        contor++;
                    }
                }
                i++;
            }
            i=i-j+2;
            x=x/10;
        }
        contor=i+j-3;
    }
}

int main()
{
    int i=1,numitor=0,numarator=0,a,b,j,ogl;

    for(i=1;i<=617;i++)//617
    {
        inmultire(i,numitor,v);///calculez lungimea numitorului
        cout<<i<<" "<<numitor<<endl;
    }

    cout<<endl;

    for(i=618;i<=1234;i++)//618 1234
    {
        if(numarator==1 && i<10)
        {
            u[2]=u[1]*i/10;
            u[1]=u[1]*i%10;
            i++;
            numarator++;
        }
        inmultire(i,numarator,u);///calculez lungimea numaratorului
        cout<<i<<" "<<numarator<<endl;
    }

    cout<<endl<<endl<<numarator<<"/"<<numitor<<endl;

    cout<<"S are "<<numarator-numitor<<" sau "<<numarator-numitor+1<<" cifre";


    return 0;
}


