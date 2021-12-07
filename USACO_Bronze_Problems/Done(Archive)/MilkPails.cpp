#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
    int X,Y,M = 0;
    int ans = 0;
    cin >> X >> Y >> M;
    for(int i=0; i<1000;i++){
       for(int j = 0;j<1001;j++){
           int n = X*i+ Y*j;
           if(n>M){
               break;
           }
           ans = max(ans,n);
       }
    }
    
    cout << ans;
}