#include <iostream>
using namespace std;

void solve(int a[], int n)
{
    if (n < 0) return;
    if (n % 2 == 0) cout << a[n] << " ";
    solve(a, n - 1);
}

int main()
{
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    solve(a, n - 1);
}
