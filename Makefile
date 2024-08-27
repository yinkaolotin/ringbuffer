CC = gcc
CFLAGS = -I./include -I./tests/unity -Wall -Wextra

SRCS = src/folder/file.c main.c
OBJS = $(SRCS:.c=.o)
MAIN = main.c
TARGET = project


TEST_SRCS = tests/test_file.c tests/unity/unity.c
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_TARGET = run_tests


all: $(TARGET)

$(TARGET): $(OBJS) $(MAIN:.c=.o)
	$(CC) $^ -o $@

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): $(OBJS) $(TEST_OBJS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(MAIN:.c=.o) $(TEST_OBJS) $(TARGET) $(TEST_TARGET)

.PHONY: all test clean