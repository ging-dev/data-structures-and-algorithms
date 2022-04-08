#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> *v) {
    for (int i = 0; i < v->size(); i++) {
        cout << v->at(i);
    }
    cout << endl;
}

void recursive (vector<int> *v, int level, int n) {
    for (int i = 0; i <= 1; i++) {
        v->at(level) = i;
        if (level == n - 1) {
            print(v);
        } else {
            recursive (v, level + 1, n);
        }
    }
}

void generate(int n) {
    vector<int> v;
    v.resize(n);
    recursive (&v, 0, n);
}

int main() {
    generate(3);

    return 0;
}
