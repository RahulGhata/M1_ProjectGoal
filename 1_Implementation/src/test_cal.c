#include "unity.h"
#include "helper.h"

/*if
extern void addition();
extern void subtraction();
extern void multiplication();
extern void division();
extern void mod();
extern void factorial();
extern void factorialReturn();
extern void logBasee();
extern void logBase10();
extern void eToPowerx();
extern void squareRoot();
extern void cubeRoot();
extern void power();
extern void absolute();`
extern void ceilF();
extern void floorF();
extern void clear();
extern void clearscr();
extern void pause();
#endif*/

void setUp(void)
{
}

void tearDown(void)
{
}

 test_addition()
{
    TEST_ASSERT_EQUAL(0, addition(0,0));
    TEST_ASSERT_EQUAL(30, addition(10,20));
    TEST_ASSERT_EQUAL(-30, addition(-10,-20));
}

void test_subtraction()
{
    TEST_ASSERT_EQUAL(0, subtraction(0,0));
    TEST_ASSERT_EQUAL(10, subtraction(20,10));
    TEST_ASSERT_EQUAL(-30, subtraction(-10,-20));  
}

void test_multiplication()
{
    TEST_ASSERT_EQUAL(0, multiplication(0,0));
    TEST_ASSERT_EQUAL(200, multiplication(10,20));
}

void test_division()
{
    TEST_ASSERT_EQUAL(0.5 division(10,20));
}

void test_mod()
{
    TEST_ASSERT_EQUAL(0, mod(10,2));
}

void test_factorial()
{
    TEST_ASSERT_EQUAL(120, factorial(5));
}

void test_factorialReturn()
{
    TEST_ASSERT_EQUAL(3628800, factorialReturn(10));
}

void test_logBasee()
{
    TEST_ASSERT_EQUAL(2.30, logBasee(10));
}

void test_logBase10()
{
    TEST_ASSERT_EQUAL(1.00, logBase10(10));
}

void test_eToPowerx()
{
    TEST_ASSERT_EQUAL(22026.47, eToPowerx(10));
}

void test_squareRoot()
{
    TEST_ASSERT_EQUAL(3.16, squareRoot(10));
}

void test_cubeRoot()
{
    TEST_ASSERT_EQUAL(2.154435, cubeRoot(10));
}

void test_power()
{
    TEST_ASSERT_EQUAL(100.00, power(10,2));
}

void test_absolute()
{
    TEST_ASSERT_EQUAL(10, absolute(10));
}

void test_ceilF()
{
    TEST_ASSERT_EQUAL(11, ceilF(10.1));
}

void test_floorF()
{
    TEST_ASSERT_EQUAL(10, floorF(10.1));
}


int main(void)
{
/*if
    addition();
    subtraction();
    multiplication();
    division();
    mod();
    factorial();
    factorialReturn();
    logBasee();
    logBase10();
    eToPowerx();
    squareRoot();
    cubeRoot();
    power();
    absolute();
    ceilF();
    floorF();
    clear();
    clearscr();
    pause();
endif*/
    UnityBegin(NULL);

    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    RUN_TEST(test_mod);
    RUN_TEST(test_factorial);
    RUN_TEST(test_factorialReturn);
    RUN_TEST(test_logBasee);
    RUN_TEST(test_logBase10);
    RUN_TEST(test_eToPowerx);
    RUN_TEST(test_squareRoot);
    RUN_TEST(test_cubeRoot);
    RUN_TEST(test_power);
    RUN_TEST(test_absolute);
    RUN_TEST(test_ceilF);
    RUN_TEST(test_floorF);

    return(UnityEnd());
}
