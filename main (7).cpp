/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        std::vector<int> a;
        int m=INT_MAX,ans=0;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            a.push_back(k);
            m=min(m,k);
        }
        for(int i=0;i<n;i++)
        {
            ans+=(a[i]-m);
        }
        cout<<ans<<'\n';
        t--; 
    }
}