#include<iostream>
#include<fstream>

using namespace std;
ifstream fin("V9.S3.E3.in");

int main()
{
    int n ,kmax=0 , c=0, k=0,cnt=0;
    fin>>k;
    while(fin>>n)
    {
        if(n%k==0)
        {
            cnt++;
        }
        else
        {
            if(cnt>kmax)
            {
                kmax=cnt;
                c=1;
                cnt=0;
            }
            else
            {
                if(kmax==cnt)
                {
                    c++;
                    cnt=0;
                }
            }
        }
    }
     if(cnt>kmax)
            {
                kmax=cnt;
                c=1;
                cnt=0;
            }
            else
            {
                if(kmax==cnt)
                {
                    c++;
                    cnt=0;
                }
            }
    cout<<kmax<<" "<<c;

    return 0;
}


