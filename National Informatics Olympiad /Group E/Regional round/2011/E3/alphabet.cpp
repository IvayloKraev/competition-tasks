#include <iostream>
#include <cstdio>
#include <cctype>

#define endl '\n'

using namespace std;


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int reslut = 0;

    for(int i = 0; i < m; ++i){
        char letter;
        cin >> letter;

        if(tolower(letter) - 96 == n) {reslut = (i + 1); break;}

        while(letter != '.') cin >> letter;
    }

    if(reslut > 0) cout << "win " << reslut << endl;
    else cout << "lose" << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}