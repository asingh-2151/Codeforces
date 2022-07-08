#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<3)
    {
        cout<<1;
    }
    else
    {
        int ans=(2*(n/3))+((n%3!=0)?1:0);
        cout<<ans;
    }
}