#include <windows.h>
#include <cstdlib>
#include <iostream>
#include <gl/glut.h>
#include <string.h>

using namespace std;

void Inicializa(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0); // Color de la ventana
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-380.0, 380.0, -380.0, 380.0);
}
void Figura(void) {
    glClear(GL_COLOR_BUFFER_BIT);

//LINEAS
    glLineWidth(5);
    glColor3f(1.0, 0.0, 1.0);  // Color morado
    glBegin(GL_LINES);
        glVertex2i(-350, 0);
        glVertex2i(350, 0);
        glVertex2i(-125, -300);
        glVertex2i(-125, 300);
        glVertex2i(125, 300);
        glVertex2i(125, -300);
    glEnd();

   glBegin(GL_POLYGON);
    glColor3f(0.84, 0.5, 1.0);
        glVertex2i(-300, 180);
        glVertex2i(-225, 300);
        glVertex2i(-150, 180);
    glColor3f(0.41, 0.0, 0.6);
        glVertex2i(-200, 30);
        glVertex2i(-250, 30);
    glEnd();

//MARIPOSA - ANADALAY
    //ANTENAS
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(-225, 225);
        glVertex2i(-215, 270);
        glVertex2i(-225, 225);
        glVertex2i(-235, 270);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(-216, 270);
        glVertex2i(-211, 270);
        glVertex2i(-211, 280);
        glVertex2i(-216, 280);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(-234, 270);
        glVertex2i(-239, 270);
        glVertex2i(-239, 280);
        glVertex2i(-234, 280);
    glEnd();

    //ALA 1
    glLineWidth(5);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.0, 0.0, 0.0 );
      glVertex2i(-230, 150);
      glVertex2i(-275, 150);
      glVertex2i(-290, 170);
      glVertex2i(-295, 210);
      glVertex2i(-295, 280);
      glVertex2i(-285, 300);
      glVertex2i(-265, 300);
      glVertex2i(-245, 240);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(-279, 290);
        glVertex2i(-285, 290);
        glVertex2i(-285, 280);
        glVertex2i(-279, 280);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(-270, 290);
        glVertex2i(-273, 290);
        glVertex2i(-273, 285);
        glVertex2i(-270, 285);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(-288, 270);
        glVertex2i(-291, 270);
        glVertex2i(-291, 275);
        glVertex2i(-288, 275);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.0, 0.0, 0.0 );
      glVertex2i(-235, 150);
      glVertex2i(-275, 150);
      glVertex2i(-290, 120);
      glVertex2i(-295, 90);
      glVertex2i(-295, 60);
      glVertex2i(-285, 30);
      glVertex2i(-265, 25);
      glVertex2i(-245, 60);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.2, 0.6, 1.0 ); //color azul claro
    //glColor3f (1.0, 0.7, 0.4 ); //color naranja claro
      glVertex2i(-240, 160);
    glColor3f (0.0, 0.0, 0.50 ); //color azul oscuro
    //glColor3f (0.72, 0.3, 0.0 ); //color naranja oscuro
      glVertex2i(-275, 160);
      glVertex2i(-285, 172);
      glVertex2i(-290, 210);
      glVertex2i(-290, 260);
      glVertex2i(-285, 270);
      glVertex2i(-265, 275);
      glVertex2i(-250, 240);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.2, 0.6, 1.0 ); //color azul claro
    //glColor3f (1.0, 0.7, 0.4 ); //color naranja claro
      glVertex2i(-240, 150);
    glColor3f (0.0, 0.0, 0.50 ); //color azul oscuro
    //glColor3f (0.72, 0.3, 0.0 ); //color naranja oscuro
      glVertex2i(-270, 150);
      glVertex2i(-287, 115);
      glVertex2i(-290, 90);
      glVertex2i(-290, 60);
      glVertex2i(-283, 40);
      glVertex2i(-265, 35);
      glVertex2i(-250, 60);
    glEnd();


    glBegin(GL_LINES);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(-240, 160);
        glVertex2i(-285, 270);
        glVertex2i(-240, 160);
        glVertex2i(-290, 210);
        glVertex2i(-265, 220);
        glVertex2i(-265, 275);

        glVertex2i(-240, 150);
        glVertex2i(-290, 90);
        glVertex2i(-240, 150);
        glVertex2i(-283, 40);
        glVertex2i(-265, 88);
        glVertex2i(-265, 35);

    glEnd();

    //CUERPO
    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.0, 0.0, 0.0 );
      glVertex2i(-225, 60);
      glVertex2i(-235, 150);
      glVertex2i(-230, 210);
      glVertex2i(-225, 225);
      glVertex2i(-220, 210);
      glVertex2i(-215, 150);
    glEnd();

    //ALA 2
    glLineWidth(5);
    glBegin(GL_TRIANGLE_FAN);
      glColor3f (0.0, 0.0, 0.0 );
      glVertex2i(-220, 150);
      glVertex2i(-180, 150);
      glVertex2i(-165, 170);
      glVertex2i(-155, 210);
      glVertex2i(-155, 280);
      glVertex2i(-165, 300);
      glVertex2i(-185, 300);
      glVertex2i(-205, 240);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(-171, 290);
        glVertex2i(-165, 290);
        glVertex2i(-165, 280);
        glVertex2i(-171, 280);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(-180, 290);
        glVertex2i(-177, 290);
        glVertex2i(-177, 285);
        glVertex2i(-180, 285);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(-160, 270);
        glVertex2i(-157, 270);
        glVertex2i(-157, 275);
        glVertex2i(-160, 275);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.0, 0.0, 0.0 );
      glVertex2i(-215, 150);
      glVertex2i(-180, 150);
      glVertex2i(-165, 125);
      glVertex2i(-155, 90);
      glVertex2i(-155, 60);
      glVertex2i(-165, 30);
      glVertex2i(-185, 25);
      glVertex2i(-205, 60);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.2, 0.6, 1.0 ); //color azul claro
    //glColor3f (1.0, 0.7, 0.4 ); //color naranja claro
      glVertex2i(-210, 160);
    glColor3f (0.0, 0.0, 0.50 ); //color azul oscuro
    //glColor3f (0.72, 0.3, 0.0 ); //color naranja oscuro
      glVertex2i(-180, 160);
      glVertex2i(-165, 180);
      glVertex2i(-160, 210);
      glVertex2i(-160, 260);
      glVertex2i(-165, 270);
      glVertex2i(-185, 275);
      glVertex2i(-200, 240);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.2, 0.6, 1.0 ); //color azul claro
    //glColor3f (1.0, 0.7, 0.4 ); //color naranja claro
      glVertex2i(-210, 150);
    glColor3f (0.0, 0.0, 0.50 ); //color azul oscuro
    //glColor3f (0.72, 0.3, 0.0 ); //color naranja oscuro
      glVertex2i(-185, 150);
      glVertex2i(-168, 120);
      glVertex2i(-160, 90);
      glVertex2i(-160, 60);
      glVertex2i(-165, 42);
      glVertex2i(-185, 35);
      glVertex2i(-200, 60);
    glEnd();

    glBegin(GL_LINES);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(-215, 150);
        glVertex2i(-160, 210);
        glVertex2i(-215, 150);
        glVertex2i(-165, 270);
        glVertex2i(-185, 275);
        glVertex2i(-185, 220);

        glVertex2i(-210, 150);
        glVertex2i(-160, 90);
        glVertex2i(-210, 150);
        glVertex2i(-165, 42);
        glVertex2i(-185, 35);
        glVertex2i(-185, 90);
    glEnd();

