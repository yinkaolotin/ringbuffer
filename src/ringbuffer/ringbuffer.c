#include "ringbuffer/ringbuffer.h"

void stack_ringbuffer_init(void *r)
{
    stack_ringbuffer_t *rb = (stack_ringbuffer_t*)r;
    rb->capacity = BUFFER_SIZE;
    rb->count = 0;
    rb->head = 0;
    rb->tail = 0;
};

void stack_ringbuffer_with_capacity(void *r, unsigned c)
{

};

int stack_ringbuffer_push(void *r, void *i)
{
    return 0;
};

int stack_ringbuffer_pop(void *r, void **i)
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

void heap_ringbuffer_with_cap(void *r, unsigned c)
{};

int heap_ringbuffer_push(void *r, void *i)
{
    return 0;
}

int heap_ringbuffer_pop(void *r, void **i)
{
    return 0;
}

void fixed_heap_ringbuffer_with_cap(void *r, unsigned c)
{

};

int fixed_heap_ringbuffer_push(void *r, void *i)
{
    return 0;
}

int fixed_heap_ringbuffer_pop(void *r, void **i)
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
