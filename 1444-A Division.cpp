/******************************************************************************
1444-A. Division?
time limit per test - 1 second
memory limit per test - 256 megabytes
input: standard input
output: standard output

Codeforces separates its users into 4 divisions by their rating:

For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399
Given a rating, print in which division the rating belongs.

Input
The first line of the input contains an integer t (1≤t≤104) — the number of testcases.

The description of each test consists of one line containing one integer rating (−5000≤rating≤5000).

Output
For each test case, output a single line containing the correct division in the format "Division X", where X is an integer between 1 and 4 representing the division for the corresponding rating.
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
