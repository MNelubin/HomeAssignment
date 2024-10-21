#include "gtest/gtest.h"

#include "Transformers.h"
#include "Optimus_Prime.h"
#include "Megatron.h"
#include "Bamblbee.h"
#include "compozition.h"
#include "Association.h"


#define str std::string

Association gun_1("pistol");
Association gun_2("not_pistol");

Transformers First_of (0,"BOSS","COOL",10 ,800 ,&gun_1);

//Tests for class Transformers

TEST(Transformers, is_decepticon_AND_set_fraction)
{
  bool F_f=1;
  
  str F_f_1;
  if (F_f){
  	F_f_1="Decepticon";
  }
  else{
  	F_f_1="Transformer";
  }
  First_of.set_profession(F_f_1);
  ASSERT_EQ(F_f_1,First_of.get_profession());
}

TEST(Transformers, set_formal_name_AND_get_formal_name)
{
  str F_n="saver";
  First_of.set_formal_name(F_n);
  ASSERT_EQ(F_n,First_of.get_formal_name());
}


TEST(Transformers, set_profession_AND_get_profession)
{
  str F_p="saver";
  First_of.set_profession(F_p);
  ASSERT_EQ(F_p,First_of.get_profession());
}

TEST(Transformers, set_place_AND_get_place)
{
  int F_pl=9;
  First_of.set_place(F_pl);
  ASSERT_EQ(F_pl,First_of.get_place());
}
TEST(Transformers, set_height_AND_get_height)
{
  uint F_h=9;
  First_of.set_height(F_h);
  ASSERT_EQ(F_h,First_of.get_place());
}
TEST(Transformers, set_gun_AND_get_gun)
{
  ASSERT_EQ(gun_1.get_tgun(),First_of.get_gun());
  First_of.set_gun(&gun_2);
  ASSERT_EQ(gun_2.get_tgun(),First_of.get_gun());
}
TEST(Transformers, r_1)
{
  ASSERT_TRUE(First_of.r_1());
}
TEST(Transformers, r_0)
{
  ASSERT_FALSE(First_of.r_0());
}

TEST(Transformers, r_invert)
{
  bool i = 1;
  if (i){
  	ASSERT_EQ(!i,First_of.r_invert(i));
  }
  i=0;
  if (i){
  	ASSERT_EQ(!i,First_of.r_invert(i));
  }
}


//Tests for class Optimus_prime

Optimus_Prime Second_of (0,"BOSS","COOL",10 ,800 ,&gun_1,11,1);

TEST(Optimus_Prime, is_decepticon_AND_set_fraction)
{
  bool F_f=1;
  
  str F_f_1;
  if (F_f){
  	F_f_1="Decepticon";
  }
  else{
  	F_f_1="Transformer";
  }
  Second_of.set_profession(F_f_1);
  ASSERT_EQ(F_f_1,Second_of.get_profession());
}

TEST(Optimus_Prime, set_formal_name_AND_get_formal_name)
{
  str F_n="saver";
  Second_of.set_formal_name(F_n);
  ASSERT_EQ(F_n,Second_of.get_formal_name());
}


TEST(Optimus_Prime, set_profession_AND_get_profession)
{
  str F_p="saver";
  Second_of.set_profession(F_p);
  ASSERT_EQ(F_p,Second_of.get_profession());
}

TEST(Optimus_Prime, set_place_AND_get_place)
{
  int F_pl=9;
  Second_of.set_place(F_pl);
  ASSERT_EQ(F_pl,Second_of.get_place());
}
TEST(Optimus_Prime, set_height_AND_get_height)
{
  uint F_h=9;
  Second_of.set_height(F_h);
  ASSERT_EQ(F_h,Second_of.get_place());
}
TEST(Optimus_Prime, set_gun_AND_get_gun)
{
  ASSERT_EQ(gun_1.get_tgun(),Second_of.get_gun());
  Second_of.set_gun(&gun_2);
  ASSERT_EQ(gun_2.get_tgun(),Second_of.get_gun());
}
TEST(Optimus_Prime, r_1)
{
  ASSERT_TRUE(Second_of.r_1());
}
TEST(Optimus_Prime, r_0)
{
  ASSERT_FALSE(Second_of.r_0());
}

TEST(Optimus_Prime, r_invert)
{
  bool i = 1;
  if (i){
  	ASSERT_EQ(!i,Second_of.r_invert(i));
  }
  i=0;
  if (i){
  	ASSERT_EQ(!i,Second_of.r_invert(i));
  }
}

TEST(Optimus_Prime, set_is_badge_on_AND_get_is_badge_on)
{
  bool F_b=0;
  Second_of.set_is_badge_on(F_b);
  ASSERT_EQ(F_b,Second_of.get_is_badge_on());
}	
TEST(Optimus_Prime, set_num_jokes_AND_get_num_jokes)
{
  uint F_j = 5;
  Second_of.set_num_jokes(F_j);
  ASSERT_EQ(F_j,Second_of.get_num_jokes());
}
TEST(Optimus_Prime, set_num_jokes_AND_doubeling_jokes)
{
  uint F_j = 9;
  Second_of.set_num_jokes(F_j);
  ASSERT_EQ(F_j*2,Second_of.doubeling_jokes());
}


//Tests for class Megatron


Megatron Third_of (1,"Bad boy","Generalissimus",11 ,900 ,&gun_1,8,0);

TEST(Megatron, is_decepticon_AND_set_fraction)
{
  bool F_f=1;
  
  str F_f_1;
  if (F_f){
  	F_f_1="Decepticon";
  }
  else{
  	F_f_1="Transformer";
  }
  Third_of.set_profession(F_f_1);
  ASSERT_EQ(F_f_1,Third_of.get_profession());
}

