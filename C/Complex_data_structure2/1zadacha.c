#include <stdbool.h>

struct {
    int day;
    int month;
    int year;
    struct {
        int hour;
        int minute;
    } time;
} typedef Date;

typedef struct {
    char* firstName;
    char* middleName;
    char* lastName;
    char* email;
    char* phone;
} Participant;

typedef struct {
    Participant participant;
    bool willParticipate;
} ParticipantResponse;

typedef struct {
    char* title;
    char* description;
    Date date;
    ParticipantResponse participants[100];
} Cause;

int main() {
    
Cause cause1 = {
        .title = "HackTues",
        .description = "Help the organizatorite.",
        .date = {
            .day = 8,
            .month = 3,
            .year = 2023,
            .time = {
                .hour = 8,
                .minute = 10
            }
        },
        .participants = {
            {
                .participant = {
                    .firstName = "Borimir",
                    .middleName = "Krasimirov",
                    .lastName = "Ganchev",
                    .email = "borimir.ganchev@gmail.com",
                    .phone = "0892050590"
                },
                .willParticipate = true
            },
            {
                .participant = {
                    .firstName = "Radoslav",
                    .middleName = "Antonov",
                    .lastName = "Cvetanov",
                    .email = "rado.cvetanov@gamil.com",
                    .phone = "0893060680"
                },
                .willParticipate = false
            },
        }
    };

Cause cause2 = {
        .title = "TuesFest",
        .description = "Help the organizatorite.",
        .date = {
            .day = 23,
            .month = 3,
            .year = 2023,
            .time = {
                .hour = 8,
                .minute = 00
            }
        },
        .participants = {
            {
                .participant = {
                    .firstName = "Borimir",
                    .lastName = "Ganchev",
                    .email = "borimir.ganchev@gmail.com",
                    .phone = "0892050590"
                },
                .willParticipate = false
            },
            {
                .participant = {
                    .firstName = "Radoslav",
                    .lastName = "Cvetanov",
                    .email = "rado.cvetanov@gamil.com",
                    .phone = "0893060680"
                },
                .willParticipate = true
            },
        }
    };
    
    return 0;
}
