#include <stdio.h>
#include <string.h>
#include "config/grayScaleImage.h"
#include "config/coloredBitmap.h"
#include "config/video.h"

float grayScaleImage(int w, int h);
float coloredBitmap(int w, int h, char* unit);
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* u);

int main() {
    int width, height, durationMovie, durationCredits, fps;
    char u[3];


    printf("Enter width and height of the grayscale image: ");
    scanf("%d %d", &width, &height);
    float grayScaleSize = grayScaleImage(width, height);
    printf("Grayscale image size: %.2f bytes\n", grayScaleSize);


    printf("\nEnter width, height, and output unit (bt, ko, mo, go) for the colored image: ");
    scanf("%d %d %s", &width, &height, u);
    float coloredSize = coloredBitmap(width, height, u);
    printf("Colored image size: %.2f %s\n", coloredSize, u);

    printf("\nEnter width, height, duration of the movie (seconds), duration of the credits (seconds), FPS, and output unit (bt, ko, mo, go): ");
    scanf("%d %d %d %d %d %s", &width, &height, &durationMovie, &durationCredits, &fps, u);
    float videoSize = video(width, height, durationMovie, durationCredits, fps, u);
    printf("Video size: %.2f %s\n", videoSize, u);

    return 0;
}