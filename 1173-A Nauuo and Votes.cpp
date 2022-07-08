/******************************************************************************
1173-A. Nauuo and Votes
time limit per test : 1 second
memory limit per test : 256 megabytes
input : standard input
output : standard output
Nauuo is a girl who loves writing comments.

One day, she posted a comment on Codeforces, wondering whether she would get upvotes or downvotes.

It's known that there were x persons who would upvote, y persons who would downvote, and there were also another z persons who would vote, but you don't know 
whether they would upvote or downvote. Note that each of the x+y+z people would vote exactly one time.

There are three different results: if there are more people upvote than downvote, the result will be "+"; if there are more people downvote than upvote, the 
result will be "-"; otherwise the result will be "0".

Because of the z unknown persons, the result may be uncertain (i.e. there are more than one possible results). More formally, the result is uncertain if and 
only if there exist two different situations of how the z persons vote, that the results are different in the two situations.

Tell Nauuo the result or report that the result is uncertain.

Input
The only line contains three integers x, y, z (0≤x,y,z≤100), corresponding to the number of persons who would upvote, downvote or unknown.

Output
If there is only one possible result, print the result : "+", "-" or "0".

Otherwise, print "?" to report that the result is uncertain.
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
