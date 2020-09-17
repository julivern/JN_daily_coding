#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/classes-objects
// Write your Student class here
class Student{
    private:
        std::vector<int> score;
        int length=5;
    public:
        void input(){
            int input_num;
            for(int i=0;i<length;i++){
                std::cin >> input_num;
                score.push_back(input_num);
            }
        }
        int calculateTotalScore(){
            int result=0;
            for(int i;i<score.size();i++){
                result+=score[i];
            }
            return result;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
