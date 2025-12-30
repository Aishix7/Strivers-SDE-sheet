#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;

    int n = arr.size();

    // prefix sum array
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    int mini = INT_MAX;

    // fix right end R
    for (int R = 1; R <= n; R++) {
        int need = prefix[R] - target;

        // binary search on prefix[0 ... R-1]
        int l = 0, h = R - 1;
        int best = -1;

        while (l <= h) {
            int mid = (l + h) / 2;
            if (prefix[mid] <= need) {
                best = mid;       // valid candidate
                l = mid + 1;      // try to find larger index
            } else {
                h = mid - 1;
            }
        }

        if (best != -1) {
            mini = min(mini, R - best);
        }
    }

    if (mini == INT_MAX) cout << 0 << "\n";
    else cout << mini << "\n";

    return 0;
}
