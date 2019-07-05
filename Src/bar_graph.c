#include "bar_graph.h"
#include "led.h"

/**
  * @brief  trun led on/off
  * @param  percent : number of leds
  * @retval void
  */
void bar_graph_set_percent(uint8_t percent)
{
  if(percent == 0)
  {
    led_turn_off(0);
    led_turn_off(1);
    led_turn_off(2);
    led_turn_off(3);
  }
  if (percent == 100)
  {
    led_turn_on(0);
    led_turn_on(1);
    led_turn_on(2);
    led_turn_on(3);
  }
  if (percent == 25)
  {
    led_turn_on(0);
    led_turn_off(1);
    led_turn_off(2);
    led_turn_off(3);
  }
  if (percent == 50)
  {
    led_turn_on(0);
    led_turn_on(1);
    led_turn_off(2);
    led_turn_off(3);
  }
  if (percent == 75)
  {
    led_turn_on(0);
    led_turn_on(1);
    led_turn_on(2);
    led_turn_off(3);
  }
}

/**
  * @brief  trun led on/off
  * @param  percent : number of leds
  * @retval void
  */
void bar_graph_set_percent2(uint8_t percent)
{
  uint8_t number_of_leds = percent/25;
  for (int i = 0 ; i<4 ; i++)
  {
    if (i < number_of_leds)
    {
      led_turn_on(i);
    }
    else
    {
      led_turn_off(i);
    }
  }
}
