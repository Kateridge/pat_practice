#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct pie{
    double total_price;
    double single_price;
    double stock;
}pies[1000];

bool cmp(pie a, pie b){
    return a.single_price > b.single_price;
}

int main(){
    int N,D;
    cin >> N >> D;
    for(int i = 0; i<N; i++){
        cin >> pies[i].stock;
    }
    for(int i = 0; i<N; i++){
        cin >> pies[i].total_price;
        pies[i].single_price = pies[i].total_price/pies[i].stock;
    }
    sort(pies,pies+N,cmp);
    double ans = 0;
    for(int i = 0;i < N;i++){
        if(D-pies[i].stock <= 0){
            ans = ans + D*pies[i].single_price;
            break;
        }
        else{
            ans = ans + pies[i].total_price;
            D = D - pies[i].stock;
        }     
    }
    printf("%.2f\n",ans);
}