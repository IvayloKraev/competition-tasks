#include <cstdio>
#include <iomanip>
#include <ios>
#include <iostream>

#define endl "\n"

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char input[20];
    int leftSum = 0, rightSum = 0;

    cin >> input;

    for (int i = 0; i < 20; i++) {
        if (input[i] == '\0')
            break;
        rightSum += (input[i] - '0');
    }

    for (int i = 0; i < 20; i++) {
        if (input[i] == '\0')
            break;
        leftSum += (input[i] - '0');
        rightSum -= (input[i] - '0');
        if (leftSum == rightSum) {
            cout << input[i] << ' ' << (i + 1) << endl;
            break;
        }
        if (leftSum > rightSum) {
            cout << 0 << endl;
            break;
        }
    }

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}
