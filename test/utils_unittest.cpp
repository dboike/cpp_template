#include <string.h>
#include <stdlib.h>
#include <string>
#include "gtest/gtest.h"
#include "utils.h"


TEST(UtilsTs,Func1Neg){

    EXPECT_EQ(-1,cfunc1((char*)0));
}
TEST(UtilsTs,Func1Pos){
    char p1[]="Junk";
    EXPECT_EQ(0,cfunc1(p1));
}
