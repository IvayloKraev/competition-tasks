#include <cstdio>
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

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int prev = 0;
        int num = 0, minDiff = 50000001, maxDiff = 0;

        for (; a <= b; a += c) {
            int mirror = 0;
            int copy = a;

            while (copy != 0) {
                mirror =  (mirror * 10) + (copy % 10);
                copy /= 10;
            }

            if (a == mirror) {
                num++;
                if (prev == 0) {
                    prev = a;
                } else {
                    const int diff = a - prev - 1;
                    if (diff < minDiff) minDiff = diff;
                    if (diff > maxDiff) maxDiff = diff;
                    prev = a;
                }
            }
        }

        if (num == 0 || num == 1) {
            cout << num << endl;
        } else {
            cout << num << ' ' << minDiff << ' ' << maxDiff << endl;
        }
    }

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}
