#include <stdio.h>
#include <stdlib.h>

int main() {
    int pregunta;
    int Pregunta;
    printf("Hola, elige el numero de pregunta de la que quieras saber la respuesta\n");
    printf("1. ¿Como te llamas?\n");
    printf("2. ¿Te gusta algun deporte?\n");
    printf("3. ¿Lo practicas?\n");
    printf("4. ¿Cual es tu mayor anhelo en la vida?\n");
    printf("5. ¿Como planeas lograrlo?\n");
    printf("6. ¿Quien es tu superheroe favorito?\n");
    printf("7. ¿Cual es tu hobby favorito?\n");
    printf("8. ¿Cual es tu cancion favorita?\n");
    printf("Escribe el numero de la pregunta: "); scanf ("%d", &Pregunta);

    if (Pregunta == 1) {
        printf(" ");
        printf("Gideon, es un placer conocerte\n");
        printf("¿Deseas hacerme alguna otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 2) {
        printf(" ");
        printf("Si, me encanta el soccer\n");
        printf("¿Deseas hacer otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");;
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 3) {
        printf(" ");
        printf("No puedo ya que soy una inteligencia virtual, pero me encanta verlo por TV, soy fanatica de las chivas\n");
        printf("¿Deseas hacer otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 4) {
        printf(" ");
        printf("Ser el mejor asistente virtual\n");
        printf("¿Deseas hacer otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 5) {
        printf(" ");
        printf("Actualizando mi informacion cada vez que sea posibe\n");
        printf("¿Deseas hacer otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 6) {
        printf(" ");
        printf("Wonder woman, me encantaria ser como ella y patear traseros\n");
        printf("¿Deseas hacer otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 7) {
        printf(" ");
        printf("Mmm... Pues ver soccer y leer\n");
        printf("¿Deseas hacer otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 8) {
        printf(" ");
        printf("Me encanta la cancion I want it that way\n");
        printf("¿Deseas hacer otra pregunta?\n");
        printf("Ponga 1. Para si, o 2. para no\n");
        scanf("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }  }

}
