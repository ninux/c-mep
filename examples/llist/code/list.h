#ifndef LIST_H
#define LIST_H

typedef struct /* name */ {
	char* first;
	char* last;
} name_t;

typedef struct entry* entryptr_t;

typedef struct entry {
	name_t* name;
	entryptr_t next;
} entry_t;

void list_add(const char* firstname, const char* lastname);
void list_print(void);
void list_delete(void);

#endif /* LIST_H */
