#include <iostream>
using namespace std;

bool accept2() {
    cout << "Do you want to proceed (y or n)=\n";
    char answer = 0;
    cin >> answer;
    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}

int main() {
    bool proceed = accept2();
    if (proceed) {
        cout << "You chose to proceed.\n";
    }else {
        cout << "You chose not to proceed. \n";
    }
    return 0;
}