#include "user_interface.h"

void initialize_user_interface() {
    printf("=== Drone Harvester ===\n");
}

void display_status(Drone* drone) {
    printf("Position: (%d, %d), Harvested: %d, Carts: %d\n",
           drone->position.x, drone->position.y, drone->harvested_count, drone->cart_count);
}
