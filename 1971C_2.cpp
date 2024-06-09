#include <iostream>
#include <limits>

using namespace std;

int findMaxLength(int a[], int n, int d) {
    int maxLength = 0;
    int left = 0, right = 0;
    int minElement = INT_MAX;  // Initialize with maximum integer value

    for (int i = 0; i < n; ++i) {
        minElement = min(minElement, a[i]);  // Update minimum element
        while (a[right] - minElement > d && right < n - 1) {
            left++;  // Shrink window from the left
            minElement = max(minElement, a[left]);  // Re-calculate minElement after shrinking
        }
        maxLength = max(maxLength, right - left + 1); // Update maximum length
        right++;  // Expand window from the right
    }

    return maxLength;
}

int main() {
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int maxLength = findMaxLength(a, n, d);
    cout << maxLength << endl;

    return 0;
}
