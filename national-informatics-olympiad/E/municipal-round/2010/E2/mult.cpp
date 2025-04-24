#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    cin >> a;

    int mul1 = (a / 10) * (a % 10),
        mul2 = (a / 100) * (a % 100);

    cout << max(mul1, mul2) << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}