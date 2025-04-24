#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>

#define endl '\n'

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K, Y, A, B;

    cin >> N >> K >> Y >> A >> B;

    int totalPrice = 0;

    for (int i = 0; i < N; i+=K) {
        const int sumOfNumbers = (i % 10) + (i / 10) % 10 + (i / 100);

        const int leftDistance = min(N - i, K);

        if (sumOfNumbers % Y == 0) {
            totalPrice += B * leftDistance;
        }
        else {
            totalPrice += A * leftDistance;
        }
    }

    cout << totalPrice << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}
