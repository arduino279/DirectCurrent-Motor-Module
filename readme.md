# DirectCurrent Motor Module

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](https://www.arduino.cc/reference/en/libraries/engine-control/)

## Get Started

**Import DirectCurrent Motor Module**

1. Look up `DirectCurrent-Motor-Module` in the Library Manager and install the latest version
2. Insert the following snippet
 
```ino
#include <DirectCurrent-Motor-Module.h>
```

**Setup DirectCurrent Motor Module**

```ino
DirectCurrent pin[i] = { int input1, int input2, int dc };
```
**Parameters**

* `[i]` Number of the setup profile
* `input1` IN1 Pin
* `input2` IN2 Pin
* `dc` DC Pin

**Example**

```ino
DirectCurrent pin1 = { 1, 2, 3 };
```

**Using DirectCurrent Motor Module**

```ino
moveDirectCurrent(int i, int speed);
```

**Description** Move the DC motor

**Parameters**
* `i` Number of the setup profile
* `speed` Motor speed `Max. Value` 255

**Example**

```ino
moveDirectCurrent(1, 202);
```
