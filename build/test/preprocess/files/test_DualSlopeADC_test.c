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

    UnityIgnore( (("Need to Implement DualSlopeADC_test")), (UNITY_UINT)(15));

}





void test_bar_graph_100_percent_all_on(void)

{

    led_turn_on_CMockExpect(21, 0);

    led_turn_on_CMockExpect(22, 1);

    led_turn_on_CMockExpect(23, 2);

    led_turn_on_CMockExpect(24, 3);



    bar_graph_set_percent(100);

}



void test_bar_graph_0_percent_all_off(void)

{

    led_turn_off_CMockExpect(31, 0);

    led_turn_off_CMockExpect(32, 1);

    led_turn_off_CMockExpect(33, 2);

    led_turn_off_CMockExpect(34, 3);



    bar_graph_set_percent(0);

}









void test_bar_graph_0_percent2_all_off(void)

{

    led_turn_off_CMockExpect(44, 0);

    led_turn_off_CMockExpect(45, 1);

    led_turn_off_CMockExpect(46, 2);

    led_turn_off_CMockExpect(47, 3);



    bar_graph_set_percent2(0);

}



void test_bar_graph_25_percent2_one_on(void)

{

    led_turn_on_CMockExpect(54, 0);

    led_turn_off_CMockExpect(55, 1);

    led_turn_off_CMockExpect(56, 2);

    led_turn_off_CMockExpect(57, 3);



    bar_graph_set_percent2(25);

}



void test_bar_graph_50_percent2_two_on(void)

{

    led_turn_on_CMockExpect(64, 0);

    led_turn_on_CMockExpect(65, 1);

    led_turn_off_CMockExpect(66, 2);

    led_turn_off_CMockExpect(67, 3);



    bar_graph_set_percent2(50);

}



void test_bar_graph_75_percent2_tree_on(void)

{

    led_turn_on_CMockExpect(74, 0);

    led_turn_on_CMockExpect(75, 1);

    led_turn_on_CMockExpect(76, 2);

    led_turn_off_CMockExpect(77, 3);



    bar_graph_set_percent2(75);

}

void test_bar_graph_100_percent2_all_on(void)

{

    led_turn_on_CMockExpect(83, 0);

    led_turn_on_CMockExpect(84, 1);

    led_turn_on_CMockExpect(85, 2);

    led_turn_on_CMockExpect(86, 3);



    bar_graph_set_percent2(200);

}
