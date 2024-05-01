#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;

    cin >> n;

    for(int i = 1; i <= n; ++i){
        for (int j = 1; j <= i ; ++j) {
            if(j == 1 || j == i  || i == n) cout << "* ";
            else cout << ". ";
        }
        cout << endl;
    }

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}