//GUITARRA - JANAHI
    glColor3f(0.65, 0.32, 0.17);
	glBegin(GL_QUADS);
        glVertex2i (-86,18);
        glVertex2i (74,18);
        glVertex2i (74,27);
        glVertex2i (-86,27);

        glVertex2i (-102,27);
        glVertex2i (90,27);
        glVertex2i (90,36);
        glVertex2i (-102,36);

        glVertex2i (-102,36);;
        glVertex2i (-38,36);
        glVertex2i (-38,45);
        glVertex2i (-102,45);

        glVertex2i (42,36);
        glVertex2i (42,45);
        glVertex2i (90,45);
        glVertex2i (90,36);

        glVertex2i (-102,45);
        glVertex2i (90,45);
        glVertex2i (90,63);
        glVertex2i (-102,63);

        glVertex2i (-86,63);
        glVertex2i (74,63);
        glVertex2i (74,72);
        glVertex2i (-86,72);

        glVertex2i (-86,63);
        glVertex2i (74,63);
        glVertex2i (74,72);
        glVertex2i (-86,72);

        glVertex2i (10,72);
        glVertex2i (58,72);
        glVertex2i (58,90);
        glVertex2i (10,90);

        glVertex2i (-70,72);
        glVertex2i (-6,72);
        glVertex2i (-6,90);
        glVertex2i (-70,90);

        glVertex2i (-86,90);
        glVertex2i (74,90);
        glVertex2i (74,117);
        glVertex2i (-86,117);

        glVertex2i (-70,117);
        glVertex2i (58,117);
        glVertex2i (58,126);
        glVertex2i (-70,126);

        glVertex2i (-54,216);
        glVertex2i (42,216);
        glVertex2i (42,270);
        glVertex2i (-54,270);
        //negro

        glColor3f (0.0, 0.0, 0.0 );
        glVertex2i (-38,36);
        glVertex2i (-38,45);
        glVertex2i (42,45);
        glVertex2i (42,36);

        glVertex2i (-22,72);
        glVertex2i (10,72);
        glVertex2i (10,99);
        glVertex2i (-22,99);

        glVertex2i (-15,117);
        glVertex2i (-1,117);
        glVertex2i (-1,126);
        glVertex2i (-15,126);

        glVertex2i (-22,126);
        glVertex2i (10,126);
        glVertex2i (10,216);
        glVertex2i (-22,216);

        glVertex2i (-22,225);
        glVertex2i (-6,225);
        glVertex2i (-6,234);
        glVertex2i (-22,234);

        glVertex2i (-4,225);
        glVertex2i (10,225);
        glVertex2i (10,234);
        glVertex2i (-4,234);

        glVertex2i (-22,252);
        glVertex2i (-6,252);
        glVertex2i (-6,261);
        glVertex2i (-22,261);

        glVertex2i (-4,252);
        glVertex2i (10,252);
        glVertex2i (10,261);
        glVertex2i (-4,261);

        //
        glVertex2i (42,225);
        glVertex2i (58,225);
        glVertex2i (58,234);
        glVertex2i (42,234);

        glVertex2i (42,252);
        glVertex2i (58,252);
        glVertex2i (58,261);
        glVertex2i (42,261);

        glVertex2i (-70,225);
        glVertex2i (-54,225);
        glVertex2i (-54,234);
        glVertex2i (-70,234);

        glVertex2i (-70,252);
        glVertex2i (-54,252);
        glVertex2i (-54,261);
        glVertex2i (-70,261);
	glEnd();

