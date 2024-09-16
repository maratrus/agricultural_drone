#include <stdio.h>
#include <stdbool.h>
#include "pumpkin_detection.h"

#define MAX_PUMPKINS 100

typedef struct {
    float x;
    float y;
    bool is_detected;
} Pumpkin;

void detect_pumpkins(Drone* drone) {
    Pumpkin pumpkins[MAX_PUMPKINS];
    int detected_count = 0;

    // Имитация обнаружения тыкв (например, с помощью датчиков)
    for (int i = 0; i < MAX_PUMPKINS; i++) {
        // Случайное обнаружение тыквы
        if (rand() % 2) {
            pumpkins[detected_count].x = rand() % 100; // случайная позиция x
            pumpkins[detected_count].y = rand() % 100; // случайная позиция y
            pumpkins[detected_count].is_detected = true;
            detected_count++;
        }
    }

    // Отображение обнаруженных тыкв
    for (int i = 0; i < detected_count; i++) {
        printf("Pumpkin detected at (%f, %f)\n", pumpkins[i].x, pumpkins[i].y);
    }
}
