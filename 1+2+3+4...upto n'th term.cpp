#include<bits/stdc++.h>
using namespace std;
int n;
int getSum(int i)
{
    int temp;
    if( i > n)
    {
        cout<<endl;
        return 0;
    }
    cout<<i<<" ";
    temp = i+ getSum(i+1);

    return temp;
}
int main()
{
    int sum;

    cin>>n;
    cout<<getSum(1);
    return 0;
}

