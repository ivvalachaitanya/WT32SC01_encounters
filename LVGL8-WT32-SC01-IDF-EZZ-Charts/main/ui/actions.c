#include "actions.h"
#include "screens.h"
#include "esp_log.h"
#include "lvgl.h"

static const char *TAG = "UI_ACTIONS";


void action_temp_press(lv_event_t *e)
{
    // show TEMP
    lv_chart_hide_series(objects.ch, objects.ch_series_temp, false);

    // hide others
    lv_chart_hide_series(objects.ch, objects.ch_series_humi, true);
    lv_chart_hide_series(objects.ch, objects.ch_series_rand, true);

    ESP_LOGI("UI_ACTIONS", "[B1] Temperature chart selected");
}

void action_hum_press(lv_event_t *e)
{
    lv_chart_hide_series(objects.ch, objects.ch_series_temp, true);
    lv_chart_hide_series(objects.ch, objects.ch_series_humi, false);
    lv_chart_hide_series(objects.ch, objects.ch_series_rand, true);

    ESP_LOGI("UI_ACTIONS", "[B2] Humidity chart selected");
}
void action_rnd_press(lv_event_t *e)
{
    lv_chart_hide_series(objects.ch, objects.ch_series_temp, true);
    lv_chart_hide_series(objects.ch, objects.ch_series_humi, true);
    lv_chart_hide_series(objects.ch, objects.ch_series_rand, false);

    ESP_LOGI("UI_ACTIONS", "[B3] Random chart selected");
}

void action_chartpress(lv_event_t * e){
	lv_chart_hide_series(objects.ch, objects.ch_series_temp, false);
    lv_chart_hide_series(objects.ch, objects.ch_series_humi, false);
    lv_chart_hide_series(objects.ch, objects.ch_series_rand, false);

    ESP_LOGI("UI_ACTIONS", "[CH]chart Reset");
}
