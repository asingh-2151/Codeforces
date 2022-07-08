/******************************************************************************
747-A. Display Size
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
A big company decided to launch a new series of rectangular displays, and decided that the display must have exactly n pixels.

Your task is to determine the size of the rectangular display — the number of lines (rows) of pixels a and the number of columns of pixels b, so that:

there are exactly n pixels on the display;
the number of rows does not exceed the number of columns, it means a ≤ b;
the difference b - a is as small as possible.
Input
The first line contains the positive integer n (1 ≤ n ≤ 106) — the number of pixels display should have.

Output
Print two integers — the number of rows and columns on the display.
*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=1,b=n;
    int m=pow(n,0.5);
    for(int i=1;i<=m;i++)
    {
        int x=i;
        if(n%x==0)
        {
            int y=n/x;
            if(b-a>y-x)
            {
                a=x;
                b=y;
            }
        }
    }
    cout<<a<<" "<<b;
}
