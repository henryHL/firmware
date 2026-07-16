#pragma once

// Target Hardware Identification
#define HW_VENDOR_ID 255 // 255 is reserved strictly for Private/Custom DIY hardware

// Hardware layout tracking definitions for Compiler
#define TARGET_CUSTOM
#define PRIVATE_HW

// Example LoRa Hardware Pin Mapping (Update to match your physical circuit trace)
#define USE_SX1262
#define LORA_SCK  5
#define LORA_MISO 3
#define LORA_MOSI 6
#define LORA_CS   7
#define LORA_DIO1 16
#define LORA_RST  8
#define LORA_BUSY 15

// RF Switch (RXEN / TXEN) Hardware Control Lines
#define LORA_RXEN 4
#define LORA_TXEN 9

// Enable the SSD1306 screen engine
#define HAS_SCREEN 1
#define USE_SSD1306

// Configure the I2C peripheral pinout for the screen
#define I2C_SDA 18
#define I2C_SCL 17

// Opt out of optional display hardware configurations 
#undef SCREEN_RESET
#undef SCREEN_TRANSITION_CLOCK

// User Interface Inputs (Built-in Program Button)
#define BUTTON_PIN 0             // GPIO 0 is the standard physical BOOT/PRG button on ESP32-S3 boards
#define BUTTON_NEED_PULLUP true   // Internal pull-up ensures it registers correctly when pressed to GND         
