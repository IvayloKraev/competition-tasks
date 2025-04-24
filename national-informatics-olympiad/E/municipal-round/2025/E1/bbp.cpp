#include <cstdio>
#include <iostream>

#define endl '\n'

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    char biggestFirstLetter;
    int biggestHeight;

    cin >> biggestFirstLetter >> biggestHeight;

    for (__uint8_t i = 0; i < 4; i++) {
        char firstLetter;
        int height;

        cin >> firstLetter >> height;

        if (height >= biggestHeight) {
            biggestFirstLetter = firstLetter;
            biggestHeight = height;
        }
    }

    cout << biggestFirstLetter << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}
