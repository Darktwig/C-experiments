#include <iostream>
using namespace std;

// Function prototype
void drawBoard(int x, int y);

int main() {
    int x, y;

    cout << "Enter width (x): ";
    cin >> x;

    cout << "Enter height (y): ";
    cin >> y;

    drawBoard(x, y);

    return 0;
}

// Function definition
void drawBoard(int x, int y) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << "[]";
        }
        cout << endl;
    }
}