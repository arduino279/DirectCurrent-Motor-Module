# Engine Control

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](https://downloads.arduino.cc/libraries/logs/github.com/Arduino-Library-Collection/Engine-Control/)

## Get Started

[![](https://img.shields.io/badge/Visit_the-Wiki-2ea44f?logo=github)](https://github.com/Arduino-Library-Collection/Engine-Control/wiki)

### Functions and Variables

```ino
engine_control(int pin, int engine_id, int mode, int speed);
```

#### `pin → Int`
`ⓘ required`

DC Motor Input Pin

#### `engine_id → Int`
`ⓘ required`

DC Motor Pin

#### `mode → Int`
`ⓘ required`

`Values`

- `0` Disables the Engine
- `1` Enables the Engine

#### `speed → Int`
`ⓘ optional`

`Min. Value`

- `0`

`Max. Value`

- `240`

Speed of the rotation
