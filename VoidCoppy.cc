#include<iostream>
using namespace std;

void CopyFct(){
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];
    for (auto l = 0; l!=10; ++l)
        v2[l] = v1[l];

    cout << v2[5] << endl;
}

int main(){
    CopyFct();
}
