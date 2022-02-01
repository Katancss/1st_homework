#include <iostream>

using namespace std;

int main() {

	unsigned int current_num = 1;
	unsigned int max_num = 0;
	int current_value = 0;
	int old_value = 0;

	cin >> old_value;
	while (cin >> current_value) {
		if (current_value > old_value) {
			++current_num;
		}
		else if (current_num > max_num) {
			max_num = current_num;
			current_num = 1;
		}
		else {
			current_num = 1;
		}
		old_value = current_value;
	}

	cout << max_num;

	return 0;
}