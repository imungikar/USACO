#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;

int main() { 
    int arr[100][100];
    int i;
    cin>>i;
    for(int x=0;x<i;x++){
        for(int y=0;y<i;y++){
            cin>>arr[x][y];
        }
    }
   int diag1,diag2;
    diag1=0;diag2=0;
    for(int x=0;x<i;x++)
        {
        diag1=diag1+arr[x][x];
    }
    for(int x=i-1;x>-1;x--)
        {
       
        diag2=(diag2+arr[i-x-1][x]);   
    }
    int diff = diag1-diag2;
    if(diff<0){
        cout<<-(diff);
    }
    else
        cout<<diff;
    
    return 0;
}