#ifndef RINGBUFFER_RINGBUFFER_H
#define RINGBUFFER_RINGBUFFER_H

#define BUFFER_SIZE 50

#define STACK_INITIALIZER (ringbuffer_t) { \
    .init = stack_ringbuffer_init, \
    .push = stack_ringbuffer_push, \
    .pop = stack_ringbuffer_pop, \
}

#define HEAP_INITIALIZER (ringbuffer_t) { \
    .init = heap_ringbuffer_init, \
    .with_capacity = heap_ringbuffer_with_cap, \
    .push = heap_ringbuffer_push, \
    .pop = heap_ringbuffer_pop, \
}

#define FIXED_HEAP_INITIALIZER (ringbuffer_t) { \
    .init = fixed_heap_ringbuffer_init, \
    .with_capacity = fixed_heap_ringbuffer_with_cap, \
    .push = fixed_heap_ringbuffer_push, \
    .pop = fixed_heap_ringbuffer_pop, \
}

typedef struct{
    void (*init)(void*);
    void (*with_capacity)(void*, unsigned);
    int (*push)(void*, void*);
    int (*pop)(void*, void**);
} ringbuffer_t;

typedef struct {
    void *buffer[BUFFER_SIZE];
    ringbuffer_t r;
    unsigned capacity, count, head, tail;
} stack_ringbuffer_t;

typedef struct {
    void *buffer;
    ringbuffer_t r;
    unsigned capacity, count, head, tail;
} heap_ringbuffer_t;

typedef struct {
    void *buffer[BUFFER_SIZE];
    ringbuffer_t r;
    unsigned capacity, count, head, tail;
} fixed_heap_ringbuffer_t;


void stack_ringbuffer_init(void *r);
void stack_ringbuffer_with_cap(void *r, unsigned c);
int stack_ringbuffer_push(void *r, void *i);
int stack_ringbuffer_pop(void *r, void **i);


void heap_ringbuffer_init(void *r);
void heap_ringbuffer_with_cap(void *r, unsigned c);
int heap_ringbuffer_push(void *r, void *i);
int heap_ringbuffer_pop(void *r, void **i);

void fixed_heap_ringbuffer_init(void *r);
void fixed_heap_ringbuffer_with_cap(void *r, unsigned c);
int fixed_heap_ringbuffer_push(void *r, void *i);
int fixed_heap_ringbuffer_pop(void *r, void **i);

#endif
