/*
The contents of this file are hereby released to the public domain.
                                   -- Rahul Dhesi 1987/02/08
*/

/* Functions defined by Booz */
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

struct zoo_header ;
struct direntry ;

int getfile (int, int, long);
int lzd (int, int);
int readdir ();
int rd_zooh (struct zoo_header *header, int zoo_han);
int rd_dir (struct direntry *direntry, int zoo_han);
void addbfcrc(char *buffer, int count);
void prterror(int level, char *a, char *b, char *c);

#ifdef TINY
int oozext (char *zoo_path);
#endif

#ifdef SMALL
int oozext (char *zoo_path, int argc, char *argv[]);
#endif

#ifdef BIG
void oozext (char *zoo_path, char *option, int argc, char *argv[]);
#endif

#ifndef TINY
int match (char *string, char *pattern);
int needed (char *fname, int argc, char *argv[]);
#endif

void putstr (char *);
char *itoa (char pad_ch, long n, char *buf, int buflen);
int fixfname ();
void memerr();
int cfactor (long org_size, long size_now);

/* Standard functions */

/*
char *malloc ();
int close ();
int creat ();
int open ();
int read ();
int unlink ();
int write ();
long lseek ();
unsigned int strlen ();
*/