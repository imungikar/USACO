#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    long long int test;
    long long int x,y;
    cin >> test;
    while(test--){
        cin>>y>>x;
        if(x>=y){
            if(x%2==0){
                cout<<(x-1)*(x-1)+y<<"\n";
            } else{
                cout<<x*x-y+1<<"\n";
            }
        } else{
            if(y%2==1){
                cout<<y*y-x+1<<"\n";
            } else{
                cout<<(y-1)*(y-1)-x<<"\n";
            }
        }
    }

}