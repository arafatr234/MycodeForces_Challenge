#include <iostream>

using namespace std;

int main() {
    int w;
    cin >> w;

    // Check if we can divide the watermelon in the desired way
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
