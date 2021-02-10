#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> coefficients;
    vector<int> indexes;
    int coefficient, index;
    while(cin >> coefficient){
        cin >> index;
        coefficients.push_back(coefficient);
        indexes.push_back(index);
        if(cin.get()=='\n') break; //输入以回车结束
    }
    int len = coefficients.size();
    int zero_flag = 1;
    for(int i=0;i<len;i++){
        coefficients[i] = coefficients[i] * indexes[i];
        indexes[i] = indexes[i] - 1;
        if(indexes[i] < 0){
            continue;
        }
        else{
            if(i == 0){
                cout << coefficients[i] << " " << indexes[i];
                zero_flag = 0;
            }
            else{
                cout << " " << coefficients[i] << " " << indexes[i];
                zero_flag = 0;
            }
        }
    }
    if(zero_flag)
        cout << "0 0";
    return 0;
}