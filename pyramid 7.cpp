/*
0
1 0
0 1 0
1 0 1 0
0 1 0 1 0
*/
#include<bits/stdc++.h>
using namespace std;
int n;
 void iteration()
 {
    int i,j;
    for( i = 1; i <= n; i++)
    {
        for( j = 1; j <= i; j++)
        {
            cout<<(i+j)%2<<" ";
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
    cout<<(i+j)%2<<" ";
    recursion2(i , j+1);
}
void recursion1(int i)
{
    if( i > n)
        return;
    recursion2(i, 1);
    recursion1(i+1);
}
int main()
{
    cin>>n;
    cout<<" Using Iteration: "<<endl;
    iteration();
    cout<<"Using Recursion: "<<endl;
    recursion1(1);
    return 0;
}





