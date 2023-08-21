#include<iostream>

using namespace std;
int multiplu(int a[100],int n,int k)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0 && a[i]%10==k)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int n,a[100],k,i;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<multiplu(a,n,k);
    return 0;

}