TEST(Megatron, set_formal_name_AND_get_formal_name)
{
  str F_n="saver";
  Third_of.set_formal_name(F_n);
  ASSERT_EQ(F_n,Third_of.get_formal_name());
}


TEST(Megatron, set_profession_AND_get_profession)
{
  str F_p="saver";
  Third_of.set_profession(F_p);
  ASSERT_EQ(F_p,Third_of.get_profession());
}

TEST(Megatron, set_place_AND_get_place)
{
  int F_pl=9;
  Third_of.set_place(F_pl);
  ASSERT_EQ(F_pl,Third_of.get_place());
}
TEST(Megatron, set_height_AND_get_height)
{
  uint F_h=9;
  Third_of.set_height(F_h);
  ASSERT_EQ(F_h,Third_of.get_place());
}
TEST(Megatron, set_gun_AND_get_gun)
{
  ASSERT_EQ(gun_1.get_tgun(),Third_of.get_gun());
  Third_of.set_gun(&gun_2);
  ASSERT_EQ(gun_2.get_tgun(),Third_of.get_gun());
}
TEST(Megatron, r_1)
{
  ASSERT_TRUE(Third_of.r_1());
}
TEST(Megatron, r_0)
{
  ASSERT_FALSE(Third_of.r_0());
}

TEST(Megatron, r_invert)
{
  bool i = 1;
  if (i){
  	ASSERT_EQ(!i,Third_of.r_invert(i));
  }
  i=0;
  if (i){
  	ASSERT_EQ(!i,Third_of.r_invert(i));
  }
}

TEST(Megatron, set_is_knife_on_AND_get_is_knife_on)
{
  bool F_b=0;
  Third_of.set_is_knife_on(F_b);
  ASSERT_EQ(F_b,Third_of.get_is_knife_on());
}	
TEST(Megatron, set_num_grenades_AND_get_num_grenades)
{
  uint F_j = 5;
  Third_of.set_num_grenades(F_j);
  ASSERT_EQ(F_j,Third_of.get_num_grenades());
}
TEST(Megatron, set_num_grenades_AND_doubeling_grenades)
{
  uint F_j = 9;
  Third_of.set_num_grenades(F_j);
  ASSERT_EQ(F_j*2,Third_of.doubeling_grenades());
}



//Tests for class Bamblbee


Bamblbee Fourth_of (1,"Bad boy","Generalissimus",11 ,900 ,&gun_1,8,0);

TEST(Bamblbee, is_decepticon_AND_set_fraction)
{
  bool F_f=1;
  
  str F_f_1;
  if (F_f){
    F_f_1="Decepticon";
  }
  else{
    F_f_1="Transformer";
  }
  Fourth_of.set_profession(F_f_1);
  ASSERT_EQ(F_f_1,Fourth_of.get_profession());
}

TEST(Bamblbee, set_formal_name_AND_get_formal_name)
{
  str F_n="saver";
  Fourth_of.set_formal_name(F_n);
  ASSERT_EQ(F_n,Fourth_of.get_formal_name());
}


TEST(Bamblbee, set_profession_AND_get_profession)
{
  str F_p="saver";
  Fourth_of.set_profession(F_p);
  ASSERT_EQ(F_p,Fourth_of.get_profession());
}

TEST(Bamblbee, set_place_AND_get_place)
{
  int F_pl=9;
  Fourth_of.set_place(F_pl);
  ASSERT_EQ(F_pl,Fourth_of.get_place());
}
TEST(Bamblbee, set_height_AND_get_height)
{
  uint F_h=9;
  Fourth_of.set_height(F_h);
  ASSERT_EQ(F_h,Fourth_of.get_place());
}
TEST(Bamblbee, set_gun_AND_get_gun)
{
  ASSERT_EQ(gun_1.get_tgun(),Fourth_of.get_gun());
  Fourth_of.set_gun(&gun_2);
  ASSERT_EQ(gun_2.get_tgun(),Fourth_of.get_gun());
}
TEST(Bamblbee, r_1)
{
  ASSERT_TRUE(Fourth_of.r_1());
}
TEST(Bamblbee, r_0)
{
  ASSERT_FALSE(Fourth_of.r_0());
}

TEST(Bamblbee, r_invert)
{
  bool i = 1;
  if (i){
    ASSERT_EQ(!i,Fourth_of.r_invert(i));
  }
  i=0;
  if (i){
    ASSERT_EQ(!i,Fourth_of.r_invert(i));
  }
}

TEST(Bamblbee, set_is_banana_on_AND_get_is_banana_on)
{
  bool F_b=0;
  Fourth_of.set_is_banana_on(F_b);
  ASSERT_EQ(F_b,Fourth_of.get_is_banana_on());
} 
TEST(Bamblbee, set_num_drones_AND_get_num_drones)
{
  uint F_j = 5;
  Fourth_of.set_num_drones(F_j);
  ASSERT_EQ(F_j,Fourth_of.get_num_drones());
}
TEST(Bamblbee, set_num_drones_AND_doubeling_drones)
{
  uint F_j = 9;
  Fourth_of.set_num_drones(F_j);
  ASSERT_EQ(F_j*2,Fourth_of.doubeling_drones());
}


//Tests for class compozition

compozition Fifth_of(100);

TEST(compozition, set_lenght_AND_get_lenght)
{
  uint F_l=50;
  Fifth_of.set_lenght(F_l);
  ASSERT_EQ(F_l,Fifth_of.get_lenght());
}


//Tests for class Association

Association Sixth_of("joke");

TEST(Association, set_tgun_AND_get_tgun)
{
  str F_g="ak-47";
  Sixth_of.set_tgun(F_g);
  ASSERT_EQ(F_g,Sixth_of.get_tgun());
}