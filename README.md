# Logger for the Arduino framework
A custom C++ logger library. This library offers 4 levels of logging. 
It decorates the builtin printf function, with a enum 'LogLevels' to determine if a given log should be printed or not. Levels lower than specified level will not be printed. 

```
levels are:
DEBUG = 0
INFO = 1
WARNING = 2
ERROR = 3
```


Quick usage example:

```cpp
#include <Logger.h>

void setup()
{
    setLogLevel(LogLevels::DEBUG);
    // other code here...
}

void function1(){
    // some code defining a value x to be logged...
    log(LogLevels::DEBUG,"x is: %d\n",x);
}
```