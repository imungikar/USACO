#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;

struct Rect{
    int x1, y1, x2, y2;
    int area() {return (y2-y1)*(x2-x1); }
};

int intersect(Rect p, Rect q){
    int xOverlap = max(min(p.x2,q.x2) - max(p.x1, q.x1), 0);
    int yOverlap = max(min(p.y2, q.y2) - max(p.y1, q.y1), 0);
    return xOverlap*yOverlap;
}


int main(){
   freopen("billboard.in", "r", stdin);
   freopen("billboard.out", "w", stdout);
   
   Rect a, b;
   cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
   cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
   int ans;

    //Case 1: Overlapping the whole thing
   if(((a.x1<b.x1 && a.x2 > b.x2 ) && (a.y1 < b.y1)) && a.y2 > b.y2){
       int ans = 0;
   } 
   //Case 2:
   else if(((a.x1<b.x1 && a.x2>b.x2)&& a.y1<b.y1)&a.y2<b.y2){
       ans = b.area() - intersect(a,b);
   }
   //Case 3:
   else if(((a.x1<b.x1 && a.x2>b.x2)&& a.y1>b.y1)&a.y2>b.y2){
       ans = b.area() - intersect(a,b);
   }
   //Case 4:
   else if (((a.x1<b.x1 && a.x2<b.x2)&& a.y1<b.y1)&a.y2>b.y2){
       ans = b.area() - intersect(a,b);
   }
    //Case 5
   else if (((a.x1>b.x1 && a.x2>b.x2)&& a.y1<b.y1)&a.y2<b.y2){
       ans = b.area() - intersect(a,b);
   } else{
       ans = b.area();
   }
    cout << ans;



}
