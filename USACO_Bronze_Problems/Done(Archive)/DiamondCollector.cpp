#include <iostream>
#include <set>
#include<cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
   int N, K;
   int final = 0;
   cin >> N >> K;
   vector<int> size;
   size.resize(N);
   for(int i=0;i<N;i++){
       cin >> size[i];
   }
   sort(size.begin(),size.end());
   for(int i=0;i<N;i++){
       int ans = 0;
       for(int j=0;j<i+1;j++){
           if(size[j]-size[i]<=K){
               ans++;
           }
           else{
               break;
           }
       }
       final = max(final,ans);
   }
   cout << final;
}
