/* 
    This program is made to learn about basic data types in C++ (integer,
    long integer, character, float, and double). This program is about input
    and output the variable.
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
    return 0;
}