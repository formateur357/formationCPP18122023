#define BOOST_TEST_MODULE MyTestModule
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(MyTestCase)
{
    BOOST_CHECK_EQUAL(1, 1);
}