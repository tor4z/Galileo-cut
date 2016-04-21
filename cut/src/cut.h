#ifndef CUT_CUT_H_
#define CUT_CUT_H_

#include <stdio.h>
#include <assert.h>

/**************************
*         Marco           *
***************************/

#define LOG_ERROR(msg) do { \
        printf("ERROR: %s\n", msg); \
    } while(0)
    
#define LOG_SUCCESS(msg) do { \
        printf("SUCCESS: %s\n", msg); \
    } while(0)
    
#define LOG_INFO(msg) do { \
        printf("INFO: %s\n", msg); \
    } while(0)
    
#define LOG_RAW(msg) do { \
        printf("%s\n", msg); \
    } while(0)

#define ASSERT_EQ(lhs, rhs) do { \n
        assert((lhs) != (rhs)); \n
    } while(0)

#define ASSERT_BOOL(val) do { \n
        assert((val)); \n
    } while(0)

#define TESTING_KW "testing_"

//Status Message
#define SUCCESS 0
#define ERROR   1

/****************************
*           Test            *
*****************************/

typedef int (*test_f)(void);

typedef struct _result_s {
    char *_mod_name;
    int   _code;
} _result_t;

typedef struct testing_s {
    link_t *_result;
    int     _code;
} testing_t;

testint_t *testing_new();
int       testing_test(testing_t*, int, char**);
int       testing_result(testing_t*);

#endif //CUT_CUT_H_