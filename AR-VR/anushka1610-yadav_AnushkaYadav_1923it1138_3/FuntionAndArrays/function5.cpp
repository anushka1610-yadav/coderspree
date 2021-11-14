#include<bits/stdc++.h>
using namespace std;

int main(){
    //write your code here
    int n,mi=INT_MAX,mx=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mi=min(mi,arr[i]);
        mx=max(mx,arr[i]);
    }
    cout<<mx-mi<<"\n";
    
}