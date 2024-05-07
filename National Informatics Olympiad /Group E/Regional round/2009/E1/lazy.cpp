#include <iostream>
#include <cstdio>
#include <cstring>

#define endl '\n'

using namespace std;

char input[30002];

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> input;

    int n = strlen(input) - 1,
        firstFib = 1,
        secondFib = 1,
        result = 1;

    while(true) {
        int currentFib = firstFib + secondFib;
        if(currentFib > n) break;

        firstFib = secondFib;
        secondFib = currentFib;
        result++;

    }

    cout << result << endl;


    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}