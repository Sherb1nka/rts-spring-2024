#include <TaskManagerIO.h>

long timings[5] = {10000, 1000, 500, 100, 50}; //10мс 1мс 500мкс 100мкс 50мкс
int points[5] = {3, 5, 6, 9, 10};
int* flashes = new int[5];

void setup() {
    for (int i = 0; i < 5; ++i) 
  {
    flashes[i] = LOW;
    pointMode(points[i], OUTPUT);
  }

  taskid_t taskId0 = taskManager.scheduleFixedRate(timings[0], [] {
      if (flashes[0] == LOW) 
      {
        flashes[0] = HIGH;
      }
      else {
        flashes[0] = LOW;
      }

      digitalWrite(points[0], flashes[0]);
    }, TIME_MICROS);

  taskid_t taskId1 = taskManager.scheduleFixedRate(timings[1], [] {
      if (flashes[1] == LOW) 
      {
        flashes[1] = HIGH;
      }
      else {
        flashes[1] = LOW;
      }

      digitalWrite(points[1], flashes[1]);
    }, TIME_MICROS);

  taskid_t taskId2 = taskManager.scheduleFixedRate(timings[2], [] {
      if (flashes[2] == LOW) 
      {
        flashes[2] = HIGH;
      }
      else {
        flashes[2] = LOW;
      }

      digitalWrite(points[2], flashes[2]);
    }, TIME_MICROS);

  taskid_t taskId3 = taskManager.scheduleFixedRate(timings[3], [] {
      if (flashes[3] == LOW) 
      {
        flashes[3] = HIGH;
      }
      else {
        flashes[3] = LOW;
      }

      digitalWrite(points[3], flashes[3]);
    }, TIME_MICROS);

  taskid_t taskId4 = taskManager.scheduleFixedRate(timings[4], [] {
      if (flashes[4] == LOW) 
      {
        flashes[4] = HIGH;
      }
      else {
        flashes[4] = LOW;
      }

      digitalWrite(points[4], flashes[4]);
    }, TIME_MICROS);

  taskid_t taskId5 = taskManager.scheduleFixedRate(timings[5], [] {
      if (flashes[5] == LOW) 
      {
        flashes[5] = HIGH;
      }
      else {
        flashes[5] = LOW;
      }

      digitalWrite(points[5], flashes[5]);
    }, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}