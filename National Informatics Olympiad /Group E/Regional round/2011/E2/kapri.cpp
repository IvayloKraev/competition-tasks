#include <iostream>
#include <cmath>
#include <cstdio>

#define endl '\n'

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;


    int horray = 0;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;

        int number = k == 0 ? 1 : (floor(log10(k)) + 1);

        long long int newK = pow(static_cast<long long int>(k), 2),
            del = pow(static_cast<long long int>(10), number);

        int kap = newK / del,
            rikar = newK % del;

        if(kap + rikar == k) horray++;
    }

    cout << horray << endl;

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}