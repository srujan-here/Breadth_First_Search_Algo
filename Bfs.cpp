#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> g[N];
vector<bool> vis(N,false);
queue<int> q1;

void bfs(int par){
q1.push(par);
vis[par]=true;

while(!q1.empty()){
    int tm=q1.front();
    q1.pop();
    cout<<tm<<" ";
    for(int child:g[tm]){
        if(!vis[child]){
            q1.push(child);
            vis[child]=true;
           

        }
    }

}
}

int main(){
    int a;
    cin>>a;
    for(int i=0;i<a-1;i++){
        int b,c;
        cin>>b>>c;
        g[b].push_back(c);
        g[c].push_back(b);

    }
    bfs(1);
}