#include <cmath>
#include <cstdio>
#include <iostream>

#define endl '\n'

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B, C, D, N;

    cin >> A >> B >> C >> D >> N;

    const int startMinutes = A * 60 + B,
            endMinutes = C * 60 + D;
    const int duration = endMinutes - startMinutes;
    const int startBreak = ceil((duration - N)*1.0/2.0) + startMinutes;

    cout << startBreak / 60 << ' ' << startBreak % 60 << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}
