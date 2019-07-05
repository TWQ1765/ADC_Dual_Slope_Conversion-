#include "build/temp/_test_DualSlopeADC_test.c"
#include "mock_led.h"
#include "bar_graph.h"
#include "unity.h"








void setUp(void)

{}



void tearDown(void)

{}



  void xtest_DualSlopeADC_test_NeedToImplement(void)

  {

      UnityIgnore( (("Need to Implement DualSlopeADC_test")), (UNITY_UINT)(16));

  }





void test_bar_graph_100_percent_all_on(void)

{

    led_turn_on_CMockExpect(22, 0);

    led_turn_on_CMockExpect(23, 1);

    led_turn_on_CMockExpect(24, 2);

    led_turn_on_CMockExpect(25, 3);



    bar_graph_set_percent(100);

}



void test_bar_graph_0_percent_all_off(void)

{

    led_turn_off_CMockExpect(32, 0);

    led_turn_off_CMockExpect(33, 1);

    led_turn_off_CMockExpect(34, 2);

    led_turn_off_CMockExpect(35, 3);



    bar_graph_set_percent(0);

}









void test_bar_graph_0_percent2_all_off(void)

{

    led_turn_off_CMockExpect(45, 0);

    led_turn_off_CMockExpect(46, 1);

    led_turn_off_CMockExpect(47, 2);

    led_turn_off_CMockExpect(48, 3);



    bar_graph_set_percent2(0);

}



void test_bar_graph_25_percent2_one_on(void)

{

    led_turn_on_CMockExpect(55, 0);

    led_turn_off_CMockExpect(56, 1);

    led_turn_off_CMockExpect(57, 2);

    led_turn_off_CMockExpect(58, 3);



    bar_graph_set_percent2(25);

}



void test_bar_graph_50_percent2_two_on(void)

{

    led_turn_on_CMockExpect(65, 0);

    led_turn_on_CMockExpect(66, 1);

    led_turn_off_CMockExpect(67, 2);

    led_turn_off_CMockExpect(68, 3);



    bar_graph_set_percent2(50);

}



void test_bar_graph_75_percent2_tree_on(void)

{

    led_turn_on_CMockExpect(75, 0);

    led_turn_on_CMockExpect(76, 1);

    led_turn_on_CMockExpect(77, 2);

    led_turn_off_CMockExpect(78, 3);



    bar_graph_set_percent2(75);

}

void test_bar_graph_75_percent2_all_on(void)

{

    led_turn_on_CMockExpect(84, 0);

    led_turn_on_CMockExpect(85, 1);

    led_turn_on_CMockExpect(86, 2);

    led_turn_on_CMockExpect(87, 3);



    bar_graph_set_percent2(200);

}
