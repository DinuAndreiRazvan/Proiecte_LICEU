#include<iostream>

using namespace std;
int joc(int n)
{
    int d=2,k=0;
    while(d<=n)
    {
        if(n%d==0)
        {
            k++;
        }
        d++;
    }
    return k;
}

int main()
{
    int n;
    cin>>n;
    cout<<joc(n);

}
