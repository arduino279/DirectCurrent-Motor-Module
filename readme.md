# DirectCurrent Motor Module

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](https://www.arduino.cc/reference/en/libraries/engine-control/)

## Get Started

### Import

1. Look up `DirectCurrent_Motor_Module` in the Library Manager and install the latest version
2. Insert the following snippet

```ino
#include <DirectCurrent-Motor-Module.h>
```

### Setup

```ino
class DirectCurrent = { int input1, int input2, int dc };
```
**Parameters**

* `input1` IN1 Pin
* `input2` IN2 Pin
* `dc` DC Pin

**Example**
```ino
DirectCurrent example = { 1, 2, 3 };
```
### Use

```ino
[name].move(int mode1, int mode2, int speed);
```
**Description** Move the DC motor

![Parameters](https://github.com/arduino279/DirectCurrent-Motor-Module/assets/76214766/b92c13cf-835a-4191-a61c-743cc2a3e346)

* `mode1` Enable or disable the `input1` pin with `0` (disable) and `1` (enable)
* `mode2` Enable or disable the `input2` pin with `0` (disable) and `1` (enable)
* `speed` Motor speed `Max. Value` 255

**Returns**
* Boolean

**Example**
```ino
moveDirectCurrent(1, 0, 202);
```
