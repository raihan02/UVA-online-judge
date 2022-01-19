//
//  main.cpp
//  Problem_10452.
//
//  Created by Raju Raihan on 1/19/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define maxi 100005
vector<int> g[maxi];
bool visited[maxi];
int tot;
void dfs(int u){
    
    tot++;
    visited[u] = true;

    
    for(int i = 0; i < g[u].size(); i++){
        int v = g[u][i];
        
        if(visited[v] == false){
            dfs(v);
        }
    }
}

int main() {
    
    int tes;
    cin >> tes;
    while(tes--){
        int n, m, l;
        
        cin >> n >> m >> l;
        
        for(int i = 0; i < m; i++){
            int x,y;
            cin >> x >> y;
            g[x].push_back(y);
        }

       
        
        while(l--){
            int z;
            cin >> z;
            if(visited[z] == false){
                dfs(z);
            }
        }
        
        cout<< tot << endl;
        tot = 0;
        fill(visited, visited + maxi, false);
        for(int i = 0; i < n; i++){
            g[i].clear();
        }
       
    }
}
