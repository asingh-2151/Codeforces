/******************************************************************************
1676-B. Equal Candies
time limit per test : 1 second
memory limit per test : 256 megabytes
input : standard input
output : standard output
There are n boxes with different quantities of candies in each of them. The i-th box has ai candies inside.

You also have n friends that you want to give the candies to, so you decided to give each friend a box of candies. But, you don't want any friends to get upset so you decided to eat some (possibly none) candies from each box so that all boxes have the same quantity of candies in them. Note that you may eat a different number of candies from different boxes and you cannot add candies to any of the boxes.

What's the minimum total number of candies you have to eat to satisfy the requirements?

Input
The first line contains an integer t (1≤t≤1000) — the number of test cases.

The first line of each test case contains an integer n (1≤n≤50) — the number of boxes you have.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤10^7) — the quantity of candies in each box.

Output
For each test case, print a single integer denoting the minimum number of candies you have to eat to satisfy the requirements.

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
