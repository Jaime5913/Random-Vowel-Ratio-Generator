#include <stdio.h>
#include <stdlib.h>
#include "Worker.h"

int main (int argc, char *argv[]){

	//Sets the seed from the comand line
	int seed = atoi(argv[1]);
	srand(seed);

	printf("[Initiator] : With seed: %d\n", seed);
	// calls the function get_running_ratio() from Worker.h
	float running_ratio = get_running_ratio();

	printf("[Initiator]: Running ratio: %f\n", running_ratio);

	return 0;

}


