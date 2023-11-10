#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");

void citire(char cuv[30][100],int&n)
{
    int i,j;
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>cuv[i];
    }
}

int sterge(char s[100],char c)
{
    int k=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
        {
            strcpy(s+i,s+i+1);
            i--;
            k++;
        }
    }
    return k;

}

int main()
{
    char cuv[30][100],c;
    int n,i=1,j,k,e=0;
    citire(cuv,n);
    c=cuv[0][0];
    while(c!=NULL)
    {
        cout<<c;
        k=0;
       for(j=1;j<n;j++)
       {
          if(sterge(cuv[j],c)!=0)
          {
              k++;
          }
       }
       cout<<k<<" "<<j<<"\n";
       if(k+1==j)
       {
           fout<<c<<" ";
           e=1;
       }
        c=cuv[0][i];
        i++;
    }
    if(e==0)
    {
        fout<<"NU EXISTA";
    }
    return 0;
}
