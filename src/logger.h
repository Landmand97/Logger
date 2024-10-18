#include <Arduino.h>

#ifndef logger_h
#define logger_h

enum log_levels
{
    INFO,
    DEBUG,
    WARNING,
    ERROR
};

#endif
void log(log_levels level, const char *message, String s);
void log(log_levels level, const char *message, const char t);

void set_log_level(log_levels level);

String get_log_level();
