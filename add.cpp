#include <iostream>
#include "atoi.h"
/*
	This is the start of main function
*/

int main(int argc, char * argv[]) {
	std::cout << argv[1] << ", " << argv[2] << std::endl;
	std::cout << "The sum is: " << atoi(argv[1]) + atoi(argv[2]) << std::endl;
	return 0;
}

/*
	This is the enf of main function
*/
