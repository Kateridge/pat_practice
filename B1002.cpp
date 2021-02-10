#include <iostream>
using namespace std;
const char* pinyin[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main() {
    char c;
    int sum,result[3];
    while((c = getchar())!='\n'){
        sum += c - '0';
    }
    int i;
    for(i = 0;i < 3 && sum!=0;i++){
        result[i] = sum % 10;
        sum = sum / 10;
    }
    i--;
    while(i >= 0){
        if(i == 0)
            cout << pinyin[result[i]] << endl;
        else
            cout << pinyin[result[i]] << " ";
        i--;
    }
}
