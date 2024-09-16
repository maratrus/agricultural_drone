#ifndef DRONE_MOVEMENT_H
#define DRONE_MOVEMENT_H

typedef struct {
    int x, y; // Позиция дрона
} Position;

typedef struct {
    Position position;
    int cart_count;
    int harvested_count;
} Drone;

typedef enum {
    UP,
    DOWN,
    LEFT,
    RIGHT
} Direction;

void initialize_drone(Drone* drone);
void move_drone(Drone* drone, Direction direction);

#endif // DRONE_MOVEMENT_H
