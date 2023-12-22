#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class MyTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(MyTest);
    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testMethod2);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() {}
    void tearDown() {}

    void testMethod()
    {
        CPPUNIT_ASSERT(true);
    }

    void testMethod2()
    {
        CPPUNIT_ASSERT(false);
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(MyTest);