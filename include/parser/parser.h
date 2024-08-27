#ifndef PARSER_H
#define PARSER_H

#define EXPECTED_OPTS_FMT "abc"
#define OPTS_UNKNOWN '?'

#define FLAG_DEFAULT 0x01

struct cmd {
    unsigned int flags;
};

const struct cmd *parse_cmd(int argc, char *argv[]);


#endif
