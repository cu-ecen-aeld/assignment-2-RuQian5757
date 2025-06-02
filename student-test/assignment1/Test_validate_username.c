#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function validates that the hard-coded username and the username from the
* configuration file match.
*/
void test_validate_my_username()
{
    // Call the function that returns your hard-coded username.
    const char *usernameHardCoded = my_username();

    // Obtain the username from the configuration file.
    char *usernameFromConf = malloc_username_from_conf_file();

    // Verify that the two strings are equal.
    TEST_ASSERT_EQUAL_STRING_MESSAGE(
        usernameHardCoded,
        usernameFromConf,
        "The username from my_username() and the conf file do not match."
    );

    // Free the memory allocated by malloc_username_from_conf_file.
    free(usernameFromConf);
}
