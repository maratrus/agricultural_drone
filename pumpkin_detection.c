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

    // �������� ����������� ���� (��������, � ������� ��������)
    for (int i = 0; i < MAX_PUMPKINS; i++) {
        // ��������� ����������� �����
        if (rand() % 2) {
            pumpkins[detected_count].x = rand() % 100; // ��������� ������� x
            pumpkins[detected_count].y = rand() % 100; // ��������� ������� y
            pumpkins[detected_count].is_detected = true;
            detected_count++;
        }
    }

    // ����������� ������������ ����
    for (int i = 0; i < detected_count; i++) {
        printf("Pumpkin detected at (%f, %f)\n", pumpkins[i].x, pumpkins[i].y);
    }
}
