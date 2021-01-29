// C program to convert a number from any base
// to decimal
#include<bits/stdc++.h>
using namespace std;
char str[123456];
// To return value of a char. For example, 2 is
// returned for '2'. 10 is returned for 'A', 11
// for 'B'
int val(char c) {
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

// Function to convert a number from given base 'b'
// to decimal
unsigned long long toDeci(char *str, int base) {
    int len = strlen(str);
    int power = 1; // Initialize power of base
    unsigned long long num = 0; // Initialize result
    int i;

    // Decimal equivalent is str[len-1]*1 +
    // str[len-1]*base + str[len-1]*(base^2) + ...
    for (i = len - 1; i >= 0; i--) {
        // A digit in input number must be
        // less than number's base

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}

// Driver code
int main() {

    gets(str);
    int res;
    // int base = 10;
    for(int i=36; i>=2; i--) {
        res=toDeci(str,i);
        if(res%(i-1)==0) {
            cout<<i<<endl;
            exit(0);
        }

    }
    return 0;
}

