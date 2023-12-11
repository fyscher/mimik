#ifndef __BIN_CAT_CONF_H__
#define __BIN_CAT_CONF_H__

// Amount to read/write at a time, set to 1 to disable i/o buffering
#define BUFF_SIZE 4096

// Default display name
#define DEFAULT_SELF "/bin/cat"

// Default messages

#define UNKNOWN_OPTION "%s: Unknown option `-%c'\n" // 1:1
#define CANNOT_OPEN    "%s: Cannot open file `%s' for reading, errno %d: %s\n" // 1:2
#define CAT_ERROR      "%s: Cannot open current locale message catalogue, errno %d: %s\n"

#endif 
