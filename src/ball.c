#include "ball.h"

static Ball ball;

void ball_init() {
    ball.x = 400; //Posicion en el eje x
    ball.y = 300; //Posicion en el eje y
    ball.ax = 5.0f; //Velocidad del eje x
    ball.ay = 5.0f; //Velocidad del eje y 
    ball.radius = 5.0f;//El radio de la bocha(esfrerico, balon, redonda, pelota)
    // TODO: posicionar la pelota al centro y darle velocidad inicial
}

void ball_update() {
    ball.x += ball.ax;
    ball.y += ball.ay;

    if (ball.x - ball.radius < 0) {//Cada if es una pared distinta creo :(....
        ball.x = ball.radius;
        ball.ax *= -1;
    }//Esta es la pared izquierda

    if (ball.x + ball.radius > 800)//Pared derecha
    {
        ball.x = 800 - ball.radius;
        ball.x = 800 - ball.radius;
        ball.ax *= -1;
    }//pared de arriba
    if (ball.y - ball.radius < 0) {
        ball.y = ball.radius;
        ball.ay *= -1;
    }

    if (ball.y + ball.radius > 600) { //Pared de abajo
        ball.y = 600 - ball.radius;
        ball.ay *= -1;
    }
    
    // TODO: mover la pelota y actualizar colisiones generales
}

Ball* ball_get() {
    return &ball;
}
