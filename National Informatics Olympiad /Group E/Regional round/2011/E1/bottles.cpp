#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}


int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;

    cin >> m >> n;

    int number = 1;

    while(true){
        int temp = (n + m) * number;

        if( temp % m == 0 && temp % n == 0 ) {
            cout << number * 2 << endl;
            break;
        }

        number++;
    }

    cout.flush();

    fclose(stdin);
    fclose(stdout);

    return 0;
}