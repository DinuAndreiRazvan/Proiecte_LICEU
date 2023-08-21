#include <iostream>

using namespace std;
int f(int a)
{
  int d=2,s=0;
  while(d<=a)
  {
      if(a%d==0)
      {
          while(a%d==0)
          {
              a=a/d;
          }
          s=s+d;
      }
      d++;
  }
  return s;
}

int main()
{
    int n;
    cin>>n;
    if(n<10)
    {
       if(f(n)==n)
       {
           cout<<"DA" ;
       }
       else
       {
           cout<<"NU";
       }
    }
    else
    {
        if(f(n)==n && f(n%10*10+n/10)==n%10*10+n/10)
        {
           cout<<"DA" ;
        }
       else
       {
           cout<<"NU";
       }
    }
    return 0;
}
