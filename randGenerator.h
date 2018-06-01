#include <time.h>
#include <stdlib.h>

int getRandInt(){
	srand(time(NULL));
	return rand()%10;
}