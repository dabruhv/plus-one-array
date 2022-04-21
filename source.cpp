#include<iostream>

using namespace std;

int main() {

	
	
	int digits[] = {2,4,6};

	for (int i = 0; i <= 2; i++)
		cout << digits[i];

	cout << endl << endl;

	cout << "Now we do the funny ha ha adding" << endl;

	if (digits[2] <= 8)
		digits[2] += 1;
	else if (digits[2] == 9) {
		digits[2] = 0;
		if (digits[1] <= 8)
			digits[1] += 1;
		else if (digits[1] == 9) {
			digits[1] = 0;
			if (digits[0] <= 8)
				digits[0] += 1;
		}
	}
	for (int i = 0; i <= 2; i++)
		cout << digits[i];
}
