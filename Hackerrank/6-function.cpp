/* 
    The program is made to learn function in C++.
 */

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int max_val_1,max_val_2;
    if (a>b){
        max_val_1=a;
    }else{
        max_val_1=b;
    }

    if(c>d){
        max_val_2=c;
    }else{
        max_val_2=d;
    }

    if(max_val_1<max_val_2){
        return max_val_2;
    }else{
        return max_val_1;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}