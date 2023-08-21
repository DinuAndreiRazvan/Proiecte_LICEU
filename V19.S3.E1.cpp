#include <iostream>

using namespace std;
void paritate(int n,int&nr)
{
    int d=2;
    while(d<=n)
    {
        if(n%d==0 && n%2==d%2)
        {
            nr++;
        }
        d++;
    }

}

int main()
{
    int n,nr=0;
    cin>>n;
    paritate(n,nr);
    cout<<nr;
    return 0;
}
