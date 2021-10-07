#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

class Rect{
    public:
    int x1,y1,x2,y2;
    int area() { return (y2 - y1) * (x2 - x1); }
};


int main(){

freopen("billboard.in", "r", stdin);
freopen("billboard.out", "w", stdout);


Rect a;
Rect b;
Rect c;

cin >> a.x1 >> a.y1 >> a.y1 >> a.y2;
cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;

int billboardcombinedarea = a.area() + b.area();
int intersectedareaac = (c.y2-a.y1)*(c.x1-a.x2);
int intersectedareaab = (c.x2-b.x1)*(c.y2-b.y1);
int ans = billboardcombinedarea - intersectedareaab - intersectedareaac;

cout << ans;


}