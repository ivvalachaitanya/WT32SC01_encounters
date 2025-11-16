file(GLOB UI_SOURCES "ui/*.c" "ui/*.cpp")

idf_component_register(
    SRCS 
        "main.cpp"
        ${UI_SOURCES}
    INCLUDE_DIRS 
        "."
        "ui"
    REQUIRES 
        lvgl
        LovyanGFX
)
