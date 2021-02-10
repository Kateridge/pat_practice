#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main(){
    //读入初始数据
      //读入节点数量、边数量、起始节点、目标节点
    int N,M,c1,c2;
    cin >> N >> M >> c1 >> c2;
      //读入初始节点权重
    vector<int> teams_init(N,0);
    for(int i = 0;i < N;i++)
        cin >> teams_init[i];
      //读入各条边权重
    vector<vector<int>> e(N,vector<int>(N, INT_MAX));
    for(int i = 0;i < M;i++){
        int a,b,c;
        cin >> a >> b >> c;
        e[a][b] = e[b][a] = c;
    }
    //dijkstra算法
      //c1到其他各节点的最短路径
    vector<int> dis(N, INT_MAX);
    dis[c1] = 0;
      //c1到其他各节点的最短路径的条数
    vector<int> road_num(N,0);
    road_num[c1] = 1;
      //初始化visit数组
    vector<bool> visit(N,false);
      //初始化节点权重数组
    vector<int> teams(N,0);
    teams[c1] = teams_init[c1];
      //算法开始
    for(int i = 0;i < N-1; i++){
        int curr_city = -1, currdis_min = INT_MAX;
        //选出当前路径最小的节点
        for(int j = 0; j<N; j++){
            if(!visit[j] && currdis_min > dis[j]){
                curr_city = j;
                currdis_min = dis[j];
            }
        }
        if (curr_city == -1) break;  //如果无路可走了就结束
        visit[curr_city] = true;     //更新visit数组
        for(int k = 0; k<N; k++){
            if(!visit[k] && e[curr_city][k] != INT_MAX){
                if(dis[curr_city] + e[curr_city][k] < dis[k]){
                    dis[k] = dis[curr_city] + e[curr_city][k];
                    teams[k] = teams[curr_city] + teams_init[k];
                    road_num[k] = road_num[curr_city];
                }
                else if(dis[curr_city] + e[curr_city][k] == dis[k]){
                    road_num[k] += road_num[curr_city];
                    if(teams[curr_city] + teams_init[k] > teams[k])
                        teams[k] = teams[curr_city] + teams_init[k];
                }
            }
        }
    }
    cout << road_num[c2] << " " << teams[c2];
    return 0;
}