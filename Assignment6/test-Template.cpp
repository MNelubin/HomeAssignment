#include "gtest/gtest.h"

#include "tClass.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

TEST(tClassTest, Class1Test_True)
{
    Class1 obj;
    tClass<Class1> tc(obj);
    tc.set_vals(1, {});
    EXPECT_TRUE(tc.foo());
}
TEST(tClassTest, Class1Test_False)
{
    Class1 obj;
    tClass<Class1> tc(obj);
    tc.set_vals(0, {});
    EXPECT_FALSE(tc.foo());
}

TEST(tClassTest, Class2Test_True)
{
    Class2 obj;
    tClass<Class2> tc(obj);

    tc.set_vals(0, {0,1,2});
    EXPECT_TRUE(tc.foo());
}
TEST(tClassTest, Class2Test_False)
{
    Class2 obj;
    tClass<Class2> tc(obj);

    tc.set_vals(0, {});
    EXPECT_FALSE(tc.foo());
}

TEST(tClassTest, Class3Test_True)
{
    Class3 obj;
    tClass<Class3> tc(obj);
    tc.set_vals(-3, {0,1,2});
    EXPECT_TRUE(tc.foo());
}
TEST(tClassTest, Class3Test_False)
{
    Class3 obj;
    tClass<Class3> tc(obj);
    tc.set_vals(0, {0,1,2});
    EXPECT_FALSE(tc.foo());
}

TEST(tClassTest, IntSpecialization_True)
{
    int a=0;
    tClass<int> tc(a);
    EXPECT_TRUE(tc.foo());
}

TEST(tClassTest, DoubleSpecialization_False)
{
    tClass<double> tc(0.0);
    EXPECT_FALSE(tc.foo());
}
