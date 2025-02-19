#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, m; // dimensions of input matrix
char mat[105][105]; // input matrix
ll dp[105][105][105];

ll f(ll i, ll j, ll x, ll y) {
    if (i > n || j > m || x > n || y > m || mat[i][j] == '#' || mat[x][y] == '#')
        return 0;
    
    if (i == n && j == m)
        return (mat[i][j] == '*');

    if (dp[i][j][x] != -1)
        return dp[i][j][x];

    ll result = 0;
    result = max(result, f(i + 1, j, x + 1, y));
    result = max(result, f(i + 1, j, x, y + 1));
    result = max(result, f(i, j + 1, x + 1, y));
    result = max(result, f(i, j + 1, x, y + 1));

    result += (mat[i][j] == '*');
    result += (mat[x][y] == '*');

    if (i == x && j == y && mat[i][j] == '*')
        result--;

    return dp[i][j][x] = result;
}

int main() {
    cin >> n >> m; // Read dimensions
    memset(dp, -1, sizeof dp);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mat[i][j];
        }
    }

    cout << f(1, 1, 1, 1) << endl; // Print the result
    return 0;
}
