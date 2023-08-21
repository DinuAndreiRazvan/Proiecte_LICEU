#include<iostream>

using namespace std;
struct punct{float x;float y;};
struct segment{punct A;punct B;};

punct Mijloc(segment S)
{
    punct M;
    M.x=(S.A.x+S.B.x)/2;
    M.y=(S.A.y+S.B.y)/2;
    return M;
}

int main()
{
    punct M;
    segment S;
    S.A.x=1;
    S.A.y=1;
    S.B.x=7;
    S.B.y=7;
    M=Mijloc(S);
    cout<<M.x<<" "<<M.y;

}
