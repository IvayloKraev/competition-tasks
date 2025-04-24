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

    int n;
    int a,b,c,d,e,f;
    int x, y, z;

    cin >> n;

    a = n / 100000 % 10;
    b = n / 10000 % 10;
    c = n / 1000 % 10;
    d = n / 100 % 10;
    e = n / 10 % 10;
    f = n / 1 % 10;

    x = a * 100 + c * 10 + e;
    y = e * 100 + c * 10 + a;

    z = a % 2 + b % 2 + c % 2 + d % 2 + e % 2 + f % 2;

    cout << z << abs(x - y) << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}