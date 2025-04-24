#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

char num;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> num;

    while (true){
        if (num == '.') break;
        else if(num != '0')
            cout << num,
            cin >> num;
        else {
            cout << '0', cin >> num;
            while (num == '0') cin >> num;
        }
    }

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}