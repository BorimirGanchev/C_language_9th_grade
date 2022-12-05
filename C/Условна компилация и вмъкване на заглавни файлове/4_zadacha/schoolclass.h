#ifndef PersonGuard
    #include "person.h"
#endif

typedef struct{
    struct Person students[26];
    char classLetter;
    int classNumber;
    struct Person classTeacher;
} SchoolClass;