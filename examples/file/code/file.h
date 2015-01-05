#ifndef FILE_H
#define FILE_H

#define READ "r"
#define WRITE "w"
#define APPEND "a"

void print_file(const char* filename);
void make_file(const char* filename, const char* text);
void append_file(const char* filename, const char* text);

#endif /* FILE_H */
