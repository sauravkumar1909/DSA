#include<bits/stdc++.h>
using namespace std;

void print8(int n){
for(int i=0;i<=n;i++)
{
    for(int j=0;j<i;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<2*n - (2*i+1);j++){
        cout<<"*";
    }
    for(int j=0;j<n-i-1;j++)
    {
        cout<<"";
    }
    cout<<endl;
}
}
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print8(n);
    }
}