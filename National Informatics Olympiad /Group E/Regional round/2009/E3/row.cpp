#include <iostream>
#include <cstdio>
#include <limits.h>

#define endl '\n'

using namespace std;

int nums[1024];

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int min = INT_MAX, max = INT_MIN;

    for(int i = 0; i < n; ++i){
        cin >> nums[i];

        if(nums[i] > max) max = nums[i];
        if(nums[i] < min) min = nums[i];
    }

    float control = ((min * 1.0) / 3) + ((max * 2.0) / 3);

    for(int i = 0; i < n; ++i){
        if(nums[i] < control) {
            cout << (i + 1) << endl;
            break;
        }
    }


    cout.flush();

    fclose(stdin);
    fclose(stdin);

    return 0;
}