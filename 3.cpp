
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    long long pow = 1;
    for (int k = 0; k < y; ++k) {
        pow *= x;
    }

    cout << pow;
	return 0;
}