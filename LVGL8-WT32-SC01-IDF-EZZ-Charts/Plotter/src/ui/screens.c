#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;
uint32_t active_theme_index = 0;

void create_screen_main() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    {
        lv_obj_t *parent_obj = obj;
        {
            // CH
            lv_obj_t *obj = lv_chart_create(parent_obj);
            objects.ch = obj;
            lv_obj_set_pos(obj, 136, 21);
            lv_obj_set_size(obj, 330, 190);
            lv_obj_add_event_cb(obj, action_chartpress, LV_EVENT_PRESSED, (void *)0);
        }
        {
            lv_obj_t *obj = lv_bar_create(parent_obj);
            lv_obj_set_pos(obj, 136, 222);
            lv_obj_set_size(obj, 330, 16);
            lv_bar_set_value(obj, 25, LV_ANIM_OFF);
        }
        {
            // B1
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.b1 = obj;
            lv_obj_set_pos(obj, 11, 30);
            lv_obj_set_size(obj, 100, 50);
            lv_obj_add_event_cb(obj, action_temp_press, LV_EVENT_PRESSED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Temperature");
                }
            }
        }
        {
            // B2
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.b2 = obj;
            lv_obj_set_pos(obj, 11, 124);
            lv_obj_set_size(obj, 100, 50);
            lv_obj_add_event_cb(obj, action_hum_press, LV_EVENT_PRESSED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Humidity");
                }
            }
        }
        {
            // B3
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.b3 = obj;
            lv_obj_set_pos(obj, 11, 222);
            lv_obj_set_size(obj, 100, 50);
            lv_obj_add_event_cb(obj, action_rnd_press, LV_EVENT_PRESSED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Random");
                }
            }
        }
        {
            lv_obj_t *obj = lv_bar_create(parent_obj);
            lv_obj_set_pos(obj, 136, 256);
            lv_obj_set_size(obj, 330, 16);
            lv_bar_set_value(obj, 25, LV_ANIM_OFF);
        }
        {
            lv_obj_t *obj = lv_bar_create(parent_obj);
            lv_obj_set_pos(obj, 136, 288);
            lv_obj_set_size(obj, 330, 16);
            lv_bar_set_value(obj, 25, LV_ANIM_OFF);
        }
    }
    
    tick_screen_main();
}

void tick_screen_main() {
}



typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
}
