#include <bits/stdc++.h>
using namespace std;

int main() {

    double n,k;
    cin>>n>>k;

    cout << pow(k, n) - pow(k, n - 1) <<endl;

    return 0;
}

