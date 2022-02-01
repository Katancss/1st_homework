#include <iostream>

using namespace std;

int main() {
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        if (N % 5 == 0) {
            cout << "@";
        }
        else {
            cout << "%";
        }
    }
	return 0;
}
