#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    a.push_back(0);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    a.push_back(91);
    for(int i=1;i<=n+1;i++)
    {
        if(a[i]>a[i-1]+15)
        {
            cout<<a[i-1]+15;
            return(0);
        }
    }
    cout<<90;
}