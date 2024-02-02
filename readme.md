> [!NOTE]
> Import
> ```h
> #include <DirectCurrent-Motor-Module.h>
> ```

> [!NOTE]
> First steps
> ```ino
> class DirectCurrent = { int input1, int input2, int dc };
> ```

`input1 -> int` Input Pin 1

`input2 -> int`  Input Pin 2

`dc -> int` DirectCurrent Pin

> `func` move

```ino
bool DirectCurrent::move(int mode1, int mode2, int speed);
```

`mode1 -> int` Enable or Disable Input Pin 1

`mode2 -> int` Enable or Disable Input Pin 2

`speed -> int` DirectCurrent speed `Maximum Value | 255`

Returns
Boolean
