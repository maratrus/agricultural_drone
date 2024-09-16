#include <stdio.h>
#include "drone_movement.h"
#include "ai_autopilot.h"
#include "pumpkin_detection.h"
#include "harvest_tracking.h"
#include "user_interface.h"

int main() {
    initialize_user_interface();

    Drone drone;
    initialize_drone(&drone);

    while (1) {
        update_map();
        manual_or_autopilot_mode(&drone);
        collect_pumpkins(&drone);
        check_for_collision(&drone);
        display_status(&drone);

        // Sleep for a short period to control update frequency
        usleep(100000); // 100 ms
    }

    return 0;
}
