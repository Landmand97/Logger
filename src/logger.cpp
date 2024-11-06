#include "Logger.h"

LogLevels logLevel = INFO;

bool printLogLevel(LogLevels level);

void log(LogLevels level,const char *message, String s)
{
    if(printLogLevel(level)) {
        printf(message, s);
    }
}

void log(LogLevels level, const char *message, const char t)
{
    if(printLogLevel(level)) {
        printf(message, t);
    }
}

bool printLogLevel(LogLevels level) {
    if (level >= logLevel)
    {
        switch (level)
        {
        case INFO:
            printf("INFO: ");
            break;
        case DEBUG:
            printf("DEBUG: ");
            break;
        case WARNING:
            printf("WARNING: ");
            break;
        case ERROR:
            printf("ERROR: ");
            break;
        default:
            break;
        }
        return true;
    }
    return false;
}

void setLogLevel(LogLevels level)
{
    logLevel = level;
}

String getLogLevel()
{
    switch (logLevel)
    {
    case INFO:
        return "INFO";
    case DEBUG:
        return "DEBUG";
    case WARNING:
        return "WARNING";
    case ERROR:
        return "ERROR";
    default:
        return "UNKNOWN";
    }
}


// can not return from this!!
void errorLED()
{
    while (1)
    {
        digitalWrite(built_in_led, HIGH);
        delay(1000);
        digitalWrite(built_in_led, LOW);
        delay(1000);
        log(LogLevels::ERROR, "Error with radio", 0);
    }
}
