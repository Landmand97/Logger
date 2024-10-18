#include "logger.h"

log_levels log_level = INFO;

bool printLogLevel(log_levels level);

void log(log_levels level,const char *message, String s)
{
    if(printLogLevel(level)) {
        printf(message, s);
    }
}

void log(log_levels level, const char *message, const char t)
{
    if(printLogLevel(level)) {
        printf(message, t);
    }
}

bool printLogLevel(log_levels level) {
    if (level >= log_level)
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

void set_log_level(log_levels level)
{
    log_level = level;
}

String get_log_level()
{
    switch (log_level)
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
