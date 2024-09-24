#include<iostream>
using namespace std;

int CountX(char* p, char x){

    if (p==nullptr) return 0;
    int count = 0;
    for(; *p!=0; ++p)
        if (*p == x)
            ++count;
    return count;

}

int main() {
    char str[] = "hello, world";
    char target = 'l';

    cout << "The character '" << target << "' appears " << CountX(str, target) << " times." << endl;

    return 0;
}