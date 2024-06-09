#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Each screen can hold at most 3 icons of 2x2 size, since 3 * 4 = 12 cells out of 15
        int screensFor2x2 = (y + 2) / 3; // Equivalent to ceil(y / 3.0)

        // Remaining cells in the screens occupied by 2x2 icons
        int remainingCells = screensFor2x2 * 15 - y * 4;

        // Place 1x1 icons in the remaining cells
        x -= remainingCells;

        // If there are still 1x1 icons left, calculate additional screens needed
        if (x > 0) {
            int screensFor1x1 = (x + 14) / 15; // Equivalent to ceil(x / 15.0)
            cout << screensFor2x2 + screensFor1x1 << endl;
        } else {
            cout << screensFor2x2 << endl;
        }
    }
    return 0;
}
