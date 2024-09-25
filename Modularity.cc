#include <iostream>
#include <stdexcept>
using namespace std;

class Vector {
public:
    Vector(int s)
        : elem{new double[s]}, sz{s} { }

    double& operator[](int i) {
        if (i >= sz) throw out_of_range("Index out of range");
        return elem[i];
    }

    int size() {
        return sz;
    }

private:
    double* elem;
    int sz;
};

int main() {
    Vector v(5);

    for (int i = 0; i < v.size(); ++i) {
        v[i] = i * 2;
    }

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
