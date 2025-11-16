#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void action_shclick(lv_event_t * e);
extern void action_lngclick(lv_event_t * e);
extern void action_press(lv_event_t * e);
extern void action_click(lv_event_t * e);
extern void action_release(lv_event_t * e);
extern void action_pressing(lv_event_t * e);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/