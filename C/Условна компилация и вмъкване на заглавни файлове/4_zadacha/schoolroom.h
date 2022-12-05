#ifndef PersonGuard
    #include "person.h"
#endif

typedef struct {
    int roomNumber;
    struct Person inRoom[50];
} SchoolRoom;