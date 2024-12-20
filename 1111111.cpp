#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int* a = new int[m];
    int* b = new int[n];

    for (int i = 0; i < m; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    




    set<int> sa(a, a + m), sb(b, b + n), t1;
    for (int x : sa)
        if (sb.find(x) == sb.end()) t1.insert(x);

    vector<int> r1(t1.begin(), t1.end());
    for (int x : r1) cout << x << " ";
    cout << endl;

    




    set<int> t2;
    for (int x : sa)
        if (sb.find(x) == sb.end()) t2.insert(x);
    for (int x : sb)
        if (sa.find(x) == sa.end()) t2.insert(x);

    vector<int> r2(t2.begin(), t2.end());
    for (int x : r2) cout << x << " ";
    cout << endl;

    






    set<int> t3;
    t3.insert(sa.begin(), sa.end());
    t3.insert(sb.begin(), sb.end());

    vector<int> r3(t3.begin(), t3.end());
    for (int x : r3) cout << x << " ";
    cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}
