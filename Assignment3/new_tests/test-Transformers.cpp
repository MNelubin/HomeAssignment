#include "gtest/gtest.h"

#include "Transformers.h"

Association gun("pistol");

Transformers First_of (0,"BOSS","COOL",10 ,800 ,&gun);

TEST(Transformers, is_decepticon)
{
  First_of.is_evil();
}




TEST(Transformers, get_profession)
{
  First_of.get_profession();
}

TEST(Transformers, set_place_AND_get_place)
{
  int i=9;
  First_of.set_place(i);
  ASSERT_EQ(i,First_of.get_place());
}