#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("V18.S3.E3.in");

int main()
{
    int n,m, i,k=0,kmax=0,cnt=0;
    while(fin>>n)
    {
        if(n%10==0)
        {
           k++;
        }
        else
        {
            if(kmax<k)
            {
                kmax=k;
                cnt=1;
            }
            else
            {
                if(kmax==k)
                {
                    cnt++;
                }
            }
            k=0;
        }

    }
    cout<<kmax<<" "<<cnt;
    return 0;
}
