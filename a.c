#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define SAMPLE_RATE 44100  // Adjust as needed
#define DURATION 5         // Adjust as needed

int main() {
    FILE *file = fopen("sin_wave.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Generate a sine wave and write to file
    for (double t = 0; t < DURATION; t += 1.0 / SAMPLE_RATE) {
        double value = sin(2.0 * PI * 440.0 * t);  // 440 Hz frequency, adjust as needed
        fprintf(file, "%f\n", value);
    }

    fclose(file);

    printf("Sine wave generated and saved to sin_wave.txt\n");

    return 0;
}
