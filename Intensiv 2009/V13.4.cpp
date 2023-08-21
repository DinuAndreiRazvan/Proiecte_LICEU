#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V13.in");
ofstream fout("V13.out");
void P(int&n,int c)
{
    int nd=0,p=1;
    while(n!=0)
    {
        if(n%10!=c)
        {
            nd=nd+n%10*p;
            p=p*10;
        }
        n=n/10;
    }
    n=nd;

}

int main()
{
    int n,c;
    while(fin>>n)
    {
        c=1;
        while(c<10)
        {
            P(n,c);
            c=c+2;
        }
        if(n!=0)
        {
            fout<<n<<" ";
        }
    }
    return 0;
}