//PLANTA - ALAN
    //FONDO CUADRADO
    glLineWidth(5);
    glBegin(GL_QUADS);
        glColor3f (0.3, 0.635, 0.666);
        glVertex2i(220, 24);
        glColor3f (0.517, 0.9, 0.77);
        glVertex2i(300, 150);
        glVertex2i(220, 274);
        glVertex2i(150, 151);
    glEnd();

    //Cuerpo
    glLineWidth(5);
    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(210, 145);
        glVertex2i(214, 78);
        glVertex2i(230, 80);
        glVertex2i(225, 145);
    glEnd();

    glLineWidth(5);
    glBegin(GL_QUADS);
    glColor3f(0.560, 0.9921566, 0.2862);
        glVertex2i(212, 140);
        glColor3f(0.227, 0.5450, 0.0);
        glVertex2i(217, 73);

        glVertex2i(228, 75);
        glColor3f(0.560, 0.9921566, 0.2862);
        glVertex2i(224, 140);
    glEnd();

    //Cabeza
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5);
    glBegin(GL_POLYGON);
        glVertex2i(235, 224);
        glVertex2i(200, 223);
        glVertex2i(184, 202);
        glVertex2i(182, 168);
        glVertex2i(203, 135);
        glVertex2i(238, 135);
        glVertex2i(257, 165);
        glVertex2i(257, 194);
    glEnd();

    glLineWidth(5);
    glBegin(GL_POLYGON);
    glColor3f(0.560, 0.9921566, 0.2862);
        glVertex2i(235, 219);
        glVertex2i(200, 218);
        glVertex2i(189, 202);
        glVertex2i(187, 168);
        glColor3f(0.227, 0.5450, 0.0);
        glVertex2i(203, 140);
        glColor3f(0.227, 0.5450, 0.0);
        glVertex2i(238, 140);
        glColor3f(0.560, 0.9921566, 0.2862);
        glVertex2i(252, 165);
        glVertex2i(252, 194);
    glEnd();

    //Hoja cuerpo
    glLineWidth(5);
    glColor3f (0.0, 0.0, 0.0 );
    glBegin(GL_TRIANGLE_FAN);
      glVertex2i(215, 115);
      glVertex2i(205, 123);
      glVertex2i(199, 107);
      glVertex2i(214, 104);
    glEnd();

  glLineWidth(5);
    glColor3f(0.33, 0.84, 0.0549);
    glBegin(GL_TRIANGLE_FAN);
      glVertex2i(218, 113);
      glVertex2i(205, 118);
      glVertex2i(202, 109);
      glVertex2i(214, 107);
    glEnd();

    //BOCA
    glLineWidth(5);
    glBegin(GL_POLYGON);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(257, 194);
        glVertex2i(273, 207);
        glVertex2i(294, 196);
        glVertex2i(296, 165);
        glVertex2i(273, 155);
        glVertex2i(257, 163);
        glVertex2i(257, 194);
    glEnd();

    //Color boca
    glLineWidth(5);
    glBegin(GL_POLYGON);
    glColor3f(0.560, 0.9921566, 0.2862);
        glVertex2i(247, 189);
        glVertex2i(274, 202);
        glVertex2i(292, 195);
        glColor3f(0.227, 0.5450, 0.0);
        glVertex2i(294, 167);
        glVertex2i(274, 159);
        glColor3f(0.560, 0.9921566, 0.2862);
        glVertex2i(247, 168);
        glVertex2i(247, 189);
    glEnd();

    //BocaCENTRO
    glLineWidth(5);
    glBegin(GL_POLYGON);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(278, 187);
        glVertex2i(288, 193);
        glVertex2i(288, 167);
        glVertex2i(278, 172);
    glEnd();

    //Ojos
    glLineWidth(5);
    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(245, 205);
        glVertex2i(245, 185);
        glVertex2i(233, 185);
        glVertex2i(233, 205);
    glEnd();

    glLineWidth(5);
    glBegin(GL_QUADS);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(239, 196);
        glVertex2i(239, 185);
        glVertex2i(233, 185);
        glVertex2i(233, 196);
    glEnd();

    glLineWidth(5);
    glBegin(GL_QUADS);
    glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(233, 198);
        glVertex2i(233, 178);
        glVertex2i(221, 178);
        glVertex2i(221, 198);
    glEnd();
    glLineWidth(5);
    glBegin(GL_QUADS);
        glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(226, 189);
        glVertex2i(226, 178);
        glVertex2i(221, 178);
        glVertex2i(221, 189);
    glEnd();

    //Hoja de la cabeza
    glLineWidth(5);
    glBegin(GL_QUADS);
        glColor3f (0.0, 0.0, 0.0 );
        glVertex2i(173, 205);
        glVertex2i(163, 197);
        glVertex2i(165, 178);
        glVertex2i(184, 202);
    glEnd();

    glLineWidth(5);
    glBegin(GL_QUADS);
        glColor3f(0.560, 0.9921566, 0.2862);
        glVertex2i(171, 202);
        glVertex2i(165, 193);
        glColor3f(0.227, 0.5450, 0.0);
        glVertex2i(167, 183);
        glVertex2i(181, 200);
    glEnd();

    //Hojabase1
    glColor3f (0.0, 0.0, 0.0 );
    glLineWidth(5);
    glBegin(GL_TRIANGLE_STRIP);
      glVertex2i(215, 56);
      glVertex2i(224, 81);
      glVertex2i(255, 78);
      glVertex2i(244, 103);
      glVertex2i(271, 67);
    glEnd();

    glLineWidth(5);
    glBegin(GL_TRIANGLE_STRIP);
      glColor3f(0.227, 0.5450, 0.0);
      glVertex2i(218, 60);
      glColor3f(0.560, 0.9921566, 0.2862);
      glVertex2i(227, 79);
      glColor3f(0.227, 0.5450, 0.0);
      glVertex2i(255, 82);
      glColor3f(0.560, 0.9921566, 0.2862);
      glVertex2i(244, 100);
      glColor3f(0.560, 0.9921566, 0.2862);
      glVertex2i(270, 68);
    glEnd();

    //Hoja base2
    glLineWidth(5);
    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_STRIP);
      glVertex2i(215, 56);
      glVertex2i(224, 81);
      glVertex2i(173, 94);
      glVertex2i(196, 102);
      glVertex2i(167, 73);
    glEnd();

    glLineWidth(5);
    glBegin(GL_TRIANGLE_STRIP);
      glColor3f(0.227, 0.5450, 0.0);
      glVertex2i(218, 60);
      glColor3f(0.560, 0.9921566, 0.2862);
      glVertex2i(227, 77);
      glColor3f(0.227, 0.5450, 0.0);
      glVertex2i(175, 92);
      glColor3f(0.560, 0.9921566, 0.2862);
      glVertex2i(195, 98);
      glColor3f(0.560, 0.9921566, 0.2862);
      glVertex2i(170, 79);
    glEnd();

