#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

//struct definition
struct student{
    char id[13];
    int grade;
    int location;
    int final_rank;
    int local_rank;
}stu[30000];

//diy cmp function
bool cmp(student a, student b){
    if(a.grade != b.grade) return a.grade > b.grade;
    else return strcmp(a.id,b.id) < 0;
}

int main(){
    int N,total = 0;
    cin >> N;//input amounts of test location
    for(int i = 0; i < N;i++){
        int n;
        cin >> n; //input amounts of testees for this location
        //input testee status for this location
        for(int j = 0; j < n; j++){
            cin >> stu[total].id;
            cin >> stu[total].grade;
            stu[total].location = i + 1;
            stu[total].final_rank = 0;
            stu[total].local_rank = 0;
            total++;
        }
        //sort this location 
        sort(stu + total - n, stu + total, cmp);
        //calculate local_rank for this location
        stu[total-n].local_rank = 1;
        for(int j = total-n+1; j < total; j++){
            if(stu[j].grade == stu[j-1].grade)
                stu[j].local_rank = stu[j-1].local_rank;
            else
                stu[j].local_rank = j-(total-n)+1;
        }
    }
    cout << total << endl; // output total amount of testees
    //sort all testees
    sort(stu, stu + total, cmp);
    //calculate final_rank for all testees
    stu[0].final_rank = 1;
    for(int i = 1; i<total; i++){
        if(stu[i].grade == stu[i-1].grade)
            stu[i].final_rank = stu[i-1].final_rank;
        else
            stu[i].final_rank = i + 1;
    }
    //output all status
    for(int i = 0; i<total; i++){
        cout << stu[i].id << " " << stu[i].final_rank << " " << stu[i].location << " " << stu[i].local_rank << endl;
    }
    return 0;
}