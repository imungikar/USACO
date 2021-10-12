#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
   freopen("billboard.in", "r", stdin);
   freopen("billboard.out", "w", stdout);
   
    int x1,y1,x2,y2,ans;
    int x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int cowfeedy = abs((y4-y3));
    int cowfeedx = abs((x4-x3));
    int lawnmowerx = abs((x2-x1));
    int lawnmowery = abs((y2-y1)); 
    if(lawnmowery == cowfeedy){
        ans = (abs(x3-x1))*(lawnmowery);
    } else if(lawnmowerx == cowfeedx){
        ans = (abs(y3-y1))*lawnmowerx;
    } else{
        ans = (y2-y1)*(x2-x1);
    }
   
    cout << ans;



}
