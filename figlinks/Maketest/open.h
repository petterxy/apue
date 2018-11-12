#include "apue.h"
#include <errno.h>

#define CS_OPEN "/tmp/opend.socket" /* server’s well-known name */
#define CL_OPEN "open"          /* client’s request for server */
int     csopen(char *, int);
