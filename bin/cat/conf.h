#ifndef __BIN_CAT_CONF_H__
#define __BIN_CAT_CONF_H__

// Amount to read/write at a time, set to 1 to disable buffering
#define BUFF_SIZE 4096

// Default display name
#define DEFAULT_SELF "/bin/cat"

// Default messages

#define UNKNOWN_OPTION "%s: Unknown option `%s'\n"
#define CANNOT_OPEN    "%s %d: Cannot open file `%s' for reading\n"
#define CAT_ERROR      "%s %d: Cannot open current locale message catalogue\n"

#endif 
