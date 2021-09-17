#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 2;

    if(n==2||n==3){
        cout << "NO SOLUTION";
        return 0;

    }

    while(a<=n){
        cout << a << " ";
        a +=2;
    }

    a = 1;

    while(a <= n){
        cout << a << " ";
        a += 2;
    }


    return 0;
}