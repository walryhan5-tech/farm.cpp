#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    if (!(cin >> N >> K)) return 0;

    vector<long long> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    long long max_sum = 0;
    for (int i = 0; i < K && i < N; ++i) {
        if (a[i] > 0) {
            max_sum += a[i];
        }
    }

    cout << max_sum << "\n";

    return 0;
}
