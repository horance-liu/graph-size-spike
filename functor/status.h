#ifndef A1BA9DA7_2AAA_41D2_8C50_013CE4B009E3
#define A1BA9DA7_2AAA_41D2_8C50_013CE4B009E3

using Status = unsigned int;

#define HIAI_OK   (Status)0
#define HIAI_FAIL (Status)1

#define HIAI_ASSERT_EXEC(expr) \
  do { \
    Status status = expr; \
    if (status != HIAI_OK) { \
      return status; \
    } \
  } while(0)

#endif /* A1BA9DA7_2AAA_41D2_8C50_013CE4B009E3 */
