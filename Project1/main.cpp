#include <iostream>
using namespace std;
#include <math.h>



int main()
{
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 2 * i - 1; j += 2) {
			cout << j << "\t";
		}
		cout << endl;
	}
}