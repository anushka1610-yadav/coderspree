#include<bits/stdc++.h>
using namespace std;
int AnyToAny(int n, int b1, int b2) {
  //write your code here
  int p=0;
  int ans=0;
  while(n>0)
  {
        int r = n%10;
        ans = ans+(r*pow(b1,p));
        p++;
        n=n/10;
    }
    //return ans;
    int ans1=0;
    int p1=1;
    while(ans>0)
    {
        int r=ans%b2;
        ans1 = ans1+(r*p1);
        p1=p1*10;
        ans=ans/b2;
    }
    return ans1;
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToAny(n, b1, b2);
  cout << res << endl;
}