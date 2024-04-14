long timings[5] = {10000, 1000, 500, 100, 50}; //10мс 1мс 500мкс 100мкс 50мкс
int points[5] = {3, 5, 6, 9, 10};
int* flashes = new int[5];
long* micros = new long[5];

void setup() {
  for (int i = 0; i < 5; ++i) 
  {
    micros[i] = 0;
    flashes[i] = LOW;
    pointMode(points[i], OUTPUT);
  }
}

void loop() {
  unsigned long micro_current = micros();

  if (micro_current - micros[0] >= timings[0]) 
  {
    micros[0] = micro_current;

    if (flashes[0] == LOW) 
    {
      flashes[0] = HIGH;
    }
    else 
    {
      flashes[0] = LOW;
    }

    digitalWrite(points[0], flashes[0]);
  }

  if (micro_current - micros[1] >= timings[1]) 
  {
    micros[1] = micro_current;

    if (flashes[1] == LOW) 
    {
      flashes[1] = HIGH;
    }
    else 
    {
      flashes[1] = LOW;
    }

    digitalWrite(points[1], flashes[1]);
  }
  
  if (micro_current - micros[2] >= timings[2]) 
  {
    micros[2] = micro_current;

    if (flashes[2] == LOW) 
    {
      flashes[2] = HIGH;
    }
    else 
    {
      flashes[2] = LOW;
    }

    digitalWrite(points[2], flashes[2]);
  }

  if (micro_current - micros[3] >= timings[3]) 
  {
    micros[3] = micro_current;

    if (flashes[3] == LOW)
    {
      flashes[3] = HIGH;
    }
    else 
    {
      flashes[3] = LOW;
    }

    digitalWrite(points[3], flashes[3]);
  }

  if (micro_current - micros[4] >= timings[4]) 
  {
    micros[4] = micro_current;

    if (flashes[4] == LOW) 
    {
      flashes[4] = HIGH;
    }
    else 
    {
      flashes[4] = LOW;
    }

    digitalWrite(points[4], flashes[4]);
  }
}