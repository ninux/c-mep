#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "boolean.h"

static entryptr_t head = NULL;

static name_t* create_name(const char* fname, const char* lname);
static entryptr_t create_entry(name_t* name);
static void add_to_list(entryptr_t entry);
static bool add_entry();
static void delete_list();

static name_t* create_name(const char* fname, const char* lname)
{
	name_t* name;
	char* first;
	char* last;

	name = (name_t*)malloc(sizeof(name_t));
	if (name == NULL) {
		/* could not allocate memory */
		return NULL;
	}

	name->first = malloc(strlen(fname));
	if (name->first == NULL) {
		/* could not allocate memory */
		free(name);
		return NULL;
	}

	name->last = malloc(strlen(lname));
	if (name->last == NULL) {
		/* could not allocate memory */
		free(name->first);
		free(name);
		return NULL;
	}

	/* transfer the strings to heap */
	strcpy(name->first, fname);
	strcpy(name->last, lname);

	return name;
}

static entryptr_t create_entry(name_t* name)
{
	entryptr_t n;

	n = (entryptr_t)malloc(sizeof(entry_t));
	if (n == NULL) {
		/* could not allocate memory */
		/* free the allocated name */
		free(name->last);
		free(name->first);
		free(name);
		return NULL;
	} else {
		n->name = name;
		n->next = NULL;
	}

	return n;
}

static void add_to_list(entryptr_t entry)
{
	/* add the entry at head of list */
	entry->next = head;
	head = entry;
}

static bool add_entry(const char* fname, const char* lname)
{
	name_t* name;
	entryptr_t entry;

	name = create_name(fname, lname);
	if (name != NULL) {
		entry = create_entry(name);
		if (entry != NULL) {
			add_to_list(entry);
			return true;
		}
	}

	return false;

}

static void delete_list(entryptr_t element)
{
	if (element != NULL) {
		delete_list(element->next);
		free(element->name->first);
		free(element->name->last);
		free(element->name);
		free(element);
	}
}

void list_add(const char* firstname, const char* lastname)
{
	add_entry(firstname, lastname);
}

void list_print(void)
{
	entryptr_t node = head;
	printf("current list:\n");
	while (node != NULL) {
		printf("> %s %s\n", node->name->first, node->name->last);
		node = node->next;
	}
}

void list_delete(void)
{
	delete_list(head);
	head = NULL;
}
