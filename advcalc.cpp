#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <stdio.h>
#include "calculator.h"
using namespace std;

int main(int argc, char *argv[]) {
	Calculator calcl;

	if (2 == argc) {
		Calculator calc(argv[1]);
		calc.compile();
	}
	else if(argc==3) {
		Calculator calc(argv[1]);
		calcl.compile(argv[2]);
	}
	else if(argc==1)
		calcl.interpret();
	return 0;
}

