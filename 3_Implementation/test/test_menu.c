#include "unity.h"
#include <menu.h>

/* Modify these two lines according to the project */
#include <menu.h>
#define PROJECT_NAME    "Digital menu"

/* Prototypes for all the test functions */
void test_cal(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_cal);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_cal(void) {
  TEST_ASSERT_EQUAL(300, calculate(1, 2));
  TEST_ASSERT_EQUAL(600, calculate(2, 4));
  TEST_ASSERT_EQUAL(480, calculate(3, 6));
  TEST_ASSERT_EQUAL(150, calculate(4, 1));
  TEST_ASSERT_EQUAL(400, calculate(5, 2));
  TEST_ASSERT_EQUAL(1000, calculate(6, 5));
  TEST_ASSERT_EQUAL(450, calculate(7, 3));
  TEST_ASSERT_EQUAL(210, calculate(8, 7));
  TEST_ASSERT_EQUAL(480, calculate(9, 12));
  TEST_ASSERT_EQUAL(100, calculate(10, 2));
}

