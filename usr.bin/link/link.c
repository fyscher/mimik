#include <stdio.h>
#include <unistd.h>
#include <nl_types.h>
#include <errno.h>
#include <string.h>
#include "conf.h"

int
main (const int argc, const char **argv)
{
    int err = 0;

    const char *self = DEFAULT_SELF;
    if (argc > 0)
    {
        self = argv[0];
    }

    nl_catd catd = catopen("link", 0);
    if (catd == (nl_catd)-1)
    {
        fprintf(stderr, CATD_ERROR, self, errno, strerror(errno));
    }

    if (argc != 3)
    {
        fprintf(stderr, catgets(catd, 1, 1, ARG_ERROR), self);
    }

    if (link(argv[1], argv[2]) < 0)
    {
        fprintf(stderr, catgets(catd, 1, 2, LINK_ERROR), self, errno, strerror(errno));
        err = 1;
    }

    if (catd != (nl_catd)-1)
    {
        catclose(catd);
    }

    return err;
}
