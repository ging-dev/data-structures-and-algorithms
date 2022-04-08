#include<bits/stdc++.h>

using namespace std;

vector<int> a;
vector<int> ret;

void recursive(vector<int> v, int rank) {
    for (int i = 0; i < v.size(); i++) {
        ret.at(rank) = v.at(i);

        vector<int> tmp = v;
        tmp.erase(tmp.begin() + i);

        if (tmp.size() == 0) {
            for (int x: ret) {
                cout << x;
            }
            cout << endl;
        } else {
            recursive(tmp, rank + 1);
        }

    }
}

int main() {
    int n;
    cin >> n;
    a.resize(n);
    ret.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    recursive(a, 0);

    return 0;
}
