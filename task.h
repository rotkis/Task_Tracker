#include <time.h>

typedef struct {
    int id;
    char description[256];
    char status[20]; // "todo", "in-progress", "done"
    time_t createdAt;
    time_t updatedAt;
} Task;
