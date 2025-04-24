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

    int leftNum, rightNum, spaces;
    char leftType, rightType;

    cin >> leftNum >> leftType;
    cin >> rightNum >> rightType;
    cin >> spaces;

    if(leftType == 'A') cout << min(leftNum, spaces) << endl;
    else cout << max(0, spaces - leftNum) << endl;


    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}