#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <phy_equation.h>
#define PROJECT_NAME    "Physics equation"

/* Prototypes for all the test functions */
void test_ohms_law(void);
void test_velocity_dis_time(void);
void test_power(void);
void test_pressure(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "ohms_law", test_ohms_law);
  CU_add_test(suite, "velocity_dis_time", test_velocity_dis_time);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "pressure", test_pressure);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(0 == ohms_law());
  
}