//LLAVE - JONATHAN
    //OCTAGONO
    glLineWidth(3);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.83, 0.68, 0.21);
        glVertex2i(-20,-20);
        glVertex2i(20,-20);
        glVertex2i(40,-45);
        glVertex2i(40,-80);
        glVertex2i(20,-100);
        glVertex2i(-20,-100);
        glVertex2i(-40,-80);
        glVertex2i(-40,-45);
    glEnd();

    //PARTE DE ABAJO DE LA LLAVE
     glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.83, 0.68, 0.21);
        glVertex2i(-20,-100);
        glVertex2i(20,-100);
        glVertex2i(20,-120);
        glVertex2i(30,-130);
        glVertex2i(20,-140);
        glVertex2i(20,-150);
        glVertex2i(10,-155);
        glVertex2i(25,-165);
        glVertex2i(25,-175);
        glVertex2i(15,-180);
        glVertex2i(20,-185);
        glVertex2i(15,-195);
        glVertex2i(20,-205);
        glVertex2i(0,-225);
        glVertex2i(-20,-205);
    glEnd();

     //PARTE DE ABAJO DE LA LLAVE (PARTE INTERNA)
     glBegin(GL_TRIANGLE_FAN);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(0, -100);
        glVertex2i(5, -100);
        glVertex2i(5, -210);
        glVertex2i(0, -210);
        glEnd();

         //PARTE INTERNA DEL OCTAGONO
     glBegin(GL_TRIANGLE_FAN);
    glColor3f (1.0, 1.0, 1.0 );
        glVertex2i(-10, -30);
        glVertex2i(10, -30);
        glVertex2i(10, -50);
        glVertex2i(-10, -50);
        glEnd();

