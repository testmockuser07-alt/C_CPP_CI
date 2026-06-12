#include "unity.h"
#include "unity_internals.h"
#include "tictactoe.h"
#include "guessnumber.h"

void setUp(){}
void tearDown(){}

void guess_num(void)
{
    TEST_ASSERT_EQUAL(2,num_guess(5,20));
    TEST_ASSERT_EQUAL(2,num_guess(45,98));
    TEST_ASSERT_EQUAL(1,num_guess(65,27));
    TEST_ASSERT_EQUAL(3,num_guess(37,37));
    TEST_ASSERT_EQUAL(2,num_guess(15,29));
    TEST_ASSERT_EQUAL(1,num_guess(89,29));
    TEST_ASSERT_EQUAL(3,num_guess(5,5));
    TEST_ASSERT_EQUAL(2,num_guess(43,74));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(guess_num);
    return UNITY_END();
}