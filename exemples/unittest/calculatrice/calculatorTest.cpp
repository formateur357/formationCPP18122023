#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

#include "calculator.h"

class calculatorTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(calculatorTest);
    CPPUNIT_TEST(testAdd);
    CPPUNIT_TEST(testSubstract);
    CPPUNIT_TEST(testMultiply);
    CPPUNIT_TEST(testDivide);
    CPPUNIT_TEST(testDivideByZero);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() {}
    void tearDown() {}

    void testAdd()
    {
        CPPUNIT_ASSERT_DOUBLES_EQUAL(5.0, add(2.0, 3.0), 0.00001);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(-1.0, add(-2.0, 1.0), 0.00001);
    }

    void testSubstract()
    {
        CPPUNIT_ASSERT_DOUBLES_EQUAL(-1.0, substract(2.0, 3.0), 0.00001);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(-3.0, substract(-2.0, 1.0), 0.00001);
    }

    void testMultiply()
    {
        CPPUNIT_ASSERT_DOUBLES_EQUAL(6.0, multiply(2.0, 3.0), 0.00001);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(-2.0, multiply(-2.0, 1.0), 0.00001);
    }

    void testDivide()
    {
        CPPUNIT_ASSERT_DOUBLES_EQUAL(2.0, divide(6.0, 3.0), 0.00001);
        CPPUNIT_ASSERT_DOUBLES_EQUAL(-2.0, divide(-2.0, 1.0), 0.00001);
    }

    void testDivideByZero()
    {
        CPPUNIT_ASSERT(std::isnan(divide(2.0, 0.0)));
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(calculatorTest);