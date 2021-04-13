#include<stdio.h>

void main() {
	int _a = 2;
	int _b = 1;
	int _c = 0;

	while (_c < 2) {
		while (_b <= 4) {
			int _d = 1;
			while (_d <= _b) {
				printf(" %d", _a);
				_a += 2;
				_d++;
			}
			printf("\n");
			_b++;
		}
		_c++;
		_b=1;
	}
	
	fgetc(stdin);
}