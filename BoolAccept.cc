#include <iostream>
using namespace std;

bool accept()
{
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin >> answer;
    if (answer == 'y')
        return true;
    return false;
}

int main()
{
    bool proceed = accept();
    if (proceed) {
        cout << "You chose to proceed. \n";
    } else {
        cout << "You chose not to proceed. \n";
    }
    return 0;
}