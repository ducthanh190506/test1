#include <iostream>
#include <vector>
using namespace std;
int dx[]={-1, -1, -1, 0, 0, 1, 1, 1};
int dy[]={-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
    int M,N,K,Q;
    cin>>M>>N>>K>>Q;
    vector<vector<int>> grid(M, vector<int>(N, 0));
    for (int i=0;i<K;i++){
        int x,y,v;
        cin>>x>>y>>v;
        grid[x][y]=v;
    }
    for(int i=0;i<Q;i++){
        int x,y;
        cin>>x>>y;
        int sum=0;
        for(int d=0;d<8;d++){
            int nx=x+dx[d];
            int ny=y+dy[d];
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                sum+=grid[nx][ny];
            }
        }
        cout<<sum<<endl;
    }
}
