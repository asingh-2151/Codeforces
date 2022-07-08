/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int r;
        cin>>r;
        if(r>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(r>=1600 && r<1900)
        {
            cout<<"Division 2"<<endl;
        }
        else if(r>=1400 && r<1600)
        {
            cout<<"Division 3"<<endl;
        }
        else
        {
            cout<<"Division 4"<<endl;
        }
    }
}
