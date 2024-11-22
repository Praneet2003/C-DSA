// You are using GCC
#include<iostream>
#include<limits>
using namespace std;
const int INF = numeric_limits<int>::max();
const int MAX_N = 4;
void flyodwarshall(int graph[MAX_N][MAX_N]){
    int dist[MAX_N][MAX_N];
    for(int i=0;i<MAX_N;i++){
        for(int j=0;j<MAX_N;j++){
            dist[i][j]= graph[i][j];
        }
    }
    for(int k=0;k<MAX_N;k++){
        for(int i=0;i<MAX_N;i++){
            for(int j=0;j<MAX_N;j++){
                //checking the conditions
                if(dist[i][k]!=INF && dist[k][j]!=INF && dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    cout<<"Shortest path betweem every vertices: "<<endl;
    for(int i=0;i<MAX_N;i++){
        for(int j=0;j<MAX_N;j++){
            if(dist[i][j]==INF){
                cout<<"INF ";
            }else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }    
}
int main(){
    int graph[MAX_N][MAX_N] = {{1,INF,4,INF},
                {1,0,6,3},
                {INF,INF,0,INF},
                {INF,5,1,0}};
    flyodwarshall(graph);
    return 0;
}
