
#include <iostream>

using namespace std;

int main() {

	int min_value = 0;
	int current_value = 0;

	bool flag = false;
	while (cin >> current_value) {
		if (!flag) {
			min_value = current_value;
			flag = true;
		}
		if (current_value % 101 < min_value % 101) {
			min_value = current_value;
		}
		else if (current_value % 101 == min_value % 101) {
			min_value = min(min_value, current_value);
		}
	}

	cout << min_value;

	return 0;
}
