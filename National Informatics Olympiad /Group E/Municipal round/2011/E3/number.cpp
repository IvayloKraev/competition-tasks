#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    cin >> n;

    int a = n / 1000 % 10,
        b = n / 100 % 10,
        c = n / 10 % 10,
        d = n / 1 % 10;

    if(
            (a == 2 || a == 3 || a == 5 || a == 7) &&
            (b == 2 || b == 3 || b == 5 || b == 7) &&
            (c == 2 || c == 3 || c == 5 || c == 7) &&
            (d == 2 || d == 3 || d == 5 || d == 7)
    ) cout << (a * b * c * d) << endl;
    else
        cout << (a + b + c + d) << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}