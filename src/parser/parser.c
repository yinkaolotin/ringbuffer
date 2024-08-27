#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

#include "parser/parser.h"
#include "exception/exception.h"


const struct cmd *parse_cmd(int argc, char *argv[])
{
    // if (argc < 2) {
    //     EXCEPTION_AND_EXIT(USAGE_EXCEPTION, argv[0]);
    // }
    struct cmd *c = (struct cmd *)calloc(1, sizeof(struct cmd));
    if (c == NULL) {
        EXCEPTION_AND_EXIT(PARSE_EXCEPTION);
    }

    /*
    int32_t opt;
    while((opt = getopt(argc, argv, EXPECTED_OPTS_FMT)) != -1) {
        switch(opt) {
        case OPTS_UNKNOWN:
            c->flags |= FLAG_DEFAULT;
            break;
        case OPTS_UNKNOWN: EXCEPTION_AND_EXIT("Usage: %s [-a]\n", argv[0]);
        }
    }
    */

    return c;
}
