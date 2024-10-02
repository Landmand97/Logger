#include "logger.h"


log_levels log_level = INFO;

void log(log_levels level, const char *message, const char t)
{
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
    }

    printf(message, t);
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