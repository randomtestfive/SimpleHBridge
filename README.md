# SimpleHBridge
A simple library for controlling H-Bridges

## Make an `HBridge`

```C++
#include <HBridge.h>

// drive pin, direction pin
HBridge motor(4, 5);
```

## Use `HBridge`

```C++
void setup() {
  //reverse motor
  motor.setReversed(true);
}

void loop() {
  // range between -255 and 255
  motor.set(255);
}
```
