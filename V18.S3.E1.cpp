#include <iostream>

using namespace std;
int v[10];
void suma(int n,int&s)
{
    int i,a;
    while(n!=0)
    {
          a=n%10;
          if(a%2==0)
          {
              v[a]++;
          }
          n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(v[i]!=0)
        {
            s=s+i;
        }
    }
}

int main()
{
    int n,s=0;
    cin>>n;
    suma(n,s);
    cout<<s;
    return 0;
}
