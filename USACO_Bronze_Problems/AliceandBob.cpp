#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main{

int m, n, p, q, r, s;
int t=0

int ax = 0;
int ay = 0;
int bx = r;
int by = s;

while(ax<bx && ay<by){
    ax += m;
    ay += n;
    bx -= p;
    by -= q;

    t++
}
if(ax == bx && ay==by)
cout << t << endl;

} else{
    cout << -1 << endl;
}