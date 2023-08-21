#include<iostream>

using namespace std;

void divX(int n,int x)
{
    while(n!=0)
    {
        cout<<x*n<<" ";
        n--;
    }
}

int main()
{
    int x=15,n=4;
    divX(n,x);

}
