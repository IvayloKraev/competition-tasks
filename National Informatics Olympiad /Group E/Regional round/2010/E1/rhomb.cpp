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

    cin >> n;

    for (int i = 0; i < n; ++i) {

        for (int j = n; j > 0; --j) {
            if (j <= i + 1)
                cout << j;
            else
                cout << " ";
        }
        for (int j = 1; j < i + 1; ++j) {
            cout << j + 1;
        }
        cout << endl;
    }

    for (int i = n - 1; i > 0; --i) {
        for (int j = n; j > 0; --j) {
            if (j < i + 1)
                cout << j;
            else
                cout << " ";
        }

        for (int j = 2; j < i + 1; ++j) {
            cout << j;
        }

        cout << endl;
    }

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}