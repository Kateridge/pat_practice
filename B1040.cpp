#include <iostream>
#include <cstring>
using namespace std;

const int N = 100000;

int main(){
    char str[N];
    int leftNumP[N] = {0};
    int rightNumT[N] = {0};
    cin >> str;
    int len = strlen(str);
    for(int i = 0;i < len;i++){
        if(i > 0)
            leftNumP[i] = leftNumP[i-1];
        if(str[i] == 'P')
            leftNumP[i]++;
    }
    for(int i = len-1; i >= 0; i--){
        if(i < len - 1 )
            rightNumT[i] = rightNumT[i+1];
        if(str[i] == 'T')
            rightNumT[i]++;
    }
    int ans = 0;
    for(int i = 1;i < len-1;i++){
        if(str[i] == 'A')
            ans = (ans + leftNumP[i]*rightNumT[i]) % 1000000007;
    }
    cout << ans;
    return 0;
}