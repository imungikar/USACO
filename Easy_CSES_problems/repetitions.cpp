#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long int l;
    long long int count=0;
    long long int ans=0;
    l = s.length();
    for(int i = 0; i < l; i++){
      if (s[i]==s[i-1]){
          count++;
      } else {
          count = 1;
      }
      ans=max(ans,count);
    }
    cout << ans;
    return 0;
}