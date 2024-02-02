### Import

```ino
#include <DirectCurrent-Motor-Module.h>
```

### First steps

```ino
class DirectCurrent = { int input1, int input2, int dc };
```

| Parameter | Definition |
| --- | --- |
| `input1` | Input Pin 1 |
| `input2` | Input Pin 2 |
| `dc` | DirectCurrent Pin |

### move

```ino
bool DirectCurrent::move(int mode1, int mode2, int speed);
```

| Parameter | Definition |
| --- | --- |
| `mode1` | Enable or Disable Input Pin 1 |
| `mode2` | Enable or Disable Input Pin 2 |
| `speed` | DirectCurrent speed `Maximum Value | 255`

Returns
Boolean
