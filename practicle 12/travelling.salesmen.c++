#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cost[15][15];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    int cities[15];

    for (int i = 0; i < n; i++) {
        cities[i] = i;
    }

    int minCost = INT_MAX;

    do {
        int currentCost = 0;

        for (int i = 0; i < n - 1; i++) {
            currentCost += cost[cities[i]][cities[i + 1]];
        }

        currentCost += cost[cities[n - 1]][cities[0]];

        minCost = min(minCost, currentCost);

    } while (next_permutation(cities + 1, cities + n));

    cout << "Minimum Cost: " << minCost << endl;

    return 0;
}
