#include "vector.h"



int Wrap(int value, int max) {
	max++;
	return (value + max) % max;
}