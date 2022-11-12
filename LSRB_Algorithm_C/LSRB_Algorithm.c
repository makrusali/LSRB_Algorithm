#include "LSRB_Algorithm.h"

uint8_t LSRB_get_size(char* path) {
    uint8_t i = 0;
    while (path[i] != '\0') {
        i++;
    }
    return i;
}

void LSRB_concat(char* destination, char path) {
    uint8_t i = 0;
    while (i <= LSRB_get_size(destination)) {
        if (destination[i] == '\0') {
            destination[i] = path;
            //add end char
            destination[i + 1] = '\0';
            break;
        }
        ++i;
    }
}

void LSRB_clear(char* destination) {
    for (uint8_t i = 0; i < LSRB_get_size(destination); ++i) {
        destination[i] = '\0';
    }
}

void LSRB_copy(char* destination, char* from) {
    LSRB_clear(destination);
    for (uint8_t i = 0; i < LSRB_get_size(from); ++i) {
        LSRB_concat(destination, from[i]);
    }
}


void LSRB_Algorithm(char* path, char* temp_path) {
    unsigned char done = 1;
    int i = 0;

    while (1) {
        while (i < LSRB_get_size(path)) {
            if (path[i] == 'L' && path[i + 1] == 'B' && path[i + 2] == 'R') {
                i += 3;
                LSRB_concat(temp_path, 'B');
                done = 0;
                continue;
            }

            if (path[i] == 'L' && path[i + 1] == 'B' && path[i + 2] == 'S') {
                i += 3;
                LSRB_concat(temp_path, 'R');
                done = 0;
                continue;
            }

            if (path[i] == 'R' && path[i + 1] == 'B' && path[i + 2] == 'L') {
                i += 3;
                LSRB_concat(temp_path, 'B');
                done = 0;
                continue;
            }

            if (path[i] == 'S' && path[i + 1] == 'B' && path[i + 2] == 'L') {
                i += 3;
                LSRB_concat(temp_path, 'R');
                done = 0;
                continue;
            }

            if (path[i] == 'S' && path[i + 1] == 'B' && path[i + 2] == 'S') {
                i += 3;
                LSRB_concat(temp_path, 'B');
                done = 0;
                continue;
            }

            if (path[i] == 'L' && path[i + 1] == 'B' && path[i + 2] == 'L') {
                i += 3;
                LSRB_concat(temp_path, 'S');
                done = 0;
                continue;
            }

            LSRB_concat(temp_path, path[i]);
            ++i;
        }

        if (done == 1) {
            break;
        }

        LSRB_copy(path, temp_path);
        LSRB_clear(temp_path);
        i = 0;
        done = 1;
    }
}
