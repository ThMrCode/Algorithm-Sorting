#include "Sorting.h"

int main() {
	vector<int> vect = { 321,123,123,245,1236,525,463,376,456 };
	Sorting::bubble_sort(vect);
	Pointwise::show(vect);
	return 0;
}