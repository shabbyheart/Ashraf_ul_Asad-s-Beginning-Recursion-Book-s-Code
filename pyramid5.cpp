/*
2
3 4
4 5 6
5 6 7 8
6 7 8 9 10
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
            cout<<i+j<<" ";
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
    cout<<i+j<<" ";
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




