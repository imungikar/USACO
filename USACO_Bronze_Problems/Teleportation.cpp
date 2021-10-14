#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

    int a, b, x, y, ans;
    cin >> a >>  b >> x >> y;

    int ans0 = abs(a-y)+abs(b-x);
    int ans1 = abs(a-x)+abs(b-y);
    int ans2 = abs(a-b);

    ans = min(ans2, min(ans0,ans1));

    cout << ans;
    
}