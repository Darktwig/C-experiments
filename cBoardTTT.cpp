#include <iostream>
using namespace std;

void drawBoard(int x, int y) {
	for (int i=0; i<y; i++) {
		cout << "----";
	}
	cout << endl;
	for (int i=0;i<x;i++){
		cout << "| ";
		for (int j=0; j<y;j++) {
			cout << " | ";
		}
		cout << endl;
		for (int i=0; i<y;i++) {
			cout << "---"; 
    	}
		cout <<endl;
	}
}

int main() {
	int x, y;
	cout << "Enter width (x): ";
	cin >> x;

    cout << "Enter height (y): ";
    cin >> y;

    drawBoard(x, y);
    return 0;
}



