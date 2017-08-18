#include <iostream>
#include <cstdio>
using namespace std;

/*
Input format: Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output format: Print each element on a new line in the same order it was received as input.
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

*/
int main(){
    // Complete the code.
    int n = 0;
    long l = 0;
    char c = 0;
    float f = 0;
    double d = 0;
    scanf("%d %ld %c %f %lf\n", &n, &l, &c, &f, &d);
    printf("%d\n", n);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%f\n", f);
    printf("%lf\n", d);
    return 0;
}
