#ifndef __MAIN_H__
#define __MAIN_H__
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
#endif
