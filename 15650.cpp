#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <cstring>
#include <tuple>
using namespace std;
int arr[9];
int n,m;
void dfs(int a,int b){
    if(b>m){
        for(int i=1;i<=m;i++){
            cout <<arr[i]<<" ";
        }
        cout <<"\n";
        return;
    }
    for(int i=a;i<=n;i++){
        arr[b] = i;
        cout <<"몇번";
        dfs(i,b+1);
    }
    
}
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >>n>>m;
    dfs(1,1);
    return 0;
}
