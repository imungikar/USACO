#include <iostream>
#include <set>
#include<cstdio>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n = 0;
    cin >> n;
    vector<int> v;
    long long int count = 0;
    long long in;
    for(int i=0; i<n; i++){
        cin>>in;
        v.push_back(in);
    }
    
    for(int i = 0; i<n; i++){
      if(v[i]<v[i-1]){
           count=count+(v[i-1]-v[i]);
           v[i]=v[i]+(v[i-1]-v[i]);
       }
    
    }  
    cout << count;
    return 0;
    }

