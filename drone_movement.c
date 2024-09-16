#include "drone_movement.h"

#define MAX_DRONES 5

typedef struct {
    Drone* drones[MAX_DRONES];
    int count;
} DroneFleet;

void share_pumpkin_locations(DroneFleet* fleet) {
    for (int i = 0; i < fleet->count; i++) {
        Drone* current_drone = fleet->drones[i];
        // ������ �����, �� ������ �������� ���������� ������ ������
        // ��������, ���� 0 ������� ������ ������������� � �������
        if (i == 0) {
            for (int j = 1; j < fleet->count; j++) {
                // ������ ������ ������ �������
                printf("Drone %d shares its data with Drone %d\n", i, j);
            }
        }
    }
}
