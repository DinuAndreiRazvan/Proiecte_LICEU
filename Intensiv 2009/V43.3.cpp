#include <iostream>

using namespace std;
int v[100];
int MULT(int a[100],int n)
{
  int i,ok=1;
  for(i=0;i<n;i++)
  {
      v[a[i]]++;
  }
  for(i=1;i<=n;i++)
  {
      if(v[i]!=1)
      {
          ok=0;
      }
  }
  return ok;
}

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<MULT(a,n);
    return 0;

}
