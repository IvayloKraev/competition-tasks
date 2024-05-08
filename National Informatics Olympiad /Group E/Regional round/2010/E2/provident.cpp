#include <iostream>
#include <cstdio>

#define endl '\n'

using namespace std;

const int smallPacket = 6,
        bigPacket = 8;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    int packets = 0;

    while(true){
        if(n == 0) {
            cout << packets;
            break;
        }
        if(n < smallPacket) {
            cout << "No solution" << endl;
            break;
        }
        if(n % smallPacket == 0 && n % bigPacket != 0 && n < 24) {
            packets += (n / smallPacket);
            cout << packets << endl;
            break;
        }
        else {
            n -= 8;
            ++packets;
        }
    }
    
    cout.flush();
    
    fclose(stdin);
    fclose(stdout);
    
    
    return 0;
}