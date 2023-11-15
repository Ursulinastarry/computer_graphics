#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw a colored triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);  // Red
    glVertex2f(0.0, 0.5);
    glColor3f(0.0, 1.0, 0.0);  // Green
    glVertex2f(-0.5, -0.5);
    glColor3f(0.0, 0.0, 1.0);  // Blue
    glVertex2f(0.5, -0.5);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Colored Triangle");

    glutDisplayFunc(display);

    glClearColor(1.0, 1.0, 1.0, 0.0);  // Set the background color to white

    glutMainLoop();

    return 0;
}
