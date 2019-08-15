#include "unity.h"

#include "bar_graph.h"
#include "mock_led.h" //mock led.h file
//#include "stm32f1xx_hal_conf.h"
//#include "mock_stm32f1xx_it.h"
void setUp(void)
{}

void tearDown(void)
{}

void xtest_DualSlopeADC_test_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement DualSlopeADC_test");
}


void test_bar_graph_100_percent_all_on(void)
{
    led_turn_on_Expect(0);
    led_turn_on_Expect(1);
    led_turn_on_Expect(2);
    led_turn_on_Expect(3);

    bar_graph_set_percent(100);
}

void test_bar_graph_0_percent_all_off(void)
{
    led_turn_off_Expect(0);
    led_turn_off_Expect(1);
    led_turn_off_Expect(2);
    led_turn_off_Expect(3);

    bar_graph_set_percent(0);
}



// test function: bar_graph_0_percent2()
void test_bar_graph_0_percent2_all_off(void)
{
    led_turn_off_Expect(0);
    led_turn_off_Expect(1);
    led_turn_off_Expect(2);
    led_turn_off_Expect(3);

    bar_graph_set_percent2(0);
}

void test_bar_graph_25_percent2_one_on(void)
{
    led_turn_on_Expect(0);
    led_turn_off_Expect(1);
    led_turn_off_Expect(2);
    led_turn_off_Expect(3);

    bar_graph_set_percent2(25);
}

void test_bar_graph_50_percent2_two_on(void)
{
    led_turn_on_Expect(0);
    led_turn_on_Expect(1);
    led_turn_off_Expect(2);
    led_turn_off_Expect(3);

    bar_graph_set_percent2(50);
}

void test_bar_graph_75_percent2_tree_on(void)
{
    led_turn_on_Expect(0);
    led_turn_on_Expect(1);
    led_turn_on_Expect(2);
    led_turn_off_Expect(3);

    bar_graph_set_percent2(75);
}
void test_bar_graph_100_percent2_all_on(void)
{
    led_turn_on_Expect(0);
    led_turn_on_Expect(1);
    led_turn_on_Expect(2);
    led_turn_on_Expect(3);

    bar_graph_set_percent2(200);
}
