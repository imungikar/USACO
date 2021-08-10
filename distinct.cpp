#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
 set<int> set;
 int n;
 cin >> n;
 int e;
 for(int i=1;i<=n;i++){
   cin >> e;
   set.insert(e);
 }
 
 cout << set.size() << endl;
 
 
  
}
