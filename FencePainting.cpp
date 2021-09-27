#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int besscombined = (b-a) + (d-c);
    int intersection = max(min(b,d)-max(a,c), 0);
    int ans = besscombined - intersection;

    cout << ans << "\n";
}
