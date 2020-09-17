#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> result;
    int num;
    stringstream ss(str);
    while(ss){
        ss >> num;
        // result.insert(result.begin(),num);
        result.emplace_back(num);
        ss.ignore();
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}