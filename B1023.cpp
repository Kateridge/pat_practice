#include <iostream>
using namespace std;

int main(){
    int num[10],ans[50];
    int total = 0,k = 0;
    for(int i = 0;i<10;i++){
        cin >> num[i];
        total = total + num[i];
    }
    for(int i = 1;i<10;i++){
        if(num[i]!=0){
            ans[k]=i;
            num[i]--;
            k++;
            break;
        }
    }
    for(int i=0; i<10; i++){
        if(num[i]==0){
            continue;
        }
        else{
            for(int j = 0;j<num[i];j++){
                ans[k++]=i;
            }
            num[i] = 0;
        }
    }
    for(int i=0; i<total;i++){
        cout << ans[i];
    }
    return 0;
}