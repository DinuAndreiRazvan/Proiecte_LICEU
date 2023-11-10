#include <iostream>

using namespace std;

int main()

{
     int x,n,k=0,c=0;
      cin>>x;
      cin>>n;
      while(n!=0)
      {
          k++;
          if(n==x)
          {
              c++;
              cout<<"se gaseste pe pozitia "<<k<<"\n";
          }
          cin>>n;
      }
      cout<<c;



    return 0;
}
