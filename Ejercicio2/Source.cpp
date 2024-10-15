// Primer programa en OpenGL usando C++ 

// GLUT (Graphics Library Utility Toolkit) , es una biblioteca de utilidades cuya funcion es facilitar la implementacion de OpenGL
#include <GL/GLUT.h>
#include <iostream>
#include <string>
using namespace std;



// Funcion que nos permitira crear las primitivas que queremos mostrar

static char label[100];

void drawString(char* s)
{
    unsigned int i;
    for (i = 0; i < strlen(s); i++)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, s[i]);   // Renderiza un caracter bitmap en la pantalla. Es importante entender el codigo ASCII.
    //glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 65 ); // https://commons.wikimedia.org/wiki/File:ASCII-Table-wide.svg
}

void matriz_Base()
{
    glColor3f(0.5, 0.5, 0.5);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex3f(1.0, 0.0, 0.0);
    glVertex3f(-1.0, 0.0, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
    glVertex3f(0.0, -1.0, 0.0);
    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glVertex3f(1.0, 0.1, 0.0);
    glVertex3f(-1.0, 0.1, 0.0);
    glVertex3f(1.0, 0.2, 0.0);
    glVertex3f(-1.0, 0.2, 0.0);
    glVertex3f(1.0, 0.3, 0.0);
    glVertex3f(-1.0, 0.3, 0.0);
    glVertex3f(1.0, 0.4, 0.0);
    glVertex3f(-1.0, 0.4, 0.0);
    glVertex3f(1.0, 0.5, 0.0);
    glVertex3f(-1.0, 0.5, 0.0);
    glVertex3f(1.0, 0.6, 0.0);
    glVertex3f(-1.0, 0.6, 0.0);
    glVertex3f(1.0, 0.7, 0.0);
    glVertex3f(-1.0, 0.7, 0.0);
    glVertex3f(1.0, 0.8, 0.0);
    glVertex3f(-1.0, 0.8, 0.0);
    glVertex3f(1.0, 0.9, 0.0);
    glVertex3f(-1.0, 0.9, 0.0);

    glVertex3f(1.0, -0.1, 0.0);
    glVertex3f(-1.0, -0.1, 0.0);
    glVertex3f(1.0, -0.2, 0.0);
    glVertex3f(-1.0, -0.2, 0.0);
    glVertex3f(1.0, -0.3, 0.0);
    glVertex3f(-1.0, -0.3, 0.0);
    glVertex3f(1.0, -0.4, 0.0);
    glVertex3f(-1.0, -0.4, 0.0);
    glVertex3f(1.0, -0.5, 0.0);
    glVertex3f(-1.0, -0.5, 0.0);
    glVertex3f(1.0, -0.6, 0.0);
    glVertex3f(-1.0, -0.6, 0.0);
    glVertex3f(1.0, -0.7, 0.0);
    glVertex3f(-1.0, -0.7, 0.0);
    glVertex3f(1.0, -0.8, 0.0);
    glVertex3f(-1.0, -0.8, 0.0);
    glVertex3f(1.0, -0.9, 0.0);
    glVertex3f(-1.0, -0.9, 0.0);


    glVertex3f(0.1, 1.0, 0.0);
    glVertex3f(0.1, -1.0, 0.0);
    glVertex3f(0.2, 1.0, 0.0);
    glVertex3f(0.2, -1.0, 0.0);
    glVertex3f(0.3, 1.0, 0.0);
    glVertex3f(0.3, -1.0, 0.0);
    glVertex3f(0.4, 1.0, 0.0);
    glVertex3f(0.4, -1.0, 0.0);
    glVertex3f(0.5, 1.0, 0.0);
    glVertex3f(0.5, -1.0, 0.0);
    glVertex3f(0.6, 1.0, 0.0);
    glVertex3f(0.6, -1.0, 0.0);
    glVertex3f(0.7, 1.0, 0.0);
    glVertex3f(0.7, -1.0, 0.0);
    glVertex3f(0.8, 1.0, 0.0);
    glVertex3f(0.8, -1.0, 0.0);
    glVertex3f(0.9, 1.0, 0.0);
    glVertex3f(0.9, -1.0, 0.0);

    glVertex3f(-0.1, 1.0, 0.0);
    glVertex3f(-0.1, -1.0, 0.0);
    glVertex3f(-0.2, 1.0, 0.0);
    glVertex3f(-0.2, -1.0, 0.0);
    glVertex3f(-0.3, 1.0, 0.0);
    glVertex3f(-0.3, -1.0, 0.0);
    glVertex3f(-0.4, 1.0, 0.0);
    glVertex3f(-0.4, -1.0, 0.0);
    glVertex3f(-0.5, 1.0, 0.0);
    glVertex3f(-0.5, -1.0, 0.0);
    glVertex3f(-0.6, 1.0, 0.0);
    glVertex3f(-0.6, -1.0, 0.0);
    glVertex3f(-0.7, 1.0, 0.0);
    glVertex3f(-0.7, -1.0, 0.0);
    glVertex3f(-0.8, 1.0, 0.0);
    glVertex3f(-0.8, -1.0, 0.0);
    glVertex3f(-0.9, 1.0, 0.0);
    glVertex3f(-0.9, -1.0, 0.0);

    glEnd();
}




void entradas()
{
    cout << "Entradas del sistema + OpenGL" << "\n" << "Por favor ingrese las coordenadas del punto 1 (P1):" << "\n";
    cout << "Coordenada X" << "\n";
    float puntox1;//En esta variable estará almacenando coordenada x del punto 1 

    cin >> puntox1; //Se lee la coordenada

    cout << "Coordenada Y" << "\n";
    float puntoy1;//En esta variable estará almacenando coordenada y del punto 1 
    cin >> puntoy1; //Se lee la coordenada

    cout << "Por favor ingrese las coordenadas del punto 2 (P2):" << "\n";
    cout << "Coordenada X" << "\n";
    float puntox2;//En esta variable estará almacenando coordenada x del punto 2 
    cin >> puntox2; //Se lee la coordenada

    cout << "Coordenada Y" << "\n";
    float puntoy2;//En esta variable estará almacenando coordenada y del punto 2 
    cin >> puntoy2; //Se lee la coordenada
    puntox1 = puntox1 / 10;
    puntoy1 = puntoy1 / 10;
    puntox2 = puntox2 / 10;
    puntoy2 = puntoy2 / 10;





    glColor3f(0.54, 0.0, 1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex3f(puntox1, puntoy1, 0);
    glVertex3f(puntox2, puntoy2, 0);
    glEnd();


    //DIBUJAR TEXTO
    glColor3f(0.0, 0.0, 1.0);
    sprintf_s(label, sizeof(label), " P1=(%.0f,%.0f)", puntox1 * 10, puntoy1 * 10);
    glRasterPos2f(puntox1, puntoy1);
    drawString(label);

    sprintf_s(label, sizeof(label), "P2=(%.0f,%.0f)", puntox2 * 10, puntoy2 * 10);
    glRasterPos2f(puntox2, puntoy2);
    drawString(label);

    int y2y1 = (puntoy2 * 10) - (puntoy1 * 10);
    int x2x1 = (puntox2 * 10) - (puntox1 * 10);

    sprintf_s(label, sizeof(label), "Y-(%.0f)=(%d/%d)(X-(%.0f))", puntoy1 * 10, y2y1, x2x1, puntox1 * 10);
    glRasterPos2f(-0.9, 0.9);
    drawString(label);



}


void myDisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT); //glClear es una funcion que nos permite limpiar la imagen de fondo, por defecto se usa negro, pero puede ser cambiado.
    matriz_Base();
    entradas();


    glFlush();


}

// Funcion para crear la ventana en la cual vamos a desplegar nuestras geometricas
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(1000, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Entradas del sistema con OpenGL");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}

