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

    int F = 0, A = 0;

    for(int i = 0; i < 7; i++){
        int input;
        cin >> input;

        if(input == 6) A++;
        else if (input == 2) F++;
    }

    if(F >= 1 || A == 0) cout << "No" << endl;
    else
        for (int i = 0; i < A; ++i)
            cout << "*";

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}