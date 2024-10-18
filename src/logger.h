#include <Arduino.h>

#ifndef Logger_h
#define Logger_h

enum LogLevels
{
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

#endif
void log(LogLevels level, const char *message, String s);
void log(LogLevels level, const char *message, const char t);

void setLogLevel(LogLevels level);

String getLogLevel();
