#include <iostream>
#include <cstdio>

#define endl '\n'

typedef long long int lli;

using namespace std;

const int memoryPerSecond = 16;

int main() {
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    lli n, m, k;

    cin >> n >> m >> k;

    lli neededMemory = (n * 60 + m) * memoryPerSecond;

    if(neededMemory <= k * 1024) cout << "YES" << endl;
    else cout << "NO" << endl << neededMemory - k * 1024 << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}