#include <iostream>
#include "random.h"

using namespace std;
using ll = long long;

int main(int argc, char* argv[]) {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int n = 500'000;
    
    cout << n << endl;
    cout << 0;
    for (int i = 1; i < n; i++) {
        cout << " " << gen.uniform(0, 998244353);
    }
    cout << endl;
    return 0;
}
