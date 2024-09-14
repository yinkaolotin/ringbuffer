#include <stdlib.h>
#include <alloca.h>


#define BUFFER_SIZE 50

#define STACK_RINGBUFFER_T 0x01
#define HEAP_RINGBUFFER_T 0x02
#define FIXED_HEAP_RINGBUFFER_T 0x04

typedef struct{
    void (*init)(void*);
    void (*with_capacity)(void*, void*);
    int (*push)(void*, void*);
    int (*pop)(void*, void*);
} ringbuffer_t;

typedef struct {
    void *buffer[BUFFER_SIZE];
    ringbuffer_t *r;
    unsigned capacity, count, head, tail;
} stack_ringbuffer_t;

typedef struct {
    void *buffer;
    ringbuffer_t *r;
    unsigned capacity, count, head, tail;
} heap_ringbuffer_t;

typedef struct {
    void *buffer[BUFFER_SIZE];
    ringbuffer_t *r;
    unsigned capacity, count, head, tail;
} fixed_heap_ringbuffer_t;


void stack_ringbuffer_init(void *r)
{
    stack_ringbuffer_t *rb = (stack_ringbuffer_t*)r;
    rb->capacity = BUFFER_SIZE;
    rb->count = 0;
    rb->head = 0;
    rb->tail = 0;
};

void stack_ringbuffer_with_capacity(void *r, void* cap)
{

};

int stack_ringbuffer_push(void *r, void *i)
{
    return 0;
};

int stack_ringbuffer_pop(void *r, void *i)
{
    return 0;
};



void heap_ringbuffer_init(void *r)
{
    heap_ringbuffer_t *rb = (heap_ringbuffer_t*)r;
    rb->capacity = 0;
    rb->head = 0;
    rb->tail = 0;
};

void heap_ringbuffer_with_cap(void *r, void *c)
{};

int heap_ringbuffer_push(void *r, void *i)
{
    return 0;
}

int heap_ringbuffer_pop(void *r, void *i)
{
    return 0;
}

void fixed_heap_ringbuffer_with_cap(void *r, void *c)
{

};

int fixed_heap_ringbuffer_push(void *r, void *i)
{
    return 0;
}

int fixed_heap_ringbuffer_pop(void *r, void *i)
{
    return 0;
}


void fixed_heap_ringbuffer_init(void *r)
{
    fixed_heap_ringbuffer_t *rb = (fixed_heap_ringbuffer_t*)r;
    rb->capacity = 0;
    rb->head = 0;
    rb->tail = 0;
};

ringbuffer_t stack = {
    .init = stack_ringbuffer_init,
    .push = stack_ringbuffer_push,
    .pop = stack_ringbuffer_pop,
};

ringbuffer_t heap = {
    .init = heap_ringbuffer_init,
    .with_capacity = heap_ringbuffer_with_cap,
    .push = heap_ringbuffer_push,
    .pop = heap_ringbuffer_pop,
};

ringbuffer_t fixedheap = {
    .init = fixed_heap_ringbuffer_init,
    .with_capacity = fixed_heap_ringbuffer_with_cap,
    .push = fixed_heap_ringbuffer_push,
    .pop = fixed_heap_ringbuffer_pop,
};
