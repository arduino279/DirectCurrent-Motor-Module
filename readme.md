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

**`input1 -> int`** Input Pin 1

**`input2 -> int`** Input Pin 2

**`dc     -> int`** DirectCurrent Pin

### Move

```ino
bool DirectCurrent::move(int mode1, int mode2, int speed);
```

**`mode1 -> int`** Enable or Disable Input Pin 1

**`mode2 -> int`** Enable or Disable Input Pin 2

**`speed -> int`** DirectCurrent speed `Maximum Value | 255`

#### Returns
Boolean
