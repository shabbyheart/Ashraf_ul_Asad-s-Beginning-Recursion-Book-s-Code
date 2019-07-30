/*
1 2 3 4 5
1 2 3 4
1 2 3
1

*/
#include<bits/stdc++.h>
using namespace std;
int n;
 void iteration()
 {
    int i,j;
    for( i = n; i > 0; i--)
    {
        for( j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
 }
void recursion2(int i, int j)
{
    if( j > i)
    {
        cout<<endl;
        return;
    }
    cout<<j<<" ";
    recursion2(i , j+1);
}
void recursion1(int i)
{
    if( i == 0)
        return;
    recursion2(i, 1);
    recursion1(i-1);
}
int main()
{
    cin>>n;
    cout<<" Using Iteration: "<<endl;
    iteration();
    cout<<"Using Recursion: "<<endl;
    recursion1(n);
    return 0;
}






