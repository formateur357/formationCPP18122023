#pragma once
#define PI 3.14159
#define MAX_BUFFER_SIZE 1024

#define SQUARE(x) ((x) * (x))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// SQUARE(1+2) dangereux si x n'est pas proteger => (x)
#define STEP(x, y, z) name##z
#include "name.def"

#undef STEP

STEP(RESET, Reset, "")

#if defined(_WIN32)
#elif defined(__linux__)
#endif

#ifdef DEBUG
#define DEBUG_PRINT(x) std::cout << x << endl;
#else
#define DEBUG_PRINT(x)
#endif

#define LOG(message) Logger::log(__FILE__, __LINE__, message)

#define ASSERT(condition)             \
    if (!(condition))                 \
    { /* code pour gérer l'échec */ \
    }
