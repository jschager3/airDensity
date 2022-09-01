/**
 * Authors: Jacob and Levi
 * 
 * Date:    2022/09/01
 *
 * Porgram to measure the distance between two locations
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){

    double lat01, long01, lat02, long02;
    printf("Please enter the latitude of your origin: \n");
    scanf("%lf", &lat01);
    printf("Please enter the longitude of your origin: \n");
    scanf("%lf", &long01);

    printf("Please enter the latitude of your destination: \n");
    scanf("%lf", &lat02);
    printf("Please enter the longitude of your destination: \n");
    scanf("%lf", &long02);

    /* Radius of the Earth */
    double r = 6371;

    /* Converts coordinate values entered into radians */
    double latRadian01 = (lat01 / 180) * M_PI;
    double longRadian01 = (long01 / 180) * M_PI;
    double latRadian02 = (lat02 / 180) * M_PI;
    double longRadian02 = (long02 / 180) * M_PI;

    /* Equation for the distance between two locations */
    double d = acos(sin(latRadian01) * sin(latRadian02) + cos(latRadian01) * cos(latRadian02) * cos(longRadian02 - longRadian01));
    double distance = d * r;

    printf("Origin:         %lf, %lf \n", lat01, long01);
    printf("Destination:    %f, %lf \n", lat02, long02);
    printf("Air distance is %lf Kms \n", distance);

}