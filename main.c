#include <stdio.h>
#include "parser/parser.h"
#include "exception/exception.h"

int main(int argc, char *argv[])
{
    const struct cmd *c = parse_cmd(argc, argv);
    exit(EXIT_SUCCESS);
}
