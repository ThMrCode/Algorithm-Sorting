#include "Sorting.h"

int main() {
	// Codigo de prueba
	vector<int> vect = { 321,123,123,245,1236,525,463,376,456 };
	list<int> lst = { 5,21,2,1,0,23,4132,21 };
	Sorting::bubble_sort(vect);
	lst = Sorting::insertion_sort(lst);
	Pointwise::show(vect);
	Pointwise::show(lst);
	return 0;
}