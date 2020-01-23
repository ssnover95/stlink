#ifndef _GDB_SERVER_H
#define _GDB_SERVER_H

#define STRINGIFY_inner(name) #name
#define STRINGIFY(name) STRINGIFY_inner(name)

constexpr ugly_loglevel DEFAULT_LOGGING_LEVEL = static_cast<ugly_loglevel>(50);
#define DEBUG_LOGGING_LEVEL 100
#define DEFAULT_GDB_LISTEN_PORT 4242

#endif
