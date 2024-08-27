#ifndef UTILS_H
#define UTILS_H


#define COPY_STRING(x, y, z) \
    do { \
        strncpy(x, y, z - 1); \
        x[z - 1] = '\0'; \
    } while (0)

#endif