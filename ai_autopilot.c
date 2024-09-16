#include "ai_autopilot.h"
#include <stdio.h>

void manual_or_autopilot_mode(Drone* drone) {
    char input;
    printf("Enter 'm' for Manual Mode, 'a' for Autopilot Mode: ");
    scanf(" %c", &input);

    if (input == 'm') {
        printf("Manual Mode activated.\n");
        // ����� ����� ���� ��� ��� ������� ���������� ������
    } else if (input == 'a') {
        printf("Autopilot Mode activated.\n");
        // ����� ����� ���� ��� ��� ����������
        update_map();
    } else {
        printf("Invalid option. Please choose either 'm' or 'a'.\n");
    }
}

