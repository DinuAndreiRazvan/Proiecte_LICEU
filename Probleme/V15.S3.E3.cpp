
#include<iostream>
#include<fstream>

using namespace std;
ofstream fout("V15.S3.E3.out");

int main()
{
    int n,i,p1,p2,p11=1,p12,p21=1,p22,cnt=0;
    cin>>p1>>p2;
    while(p11<=9)
    {
        if(p1%p11==0)
        {
            p12=p1/p11;
            if(p12<=9)
            {
                n=p12+p11*10;
                for(i=0;i<=9;i++)
                {
                    n=n*10+i;
                    n=n*10+i;
                    n=n*10+i;
                    p21=1;
                    while(p21<=9)
                    {
                        if(p2%p21==0)
                        {
                            p22=p2/p21;
                            {
                                if(p22<=9)
                                {
                                    cnt++;
                                    n=n*10+p21;
                                    n=n*10+p22;
                                    if(cnt==16)
                                    {
                                        fout<<"\n";
                                        cnt=0;
                                    }
                                    fout<<n<<" ";
                                    n=n/100;

                                }
                            }
                        }
                        p21++;
                    }
                    n=n/1000;
                }
            }
        }
        p11++;
    }

    return 0;
}
