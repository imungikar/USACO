#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);

    int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    cin >> x5 >> y5 >> x6 >> y6;

    int billboard1, billboard2, intersection1, intersection2;
    billboard1 == (x2-x1) * (y2-y1);
    billboard2 == (x4-x3) * (y4-y3);
    intersection1 == max(0,min(x2,x6) - max(x1,x5)) * max(0,min(y2,y6) - max(y1,y5));
    intersection2 == max(0,min(x4,y6) - max(y3,y5)) * max(0,min(y4,y6) - max(y3,y5));
    

    int ans = billboard1 + billboard2 - intersection1 - intersection2;
    
    cout << ans << endl;
}
