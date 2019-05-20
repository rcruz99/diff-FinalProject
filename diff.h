#ifndef diff_h
#define diff_h

#include <stdio.h>

void version(void);

void loadfiles(const char* filename1, const char* filename2);

void print_option(const char* name, int value);
void diff_output_conflict_error(void);
void setoption(const char* arg, const char* s, const char* t, int* value);
void showoptions(const char* file1, const char* file2);
void init_options_files(int argc, const char* argv[]);

#endif /* diff_h */
