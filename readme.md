# DirectCurrent Motor Module

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](https://www.arduino.cc/reference/en/libraries/engine-control/)
[![](https://img.shields.io/badge/Visit_the-Wiki-2ea44f?logo=github)](https://github.com/Arduino-Library-Collection/Engine-Control/wiki)

## Get Started

**Import DirectCurrent Motor Module**

1. Look up `DirectCurrent_Motor_Module` in the Library Manager and install the latest version
2. Insert the following snippet
 
```ino
#include <Engine_Control.h>
#include <REMgQ29tcG9uZW50.h>
#include <U2Vydm8gQ29tcG9uZW50.h>
```

**Setup DirectCurrent Motor Module**

```ino
DirectCurrentConfig pin[i] = { int input1, int input2, int dc }
```
**Parameters**

* `[i]` Number of the setup profile
* `input1` IN1 Pin
* `input2` IN2 Pin
* `dc` DC Pin

**Example**

```ino
DirectCurrentConfig pin1 = { 1, 2, 3 };
```
