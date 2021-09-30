#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

struct Rect{
    int x1, y1, x2, y2;
};

int main(){
    freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);

    Rect a;
    Rect b;

    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    int minx = min(a.x1, b.x1);
    int maxX = max(a.x2, b.x2);
    int miny = min(a.y1, a.y1);
    int maxY = max(a.y2, b.y2);

    int ans = max((maxX-minx),(maxY-miny));

    cout << ans * ans << endl;






}