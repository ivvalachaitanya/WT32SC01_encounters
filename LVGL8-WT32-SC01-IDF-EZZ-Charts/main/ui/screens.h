#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *ch;
    lv_obj_t *b1;
    lv_obj_t *b2;
    lv_obj_t *b3;
	lv_chart_series_t *ch_series_temp;
    lv_chart_series_t *ch_series_humi;
    lv_chart_series_t *ch_series_rand;
	lv_obj_t *bar_temp;
	lv_obj_t *bar_humi;
	lv_obj_t *bar_rand;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
};



void create_screen_main();
void tick_screen_main();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/