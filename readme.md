### Import

```ino
#include <DirectCurrent-Motor-Module.h>
```

### Initialize new class object

```ino
class DirectCurrent = { int input1, int input2, int dc };
```

input1 `->` Input Pin 1

input2 `->` Input Pin 2

dc `->` DirectCurrent Pin

### `func` move

```ino
bool DirectCurrent::move(int mode1, int mode2, int speed);
```

mode1 `->` Enable or Disable Input Pin 1

mode2 `->` Enable or Disable Input Pin 2

speed `->` DirectCurrent speed `Maximum Value | 255`
