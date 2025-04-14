#include <iostream>
using namespace std;

int main() {
    int k = 1;
    int rows = 5;

    for (int i = 1; i <= 5; i++) {
        for (int k = 1; k <= rows - i; k++) {
            cout << "  ";
        }

        for (int j = i; j <= 5; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
