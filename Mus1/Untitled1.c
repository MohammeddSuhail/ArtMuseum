#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include<string>


void output(const char *text,int length,int x,int y,void *font){
    glMatrixMode(GL_PROJECTION);
    double *matrix = new double[16];
    glGetDoublev(GL_PROJECTION_MATRIX,matrix);
    glLoadIdentity();
    glOrtho(0,600,0,600,-5,5);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2f(x,y);
    for(int i=0;i<length;i++){
        glutBitmapCharacter(font,(int)text[i]);
    }
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glLoadMatrixd(matrix);
    glMatrixMode(GL_MODELVIEW);
}

void init()
{
    glClearColor(0,0.4,0,0);
}

void display(){
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

gluLookAt(0,0,-10,0,0,3,0,1,0);
glColor3f(1,1,0);

std::string t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11;
t1= "ZOO SIMULATION";
output(t1.data(), t1.size(), 250,450,GLUT_BITMAP_TIMES_ROMAN_24);
glColor4f(1,1.0,1.0,0);
t2= "4NM19CS148";
output(t2.data(), t2.size(), 210,370,GLUT_BITMAP_HELVETICA_18);
t3= "4NM19CS150";
output(t3.data(), t3.size(), 350,370,GLUT_BITMAP_HELVETICA_18);
t4= "RAJENDRA PRABHU";
output(t4.data(), t4.size(), 210,340,GLUT_BITMAP_HELVETICA_18);
t5= "RAKSHITH";
output(t5.data(), t5.size(), 350,340,GLUT_BITMAP_HELVETICA_18);
glColor3f(1,1,0);
t6= "UNDER THE GUIDANCE OF : " ;
output(t6.data(), t6.size(), 250,250,GLUT_BITMAP_HELVETICA_18);
glColor3f(1,1,1);
t7 = "MR. PRADEEP KANCHAN ";
output(t7.data(), t7.size(), 250,200,GLUT_BITMAP_HELVETICA_18);
t8 = "ASSISTANT PROFESSOR GD III  ";
output(t8.data(), t8.size(), 250,175,GLUT_BITMAP_HELVETICA_18);
t9 = "COMPUTER SCIENCE DEPARTMENT ";
output(t9.data(), t9.size(), 250,150,GLUT_BITMAP_HELVETICA_18);
t10 = "NMAMIT,NITTE ";
output(t10.data(), t10.size(), 250,125,GLUT_BITMAP_HELVETICA_18);
t11= "Press 'Enter' To go to the next page";
output(t11.data(), t11.size(), 270,100,GLUT_BITMAP_HELVETICA_12);


glutSwapBuffers();
}
void display2(){
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

gluLookAt(0,0,-10,0,0,3,0,1,0);
glColor3f(1,1,0);

std::string t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11;
t1= "INTRODUCTION";
output(t1.data(), t1.size(), 250,450,GLUT_BITMAP_TIMES_ROMAN_24);
glColor4f(1.0,1.0,1.0,0);
t2="This is a Computer Graphics project named as ZOO SIMULATION. Zoo is a facility in which animals are housed within enclosures and displayed to the public.";
t3="Domestic animals can be seen in our surroundings but we cannot see wild animals here and there and also it will be difficult to go to jungle to see them.";
t4="Therefore we can visit zoos to see different kinds of animals Roaming around in a small area. ";
t5="In this project, we are going to give a zoo experience virtually by using graphics by simualting some animals.";
t6="The animals we are going to simulate are:";
t7="1. Wild Animals";
t8="2. Domestic Animals";
t9="3. Birds";
t10="4. Aquatic Animals";
output(t2.data(), t2.size(), 50,370,GLUT_BITMAP_HELVETICA_18);
output(t3.data(), t3.size(), 50,350,GLUT_BITMAP_HELVETICA_18);
output(t4.data(), t4.size(), 50,330,GLUT_BITMAP_HELVETICA_18);
output(t5.data(), t5.size(), 50,310,GLUT_BITMAP_HELVETICA_18);
output(t6.data(), t6.size(), 50,290,GLUT_BITMAP_HELVETICA_18);
output(t7.data(), t7.size(), 50,270,GLUT_BITMAP_HELVETICA_18);
output(t8.data(), t8.size(), 50,250,GLUT_BITMAP_HELVETICA_18);
output(t9.data(), t9.size(), 50,230,GLUT_BITMAP_HELVETICA_18);
output(t10.data(), t10.size(), 50,210,GLUT_BITMAP_HELVETICA_18);
output(t11.data(), t11.size(), 50,190,GLUT_BITMAP_HELVETICA_18);

glutSwapBuffers();
}
void display3() {
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
       glColor3f(0.0f, 0.0f, 0.0f);
       glRectf(-1.0f,-0.5f, 1.0f, -1.0f);
       glColor3f(1.0f, 1.0f, 1.0f);
       glRectf(-1.0f,-0.80f, -0.6f, -0.75f);
       glColor3f(1.0f, 1.0f, 1.0f);
       glRectf(-0.5f,-0.80f, 0.1f, -0.75f);
       glColor3f(1.0f, 1.0f, 1.0f);
       glRectf(0.2f,-0.80f, 0.8f, -0.75f);
       glColor3f(1.0f, 1.0f, 0.0f);
       glRectf(-0.25f,-0.5f, -0.2f, 0.3f);
       glColor3f(1.0f, 1.0f, 0.0f);
       glRectf(0.25f,-0.5f, 0.2f, 0.3f);
       glColor3f(1.0f, 1.0f, 0.0f);
       glRectf(-0.3f,0.3f, 0.3f, 0.45f);
       std::string t12;
       glColor3f(0.0f, 0.0f, 0.0f);
       t12="RAKSHITH  ZOO";
       output(t12.data(), t12.size(), 265,405,GLUT_BITMAP_TIMES_ROMAN_24);
       glutSwapBuffers();
}

void mykey(unsigned char key,int x, int y)
{
  if(key == 13)
    {
        glutDisplayFunc(display2);
    }

    if(key== 8)
    {
        glutDisplayFunc(display);
    }
    if(key==68)
    {
        glutDisplayFunc(display3);
    }
    glutPostRedisplay();

}



int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
glutInitWindowSize(600,700);
glutCreateWindow("ZOO SIMULATION");
glutDisplayFunc(display);
init();
glutKeyboardFunc(mykey);

glutMainLoop();
return 0;
}
