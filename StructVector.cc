#include<iostream>
using namespace std;

struct Vector {
    int sz;
    double* elem;
};

void VectorInit(Vector& v, int s) {
    v.elem = new double[s];
    v.sz = s;
    for (int i = 0; i < s; ++i) {
        v.elem[i] = i * 2.0;
    }
}

int main() {
    Vector v;
    VectorInit(v, 5);

    for (int i = 0; i < v.sz; ++i) {
        cout << v.elem[i] << " ";
    }
    cout << endl;

    delete[] v.elem;
    return 0;
}
