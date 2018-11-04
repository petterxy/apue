#include "apue.h"
#include <sys/socket.h>

#define	CMSG_LEN(l)		(__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define	CONTROLLEN	CMSG_LEN(sizeof(int))


int
main(void)
{
    void *ptr;
    ptr = malloc(CONTROLLEN);
}
