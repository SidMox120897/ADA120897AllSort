#include <iostream>
#include "maximilian.h"

maxiSample sampMox;
void setup(){
    sampMox.load("/home/sidmox/Escritorio/iSidMox/unsaac/Paralela/Maximilian/Audio/beat2.wav");
    printf("Summary \n%s",sampMox.getSummary());
}

void play(double *output){
    output[0]=sampMox.play();
    output[1]=output[0];
}
