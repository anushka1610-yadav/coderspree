#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
//write your code here.
int p=0;
int ans=0;
while(n>0)
{
int r = n%10;
ans = ans+(r*pow(b,p));
p++;
n=n/10;
}
return ans;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}