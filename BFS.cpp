using namespace std;
#include <iostream> 
#include <vector>
#include <queue>

void addEdge(vector<int> adj[], int v, int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int v){
    for(int i = 0; i < v; i++){
        for(int x : adj[i]) cout<<x<<" ";
        cout<<"\n";
    }
}

//First Version of BFS
// void BFS(vector<int> adj[], int v, int s){
//     bool visited[v+1];
//     for(int i = 0; i < v; i++) visited[i] = false;
//     queue<int> q;
//     visited[s] = true;
//     q.push(s);
//     while(q.empty()==false){
//         int u = q.front();
//         q.pop();
//         cout<<u<<" ";
//         for(int x : adj[u]){
//             if(visited[x]==false){
//                 visited[x] = true;
//                 q.push(x);
//             }
//         }
//     }
// }

//second version of BFS
void BFS(vector<int> adj[], int s,bool visited[]){
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int x : adj[u]){
            if(visited[x]==false){
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

void BSFDin(vector<int> adj[], int v){
    bool visited[v+1];
    for(int i = 0; i < v; i++) visited[i] = false;
    for(int i = 0; i < v; i++){
        if(visited[i]==false){
            visited[i] = true;
            BFS(adj,i,visited);
        }
    }
}

int main(){
    int v = 5;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,4,3);

    printGraph(adj,v);
    cout<<endl;
    BFS(adj,v,0);
}