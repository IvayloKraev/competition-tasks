#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int volumePerFish = 3;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int v, n;

    cin >> v >> n;

    if(n * volumePerFish > v) cout << "YES " << n - ( v / volumePerFish ) << endl;
    else cout << "NO" << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}