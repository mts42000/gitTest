#include "atoi.h"

int atoi(char input []) {
	int i = 0;
	int partialResult = 0;
	while(input[i] != 0) {
		int digit = input[i] - 48;
		partialResult = digit + partialResult * 10;
		i++;
	}
	return partialResult;
}
