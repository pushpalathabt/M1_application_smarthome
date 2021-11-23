#include "unity.h"

#include "devicefunctions.h"
#include "user.h"





/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_Deviceindex(void){
        
  		TEST_ASSERT_EQUAL(0,Devicecindex());
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_Deviceindex);

return UNITY_END();
}
