#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/cpp-maps
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::map<std::string,int> m;
    int num_Q;
    int idx,marks;
    std::string name;
    std::cin >> num_Q;
    for(int i=0;i<num_Q;i++){
        std::cin >> idx >> name ;
        switch(idx){
            case 1:
                std::cin >> marks;
                if(m.find(name)==m.end()){
                    m.insert(std::make_pair(name,marks));
                }else{
                    m[name]+=marks;
                }
                break;
            case 2:
                m.erase(name);
                break;
            case 3:
                std::cout << (m.find(name)==m.end()?0:m[name])<<std::endl;
                break;
        }
    }
    return 0;
}
