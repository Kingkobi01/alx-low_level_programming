#ifndef __MAIN_H__
#define __MAIN_H__
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
