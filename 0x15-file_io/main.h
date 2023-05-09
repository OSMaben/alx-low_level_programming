#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_READNO "Error: Can't read from file %s\n"
#define ERR_WRITENO "Error: Can't write to %s\n"
#define ERR_CLOSENO "Error: Can't close fd %d\n"
#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void elf_check(unsigned char *e_ident);
void pmagic(unsigned char *e_ident);
void pclass(unsigned char *e_ident);
void pdata(unsigned char *e_ident);
void pversion(unsigned char *e_ident);
void pabi(unsigned char *e_ident);
void posabi(unsigned char *e_ident);
void ptype(unsigned int e_type, unsigned char *e_ident);
void pentry(unsigned long int e_entry, unsigned char *e_ident);
void celf(int elf);
#endif

