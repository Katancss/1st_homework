
#include <iostream>

using namespace std;

int main() {
    int N = 0;
    int min_value = 0;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            cin >> min_value;
        }
        else {
            int value;
            cin >> value;
            if (value < min_value) {
                min_value = value;
            }
        }
    }
    cout << min_value;
	return 0;
}
