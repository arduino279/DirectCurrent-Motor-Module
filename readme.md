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

**Parameters**
* `mode1` Enable or disable the `input1` pin with `0` and `1`
* `mode2` Enable or disable the `input2` pin with `0` and `1`
* `speed` Motor speed `Max. Value` 255

**Returns**
* Boolean

**Example**
```ino
example.move(1, 0, 200);
example.move(0, 1, 200);
```
