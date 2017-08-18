#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
Task: Read three numbers from STDIN and print their sum to STDOUT.

Input format: A single line containing 3 space-separated integers: a, b, and c.

Constraints: 1 <= a, b, c <= 1000

Output format: Print the sum of the three numbers on a single line.
*/
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, sum;
    cin >> a>> b>> c;
    sum = a + b + c;
    cout << sum;
    return 0;
}
