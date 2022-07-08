/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(z==0)
    {
        if(x>y)
        {
            cout<<"+";
        }
        else if(x<y)
        {
            cout<<"-";
        }
        else
        {
            cout<<"0";
        }
    }
    else
    {
        if(x+z>y && x>y+z)
        {
            cout<<"+";
        }
        else if(x+z<y && x<y+z)
        {
            cout<<"-";
        }
        else
        {
            cout<<"?";
        }
    }
}