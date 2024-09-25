#include<iostream>
using namespace std;

enum class Color { red, blue, green };

void ColorNumber(Color col) {
    if(col == Color::red) {
        cout << "Color red" << endl;
    }
}

int main() {
    Color col = Color::red;
    ColorNumber(col);
    return 0;
}
