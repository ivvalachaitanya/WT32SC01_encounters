#include "actions.h"
#include "esp_log.h"
#include "lvgl.h"

static const char *TAG = "UI_ACTIONS";

void action_click(lv_event_t * e)
{
    ESP_LOGI(TAG, "Button CLICK");
}

void action_press(lv_event_t * e)
{
    ESP_LOGI(TAG, "Button PRESS");
}

void action_release(lv_event_t * e)
{
    ESP_LOGI(TAG, "Button RELEASE");
}

void action_shclick(lv_event_t * e)
{
    ESP_LOGI(TAG, "Short Click");
	int val = (int)lv_event_get_user_data(e);
    ESP_LOGI(TAG, "[B1] Pressed, parameter = %d", val);
}

void action_lngclick(lv_event_t * e)
{
    ESP_LOGI(TAG, "Long Click");
}

void action_pressing(lv_event_t * e)
{
    ESP_LOGI(TAG, "Pressing…");
}