//PINO - ABIGAIL
    glPointSize(10.0);
    //TRIANGULO PARA EL PINO
    glBegin(GL_POLYGON);
    glColor3f (0.0, 0.7, 0.0 );
        glVertex2i(-260,-140);
        glVertex2i(-140,-140);
        glVertex2i(-200,-10);
        glEnd();

        //PARTE DE ABAJO DEL PINO
    glBegin(GL_POLYGON);
    glColor3f (0.65, 0.16, 0.16);
        glVertex2i(-220,-140);
        glVertex2i(-180,-140);
        glVertex2i(-180,-200);
        glVertex2i(-220,-200);
        glEnd();

    glBegin(GL_LINES);
    glColor3f (0.0, 0.0, 0.0);
        glVertex2i(-253,-126);
        glVertex2i(-158,-100);
        glVertex2i(-158,-100);
        glVertex2i(-226,-66);
        glVertex2i(-226,-66);
        glVertex2i(-182,-48);
        glEnd();

    //LUCES COLOR AMARILLAS
    glBegin(GL_POINTS);
    glColor3f(1.0, 1.0, 0.0);
         glVertex2i(-237,-121);
        glVertex2i(-186,-107);
        glVertex2i(-196,-81);
    glEnd();

    //LUCES COLOR ROJAS
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0);
        glVertex2i(-220,-115);
        glVertex2i(-172,-92);
        glVertex2i(-210,-60);
    glEnd();

    //LUCES COLOR AZULES
    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 1.0);
         glVertex2i(-201,-111);
        glVertex2i(-208,-75);
        glVertex2i(-192,-52);
    glEnd();

    //LUCES COLOR VERDES
    glBegin(GL_POINTS);
    glColor3f(0.0, 1.0, 0.0);
        glVertex2i(-218,-63);
        glVertex2i(-202,-56);
        glVertex2i(-183,-87);
    glEnd();
     // Forzar el dibujado
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1300, 600);
    glutCreateWindow("Figuras");
    Inicializa();
    glutDisplayFunc(Figura);
    glutMainLoop();
    return 0;
}

