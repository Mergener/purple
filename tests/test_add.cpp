#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "lib.h"

using namespace purple;

TEST_CASE("Testing the add function") {
    CHECK(add(1, 2) == 3);
    CHECK(add(2, 4) == 6);
    CHECK(add(3, 9) == 12);
}