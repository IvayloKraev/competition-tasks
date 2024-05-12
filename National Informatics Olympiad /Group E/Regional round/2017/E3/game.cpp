#include <iostream>
#include <cmath>
#include <cstdio>

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

    int sum = 0, closestLatestNum = -100002, closestLatestNumIndex = -1;

    for(int i = 0; i < 200; i++){
        int a;
        cin >> a;

        if(a % 2 == 0) sum += a;

        if(abs(n - a) <= abs(n - closestLatestNum)) closestLatestNum = a, closestLatestNumIndex = i + 1;

        if(sum > m) break;
    }

    cout << closestLatestNumIndex << " " << sum << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}