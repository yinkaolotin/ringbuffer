#include "unity.h"

void setUp(void) {}
void tearDown(void) {}

void test_project(void) {
    TEST_ASSERT_EQUAL_INT(0, 0);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_project);
    return UNITY_END();
}