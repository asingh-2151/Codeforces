/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

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