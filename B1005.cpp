#include <iostream>
#include <algorithm>
using namespace std;

int hash_array[10000] = {0};

int check(int num, int hash_array[]){
    if(num > 1){
        hash_array[num]++;
        if(num % 2 == 0) check(num/2, hash_array);
        else check((num*3 + 1)/2, hash_array);
    }
}

bool cmp(int a,int b)
{
    return a>b;
}

int main(){
    int num;
    cin >> num;
    int *num_array = new int[num];
    for(int i = 0;i < num; i++){
        cin >> num_array[i];
        check(num_array[i], hash_array);
    }
    //将数组降序排序
    sort(num_array,num_array+num,cmp);
    int first = 1;
    for(int i = 0;i < num; i++){
        if(hash_array[num_array[i]] == 1){
            // 要求最后一个数字后没有空格
            if(first == 1){
                cout << num_array[i];
                first = 0;
            }
            else{
                cout << " " << num_array[i];
            }
        }
    }
    return 0;
}