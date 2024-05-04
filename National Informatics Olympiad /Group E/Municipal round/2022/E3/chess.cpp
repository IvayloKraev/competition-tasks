#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int commonSet[6] = {1, 1, 2, 2, 2, 8},
    whiteIn[6],
    blackIn[6];

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> whiteIn[0] >> whiteIn[1] >> whiteIn[2] >> whiteIn[3] >> whiteIn[4] >> whiteIn[5];
    cin >> blackIn[0] >> blackIn[1] >> blackIn[2] >> blackIn[3] >> blackIn[4] >> blackIn[5];

    for(int i = 0; i < 6; ++i)
        cout << commonSet[i] - whiteIn[i] << " ";

    cout << endl;

    for(int i = 0; i < 6; ++i)
        cout << commonSet[i] - blackIn[i] << " ";


    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}