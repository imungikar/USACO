#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

class Rect{
    public:
    int x1, y1, x2, y2;
};

int main(){
    freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
    
    Rect a;
    Rect b;
    
    int maxY, minY, maxX, minX;

    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    maxY = max(a.y2, b.y2);
    minY = min(a.y1, b.y1);
    maxX = max(a.x2, b.x2);
    minX = min(a.x1, b.x1);

    int ydif = maxY - minY;
    int xdif = maxX - minX;

    int ans = max(xdif, ydif);

    cout << ans * ans;




}
