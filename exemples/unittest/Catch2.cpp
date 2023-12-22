#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("TestName", "[TestSuite]")
{
    REQUIRE(1 == 1);
}