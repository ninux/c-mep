#include <stdio.h>
#include "list.h"

int main(char argc, char** argv)
{
	list_add("Edsger W.", "Djikstra");
	list_add("Donald E.", "Knuth");
	list_add("Niklaus", "Wirth");
	list_add("Konrad", "Zuse");
	list_add("Charles", "Babbage");

	list_print();

	list_delete();

	list_add("Nino", "Ninux");
	list_add("Ervin", "Schroedinger");

	list_print();

	return 0;
}
