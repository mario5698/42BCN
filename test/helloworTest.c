// include test definitions
#include "simplectest/tests.h"
#include "helloworld.h"

// Start the overall test suite
START_TESTS()

    START_TEST("Hello World Test")
       ASSERT_EQUALS("Hello World!", HelloWorld())
    END_TEST()

    START_TEST("Count World")
        ASSERT_EQUALS(12, strlen(HelloWorld()))
    END_TEST()

// End the overall test suite
END_TESTS()
