#ifndef __BIN_TEE_CONF_H__
#define __BIN_TEE_CONF_H__

// Default display name
#define DEFAULT_SELF "/bin/tee"

// Amount to read/write at a time, set to 1 to disable i/o buffering
#define BUFF_SIZE 4096

// Max output files, POSIX mandates a minimum of 13
#define MAX_FILES 13

// Default messages

// Catopen failed
#define CAT_ERROR "%s %d: Cannot open current locale message catalogue\n"

// Unknown option 1:1
#define UNKNOWN_OPTION "%s: Unknown option `-%c'\n"

// Cannot open file 1:2
#define CANNOT_OPEN "%s: Cannot open file `%s' for writing, errno %d: %s\n"

#endif
