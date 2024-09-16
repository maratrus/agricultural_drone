CC = gcc
CFLAGS = -Wall -Wextra -pedantic

OBJS = main.o drone_movement.o pumpkin_detection.o

drone_harvester: $(OBJS)
	$(CC) -o drone_harvester $(OBJS)

clean:
	rm -f $(OBJS) drone_harvester
