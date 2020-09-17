#include <iostream>
#include <iomanip> 
using namespace std;

// Link to the problem : https://www.hackerrank.com/challenges/prettyprint
int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        /* Enter your code here */
        std::cout << std::hex << std::left << std::showbase << std::nouppercase;
        std::cout << (long long)A << std::endl;

        std::cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2);
        std::cout << B << std::endl;

        std::cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9);
        std::cout << C << std::endl;
    }
    return 0;

}