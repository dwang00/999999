#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  FILE *pic = fopen("pic.ppm", "w");
  int r = 0.0, g = 170.0, b = 255.0;
  fprintf(pic, "P3\n512 512\n255\n");
  for (int i = 0; i <= 512; i++) {
    for (int x = 0; x <= 512; x++) {
      r = r % 256;
      fprintf(pic, "%d %d %d ", r, g, b);
    }
    if (r < 256 && i % 2 == 0) {
        r += 1;
    }
    if (g > 0 && i % 2 == 0) {
        g -= (170.0 / 256);
    }
    if (b > 72 && i % 2 == 0) {
      b -= (183.0 / 256);
    }
  }
  fclose(pic);
}

//255,0,72
