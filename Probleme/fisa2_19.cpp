#include <iostream>

using namespace std;

int main()

{
     int n,minn=999;
      cin>>n;
      while(n!=0)
      {
          if(minn>n)
          {
              minn=n;
          }
          cin>>n;
      }
      cout<<minn;



    return 0;
}
