#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int memo[100][100];

int matrixChainMultiplication(int p[], int i, int j) {
    if (i == j) {
        return 0;
    }

    if (memo[i][j] != -1)
        return memo[i][j];

    int m = __INT_MAX__, a;

    for (int k = i; k <  j; k++) {
        a = matrixChainMultiplication(p, i, k) + matrixChainMultiplication(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        cout << a << endl;
        m = min(a, m);
    }

    memo[i][j] = m;
    return m;
}

int main() {
    int p[] = {1, 2, 3, 4};
    int j = sizeof(p) / sizeof(int) - 1;

    for (int i = 1; i <= j; i++) {
        for (int k = 1; k <= j; k++) {
            memo[i][k] = -1;
        }
    }

    cout << matrixChainMultiplication(p, 1, j);

    return 0;
}

