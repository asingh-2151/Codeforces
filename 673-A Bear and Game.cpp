/******************************************************************************
673-A. Bear and Game
time limit per test - 2 seconds
memory limit per test - 256 megabytes
input - standard input
output - standard output
Bear Limak likes watching sports on TV. He is going to watch a game today. The game lasts 90 minutes and there are no breaks.

Each minute can be either interesting or boring. If 15 consecutive minutes are boring then Limak immediately turns TV off.

You know that there will be n interesting minutes t1, t2, ..., tn. Your task is to calculate for how many minutes Limak will watch the game.

Input
The first line of the input contains one integer n (1 ≤ n ≤ 90) — the number of interesting minutes.

The second line contains n integers t1, t2, ..., tn (1 ≤ t1 < t2 < ... tn ≤ 90), given in the increasing order.

Output
Print the number of minutes Limak will watch the game.
*******************************************************************************/
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
