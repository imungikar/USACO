#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    freopen("triangles.in", "r", stdin);

	freopen("triangles.out", "w", stdout);
    
    int x[100];
    int y[100];
    int N;
    cin >> N;
    int ans = 0;
    for(int i=0;i<N;i++){
        cin >> x[i];
        cin >> y[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(x[i]==x[j] && y[i]==y[k]){
                    int value = (abs(y[i]-y[j]))*(abs(x[i]-x[k]));
                    ans = max(ans,value);
                }
            }
        }
    }
    cout << ans << endl;
}
