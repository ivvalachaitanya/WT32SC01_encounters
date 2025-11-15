# WT32-SC01 + LVGL + EEZ Studio (ESP-IDF)

A complete example demonstrating how to design a UI using **EEZ Studio**, generate **LVGL v8.x** code, and run it on the **WT32-SC01 (ESP32-S3)** using **ESP-IDF** and **LovyanGFX**.

This project includes:
- UI created visually in **EEZ Studio**
- Auto-generated LVGL UI files
- Working event callbacks (press, click, long press, pressing…)
- Touchscreen support via LovyanGFX
- Clean CMake integration

---

## ⭐ Features

- WT32-SC01 (480×320) TFT display supported
- LVGL 8.x rendering
- EEZ Studio → LVGL code generation pipeline
- Multiple button events:
  - `PRESSED`
  - `PRESSING`
  - `SHORT_CLICKED`
  - `LONG_PRESSED`
  - `CLICKED`
  - `RELEASED`
- Simple `actions.c` file for your logic

---

## 📁 Project Structure
LVGL8-WT32-SC01-IDF-EZZ
├── CMakeLists.txt
├── LICENSE.md
├── README.md
├── SampleUI.jpg
├── components
│   ├── LovyanGFX
│   └── lvgl
├── dependencies.lock
├── device.png
├── main
│   ├── CMakeLists.txt
│   ├── conf_WT32SCO1.h
│   ├── lv_conf.h
│   ├── main.cpp
│   └── ui
└── sdkconfig


---

## 🛠 Requirements

### Software
- ESP-IDF **5.5.1**
- EEZ Studio (UI design tool)
- LVGL 8.x component
- LovyanGFX (display + touch driver)

### Hardware
- WT32-SC01 (ESP32-S3 + ILI9488)
- USB-C cable

---

## ⚙️ Build & Flash

```sh
idf.py set-target esp32s3
idf.py fullclean
idf.py build
idf.py -p com8 flash monitor
```

---

## 📄 License
MIT License

---

## ❤️ Credits

- LVGL : https://lvgl.io
- EEZ Studio : UI designer
- LovyanGFX : Display/touch driver
- WT32-SC01 Community
- Special thanks to Sukesh(https://github.com/sukesh-ak/LVGL8-WT32-SC01-Arduino) for getting started codes
