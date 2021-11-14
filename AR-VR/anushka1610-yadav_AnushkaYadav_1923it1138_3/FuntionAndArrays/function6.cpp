#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n,k,p=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            p=i;
            break;;
        }
    }
    cout<<p<<"\n";
    
}