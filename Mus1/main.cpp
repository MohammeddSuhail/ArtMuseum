#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include <windows.h>
#include <math.h>
#include <stdio.h>

#define PI 3.14159265359

using namespace std;

void introscreen();


void objectaxis(){                      // show the axes for the object
    glPushMatrix();                     //reference axis
        glColor3f(1.0,0.0,0.0); // red x
        glBegin(GL_LINES);
        glVertex3f(-4.0, 0.0f, 0.0f);
        glVertex3f(4.0, 0.0f, 0.0f);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glColor3f(0.0,1.0,0.0); // green y
        glBegin(GL_LINES);
        glVertex3f(0.0, -4.0f, 0.0f);
        glVertex3f(0.0, 4.0f, 0.0f);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glColor3f(0.0,0.0,1.0); // blue z
        glBegin(GL_LINES);
        glVertex3f(0.0, 0.0f ,-4.0f );
        glVertex3f(0.0, 0.0f ,4.0f );
        glEnd();
    glPopMatrix();
}


void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    introscreen();
    glFlush();
    glutPostRedisplay();

}

void init(){
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GLUT_SINGLE|GLUT_RGB);
    glLoadIdentity();
    glOrtho(-90.0,100.0,-15.0,100.0,0.0,1.0);
}


void renderbitmap(float x,float y,void *font,char *string){
    char *c;
    glRasterPos2f(x,y);
    for(c=string;*c!='\0';c++){
        glutBitmapCharacter(font,*c);
    }
}


void introscreen(){
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.5,0.6,1.0);
    char buf[100]={0};
    sprintf_s(buf,"ART MUSEUM");
    renderbitmap(-10,90,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    glColor3f(0.5,1.0,0.5);

    sprintf_s(buf,"MOHAMMED SUHAIL");
    renderbitmap(-40,70,GLUT_BITMAP_TIMES_ROMAN_24,buf);

    sprintf_s(buf,"4NM19CS112");
    renderbitmap(30,70,GLUT_BITMAP_TIMES_ROMAN_24,buf);

    sprintf_s(buf,"PARIKSHITH R NAYAK");
    renderbitmap(-40,63,GLUT_BITMAP_TIMES_ROMAN_24,buf);

    sprintf_s(buf,"4NM19CS126");
    renderbitmap(30,63,GLUT_BITMAP_TIMES_ROMAN_24,buf);

    glColor3f(1.0, 0.0, 0.0);
    sprintf_s(buf,"Under the Guidance of : ");
    renderbitmap(-30,45,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"Mr.Pradeep Kanchan");
    renderbitmap(-25,40,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"M.Tech(Ph.D)");
    renderbitmap(15,40,GLUT_BITMAP_HELVETICA_12,buf);
    sprintf_s(buf,"Assistant Professor Gd-III");
    renderbitmap(-25,35,GLUT_BITMAP_HELVETICA_18,buf);

    sprintf_s(buf,"Department of Computer Science");
    renderbitmap(-25,30,GLUT_BITMAP_HELVETICA_18,buf);

    sprintf_s(buf,"NMAMIT");
    renderbitmap(-25,25,GLUT_BITMAP_HELVETICA_18,buf);

    sprintf_s(buf,"Press Enter");
    renderbitmap(-25,15,GLUT_BITMAP_HELVETICA_18,buf);
}
void descdisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glColor3f(0,0,1.0);
    char buf[1000]={0};
    sprintf_s(buf,"ART MUSEUM");
    renderbitmap(-10,80,GLUT_BITMAP_HELVETICA_18,buf);
    glColor3f(0,1.0,0);
    sprintf_s(buf,"The word �museum� comes from the nine Muses, the classical Greek goddesses of inspiration. Museums reflected and helped shape that outlook.");
    renderbitmap(-65,60,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"An art museum dedicated to serving the intellectual, spiritual, and social demands of a diverse community is worlds away from the elite micro-");
    renderbitmap(-65,55,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"cosm of the early modern Wunderkammer. Yet, like its ancestors, it is a reflection of the world that produced it, and it tells us as much about the");
    renderbitmap(-65,50,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"history of its�and our�times as it does about the things it contains. The museum shows rich heritage of cultures of various civilization and habitations. ");
    renderbitmap(-65,45,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"It also shows struggles of freedom, fights for equality, and sustainability.");
    renderbitmap(-65,40,GLUT_BITMAP_HELVETICA_18,buf);

    glColor3f(1.0, 0.0, 0.0);
    sprintf_s(buf,"Press r");
    renderbitmap(0,0,GLUT_BITMAP_HELVETICA_18,buf);

    glutSwapBuffers();
}

void menuDisplay()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glClearColor(1.0,1.0,1.0,1.0);
    glMatrixMode(GLUT_SINGLE|GLUT_RGB);
   // glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
    //glColor3f(1.0,1.0,1.0);

    glColor3f(0,0,1.0);
    char buf[1000]={0};
    sprintf_s(buf,"Press");
    renderbitmap(0,80,GLUT_BITMAP_HELVETICA_18,buf);
    glColor3f(0,1.0,0);
    sprintf_s(buf,"1 => Famous Potraits and Paintings");
    renderbitmap(-65,60,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"2 => War Paintings");
    renderbitmap(-65,55,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"3 => 7 Wonders Of The World");
    renderbitmap(-65,50,GLUT_BITMAP_HELVETICA_18,buf);
    sprintf_s(buf,"4 => Landscape Paintings");
    renderbitmap(-65,45,GLUT_BITMAP_HELVETICA_18,buf);

    sprintf_s(buf,"Press \"space\" to return to this page");
    renderbitmap(-15,-5,GLUT_BITMAP_HELVETICA_18,buf);  //-16

    glutSwapBuffers();
}




//3d room

float camera_angle = 0;
float camera_x = 0;
float camera_y = 0;
float camera_height = 6;
float camera_rotate_speed = 0.003;
float camera_distance = 40;

float eye_x = 0;
float eye_y = 0;
float eye_z = 0;

float camera_x_angle = 0;
float camera_y_angle = 0;
float mouse_old_pos_x = 0;
float mouse_old_pos_y = 0;


GLboolean ambient = true;
GLboolean diffuse = true;
GLboolean specular = true;

GLuint texture[10];


GLfloat no_light[] = { 0.0, 0.0, 0.0, 1.0 };
GLfloat light_ambient[]  = {1.0, 1.0, 1.0, 1.0};
GLfloat light_diffuse[]  = { 1.0, 1.0, 1.0, 1.0 };
GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat light_position[] = { 2.0, 25.0, 3.0, 1.0 };

GLfloat table_leg_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat table_leg_ambient[] = {1.000, 0.388, 0.278, 1.0};
GLfloat table_leg_diffuse[] = {1.000, 0.388, 0.278, 1.0};
GLfloat table_leg_specular[] = {1.000, 0.388, 0.278, 1.0};
GLfloat table_leg_shiness[] = {15};

GLfloat table_top_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat table_top_ambient[] = {1.000, 0.388, 0.278, 1.0};
GLfloat table_top_diffuse[] = {1.000, 0.388, 0.278, 1.0};
GLfloat table_top_specular[] = {1.000, 0.388, 0.278, 1.0};
GLfloat table_top_shiness[] = {17};

GLfloat chair_leg_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat chair_leg_ambient[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_leg_diffuse[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_leg_specular[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_leg_shiness[] = {15};

GLfloat chair_seat_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat chair_seat_ambient[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_seat_diffuse[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_seat_specular[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_seat_shiness[] = {17};

GLfloat chair_top_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat chair_top_ambient[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_top_diffuse[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_top_specular[] = {1.000, 0.388, 0.278, 1.0};
GLfloat chair_top_shiness[] = {17};

GLfloat bed_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat bed_ambient[] = {0.859, 0.439, 0.576, 1.0};
GLfloat bed_diffuse[] = {0.8, 0.48, 0.6, 0.9};
GLfloat bed_specular[] = {0.86, 0.50, 0.60, 1.0};
GLfloat bed_shiness[] = {13};

GLfloat bed_head_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat bed_head_ambient[] = {0.545, 0.271, 0.075, 1.0};
GLfloat bed_head_diffuse[] = {0.58, 0.29, 0.06, 0.9};
GLfloat bed_head_specular[] = {0.545, 0.271, 0.075, 1.0};
GLfloat bed_head_shiness[] = {13};

GLfloat shelf_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat shelf_ambient[] = {1.000, 0.388, 0.278, 1.0};
GLfloat shelf_diffuse[] = {1.000, 0.388, 0.278, 0.9};
GLfloat shelf_specular[] = {1.000, 0.388, 0.278, 1.0};
GLfloat shelf_shiness[] = {13};


GLfloat wall_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat wall_ambient[] = {0.373, 0.620, 0.627, 1.0};
GLfloat wall_diffuse[] = {0.30, 0.6, 0.59, 0.9};
GLfloat wall_specular[] = {0.32,0.6, 0.61, 1.0};
GLfloat wall_shiness[] = {13};

GLfloat floor_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat floor_ambient[] = {0.184, 0.310, 0.310, 0.8};
GLfloat floor_diffuse[] = {0.19, 0.3, 0.33, 1.0};
GLfloat floor_specular[] = {0.184, 0.35, 0.35, 1.0};
GLfloat floor_shiness[] = {15};

GLfloat ceiling_no_mat[] = {0.0,0.0,0.0,1.0};
GLfloat ceiling_ambient[] = {0.373, 0.620, 0.627, 1.0};
GLfloat ceiling_diffuse[] = {0.35, 0.612, 0.65, 0.9};
GLfloat ceiling_specular[] = {0.4, 0.65, 0.647, 1.0};
GLfloat ceiling_shiness[] = {15};

void lighting(GLfloat no_mat[4],GLfloat mat_ambient[4],GLfloat mat_diffuse[4],GLfloat mat_specular[4],GLfloat shiness[1])
{
    if(ambient)
    {
        glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
    }
    else
    {
        glMaterialfv(GL_FRONT,GL_AMBIENT,no_mat);

    }
    if(diffuse)
    {
        glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
    }
    else
    {
        glMaterialfv(GL_FRONT,GL_DIFFUSE,no_mat);
    }
    if(specular)
    {
        glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);

    }
    else
    {
        glMaterialfv(GL_FRONT,GL_SPECULAR,no_mat);
    }
    glMaterialfv(GL_FRONT,GL_SHININESS,shiness);
}


struct Image
{
    unsigned long sizeX;
    unsigned long sizeY;
    char *data;
};


int ImageLoad(char *filename, Image *image)
{
    FILE *file;
    unsigned long size; //size of the image in bytes
    unsigned long i; //standard counter
    unsigned short int planes; //number of planes in Image(must be 1)
    unsigned short int bpp; //number of bits per pixel(must be 24)
    char temp; //temporary color storage for bgr-rgb conversion

    //make sure the file in here
    file = fopen(filename, "rb");
    if(file==NULL)
    {
        printf("Can't open file!");
    }

   //seek through the bmp header, up to width/height
    fseek(file,18,SEEK_CUR);

    //read the width
    i = fread(&image->sizeX,4,1,file);
    //read the height
    i = fread(&image->sizeY,4,1,file);
    //calculate the size (assuming 24 bits or 3 bytes per pixel)
    size = image->sizeX * image->sizeY * 3;
    //read the plane
    fread(&planes, 2, 1, file);
    //read the bits per pixel
    fseek(file, 24, SEEK_CUR);
    //read the data
    image->data = (char*)malloc(size);

    i=fread(image->data, size, 1, file);

    for(i=0;i<size;i+=3) //reverse all ol color bgr -> rgb
    {
        temp = image->data[i];
        image->data[i] = image->data[i+2];
        image->data[i+2] = temp;

    }

    fclose(file);
    //we're done
return 1;

}

void loadTexture(char* file_name, int tex_id)
{
    Image *image1;
    //allocate space for texture
    image1 = (Image*) malloc(sizeof(Image));
    //Image not loaded
    if(!ImageLoad(file_name,image1))
    {
        exit(1);
    }

    texture[tex_id] = tex_id;

    glBindTexture(GL_TEXTURE_2D,tex_id);

    glTexImage2D(GL_TEXTURE_2D,0,3,image1->sizeX,image1->sizeY,0,GL_RGB,GL_UNSIGNED_BYTE,image1->data);

    //scale linearly when image is bigger than texture
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    //scale linearly when image is smaller than texture

    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR);

}

void draw_solid_cube(GLfloat size)
{
    float x1,y1,z1;
    float x2,y2,z2;
    float x3,y3,z3;
    float x4,y4,z4;

    x1 = -size/2;
    y1 = -size/2;
    z1 = -size/2;

    x2 = size/2;
    y2 = -size/2;
    z2 = -size/2;

    x3 = size/2;
    y3 = -size/2;
    z3 = size/2;

    x4 = -size/2;
    y4 = -size/2;
    z4 = size/2;

    float x5,y5,z5;
    float x6,y6,z6;
    float x7,y7,z7;
    float x8,y8,z8;

    x5 = -size/2;
    y5 = size/2;
    z5 = -size/2;

    x6 = size/2;
    y6 = size/2;
    z6 = -size/2;

    x7 = size/2;
    y7 = size/2;
    z7 = size/2;

    x8 = -size/2;
    y8 = size/2;
    z8 = size/2;

    float n1_x = 0, n1_y = -1, n1_z = 0; //face that faces towards bottom
    float n2_x = 0, n2_y = 1, n2_z = 0; //up
    float n3_x = 0, n3_y = 0, n3_z = -1; //front
    float n4_x = 0, n4_y = 0, n4_z = 1; //back
    float n5_x = 1, n5_y = 0, n5_z = 0; //right
    float n6_x = -1, n6_y = 0, n6_z = 0; //left

    glBegin(GL_QUADS);
    //Quad 1

    glNormal3f(n1_x,n1_y,n1_z);

    glTexCoord2f(0,0);
    glVertex3f(x1,y1,z1);

    glTexCoord2f(1,0);
    glVertex3f(x2,y2,z2);

    glTexCoord2f(1,1);
    glVertex3f(x3,y3,z3);

    glTexCoord2f(0,1);
    glVertex3f(x4,y4,z4);

    //Quad 2

    glNormal3f(n2_x,n2_y,n2_z);

    glTexCoord2f(0,0);
    glVertex3f(x8,y8,z8);

    glTexCoord2f(1,0);
    glVertex3f(x7,y7,z7);

    glTexCoord2f(1,1);
    glVertex3f(x6,y6,z6);

    glTexCoord2f(0,1);
    glVertex3f(x5,y5,z5);
    //Quad 3

    glNormal3f(n3_x,n3_y,n3_z);

    glTexCoord2f(0,0);
    glVertex3f(x5,y5,z5);

    glTexCoord2f(1,0);
    glVertex3f(x6,y6,z6);

    glTexCoord2f(1,1);
    glVertex3f(x2,y2,z2);

    glTexCoord2f(0,1);
    glVertex3f(x1,y1,z1);
    //Quad 4


    glNormal3f(n4_x,n4_y,n4_z);

    glTexCoord2f(0,0);
    glVertex3f(x7,y7,z7);

    glTexCoord2f(1,0);
    glVertex3f(x8,y8,z8);

    glTexCoord2f(1,1);
    glVertex3f(x4,y4,z4);

    glTexCoord2f(0,1);
    glVertex3f(x3,y3,z3);
    //Quad 5

    glNormal3f(n5_x,n5_y,n5_z);

    glTexCoord2f(0,0);
    glVertex3f(x6,y6,z6);

    glTexCoord2f(1,0);
    glVertex3f(x7,y7,z7);

    glTexCoord2f(1,1);
    glVertex3f(x3,y3,z3);

    glTexCoord2f(0,1);
    glVertex3f(x2,y2,z2);

    //Quad 6

    glNormal3f(n6_x,n6_y,n6_z);

    glTexCoord2f(0,0);
    glVertex3f(x1,y1,z1);

    glTexCoord2f(1,0);
    glVertex3f(x4,y4,z4);

    glTexCoord2f(1,1);
    glVertex3f(x8,y8,z8);

    glTexCoord2f(0,1);
    glVertex3f(x5,y5,z5);


    glEnd();
}








void draw_shelf()
{
    lighting(shelf_no_mat,shelf_ambient,shelf_diffuse,shelf_specular,shelf_shiness);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[5]);
    glPushMatrix();
    //glTranslatef(15,0,-6);
    glTranslatef(0,0,0);
    glRotatef(90,0,0,1);
    glScalef(20,4,6);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}





void draw_painting(float x,float y,float z,float s1,float s2,float s3,int degree,int t)
{
    lighting(shelf_no_mat,shelf_ambient,shelf_diffuse,shelf_specular,shelf_shiness);
    //objectaxis();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[t]);
    glPushMatrix();
    glTranslatef(x,y,z);
    glScalef(s1,s2,s3);
    glRotatef(degree,0,1,0);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}




void draw_wall()
{
    //left
    lighting(wall_no_mat,wall_ambient,wall_diffuse,wall_specular,wall_shiness);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glPushMatrix();
    glTranslatef(0,10,-50);
    glScalef(100,60,0.2);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);


    //front
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glPushMatrix();
    glTranslatef(25,10,0);
    glScalef(0.2,60,100);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);


    //back
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glPushMatrix();
    glTranslatef(-50,10,0);
    glScalef(0.2,60,100);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);


    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glPushMatrix();
    glTranslatef(0,10,25);
    //glScalef(50,60,0.2);
    glScalef(1000,60,0.2);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}

void draw_floor()
{
    lighting(floor_no_mat,floor_ambient,floor_diffuse,floor_specular,floor_shiness);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[3]);
    glPushMatrix();
    glTranslatef(0,-20,0);
    glScalef(100,0.2,100);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}

void draw_ceiling()
{
    lighting(ceiling_no_mat,ceiling_ambient,ceiling_diffuse,ceiling_specular,ceiling_shiness);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture[2]);
    glPushMatrix();
    glTranslatef(0,45,0);
    glScalef(100,0.2,150);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

}



void initRendering()
{
    glEnable(GL_DEPTH_TEST);
}

void handleResize(int w, int h)
{
    glViewport(0,0,w,h);

}

void displayPaintings(void)
{


    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    initRendering();

    glClearColor(0,0,0,1);

    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);

    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glGenTextures(10,texture);



    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,1,5,100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(camera_x, camera_height, camera_y, camera_x + cos(camera_x_angle), camera_height, camera_y + sin(camera_y_angle), 0, 1, 0);
    //gluLookAt(eye_x,eye_y,eye_z,center_x,center_y,center_z,0,1,0);




    //C:\Users\djsuh\Desktop\mus_text
    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\wall.bmp", 1);
    draw_wall();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\ceiling.bmp", 2);
    draw_ceiling();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\floor.bmp", 3);
    draw_floor();




    //Paintings

    //front wall

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\mona_lisaa.bmp", 11);
    draw_painting(24.5,8,-15,0.1,38,14.5,0,11);
         //     back,top,right,like thickness,height,width,angle,texture_id
        //           location               size


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art3.bmp", 13);
    draw_painting(24.5,8,-34,0.1,20,8,0,13);

    //C:\Users\djsuh\Desktop\mus_text\1
    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art4.bmp", 14);
    draw_painting(24.5,8,7,0.1,20,8,0,14);



    //left wall

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art7.bmp", 17);
    draw_painting(-14,8,-49.5,13.5,28,0.1,90,17);
    //                      width,height,thickness


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art8.bmp", 8);
    draw_painting(-35,8,-49.5,8,20,0.1,90,8);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art9.bmp", 9);
    draw_painting(8,8,-49.5,8,20,0.1,90,9);



    //right wall ulta pic

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art6.bmp", 6);
    draw_painting(-14,8,24,13.5,28,0.1,0,6);
    //       back,top,right,width,height,thickness


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art2.bmp", 12);
    draw_painting(-35,8,24,8,20,0.1,0,12);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art10.bmp", 20);
    draw_painting(8,8,24,8,20,0.1,0,20);




    //lighting in scene

    glEnable(GL_LIGHT0);
    if(ambient)
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, no_light);

    }
    if(diffuse)
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, no_light);
    }
    if(specular)
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    }
    else
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, no_light);
    }

    glutSwapBuffers();

  //objectaxis();


}



void displayWarArt(void)
{


    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    initRendering();

    glClearColor(0,0,0,1);

    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);

    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glGenTextures(10,texture);



    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,1,5,100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(camera_x, camera_height, camera_y, camera_x + cos(camera_x_angle), camera_height, camera_y + sin(camera_y_angle), 0, 1, 0);
    //gluLookAt(eye_x,eye_y,eye_z,center_x,center_y,center_z,0,1,0);


    //C:\Users\djsuh\Desktop\mus_text
    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\wall.bmp", 1);
    draw_wall();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\ceiling.bmp", 2);
    draw_ceiling();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\floor.bmp", 3);
    draw_floor();


    //Paintings

    //front wall

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art5.bmp", 5);
    //draw_painting(24.5,8,-15,0.1,28,13.5,0,5);
    draw_painting(24.5,8,-15,0.1,28,25,0,5);
         //     back,top,right,like thickness,height,width,angle,texture_id
        //           location               size


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\war6.bmp", 36);
    draw_painting(24.5,8,-38,0.1,20,12,0,36);


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\war3.bmp", 33);
    draw_painting(24.5,8,10,0.1,20,12,0,33);



    //left wall uncomment


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\art6.bmp", 6);
    draw_painting(-14,8,-49.5,13.5,28,0.1,90,6);
    //                      width,height,thickness
    draw_painting(-14,8,-49.5,13.5,28,0.1,90,33);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\war5.bmp", 35);
    draw_painting(-35,8,-49.5,8,20,0.1,90,35);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\war7.bmp", 37);
    draw_painting(8,8,-49.5,8,20,0.1,90,37);



    //right wall ulta pic

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\war4.bmp", 34);
    draw_painting(-14,8,24,19,39,0.1,0,34);
    //       back,top,right,width,height,thickness


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\waar1.bmp", 38);
    draw_painting(-35,8,24,8,20,0.1,0,38);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\waar2.bmp", 39);
    draw_painting(8,8,24,12,20,0.1,0,39);



    //lighting in scene

    glEnable(GL_LIGHT0);
    if(ambient)
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, no_light);

    }
    if(diffuse)
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, no_light);
    }
    if(specular)
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    }
    else
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, no_light);
    }

    glutSwapBuffers();

  //objectaxis();


}




void displayWonder(void)
{


    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    initRendering();

    glClearColor(0,0,0,1);

    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);

    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glGenTextures(10,texture);



    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,1,5,100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(camera_x, camera_height, camera_y, camera_x + cos(camera_x_angle), camera_height, camera_y + sin(camera_y_angle), 0, 1, 0);
    //gluLookAt(eye_x,eye_y,eye_z,center_x,center_y,center_z,0,1,0);



    //C:\Users\djsuh\Desktop\mus_text
    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\wall.bmp", 1);
    draw_wall();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\ceiling.bmp", 2);
    draw_ceiling();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\floor.bmp", 3);
    draw_floor();


    //Paintings

    //front wall

    //C:\Users\djsuh\Desktop\mus_text\7 Wonders of the world         C:\Users\djsuh\Downloads\imgs\7 Wonders of the world
    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\7 Wonders of the world\\won1.bmp", 41);
    draw_painting(24.5,8,-15,0.1,28,30,0,41);
         //     back,top,right,like thickness,height,width,angle,texture_id
        //           location               size


    loadTexture("C:\\Users\\djsuh\\Downloads\\imgs\\7 Wonders of the world\\won2.bmp", 42);
    draw_painting(24.5,8,-38,0.1,20,12,0,42);


    loadTexture("C:\\Users\\djsuh\\Downloads\\imgs\\7 Wonders of the world\\won3.bmp", 43);
    draw_painting(24.5,8,10,0.1,20,12,0,43);



    //left wall uncomment


    loadTexture("C:\\Users\\djsuh\\Downloads\\imgs\\7 Wonders of the world\\won4.bmp", 44);
    draw_painting(-14,8,-49.5,13.5,28,0.1,90,44);
    //                      width,height,thickness
    //draw_painting(-14,8,-49.5,13.5,28,0.1,90,33);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\7 Wonders of the world\\won5.bmp", 45);
    draw_painting(-35,8,-49.5,8,20,0.1,90,45);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\7 Wonders of the world\\won6.bmp", 46);
    draw_painting(8,8,-49.5,8,20,0.1,90,46);



    //right wall ulta pic

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\7 Wonders of the world\\won7.bmp", 47);
    draw_painting(-14,8,24,19,39,0.1,0,47);
    //       back,top,right,width,height,thickness




    //lighting in scene

    glEnable(GL_LIGHT0);
    if(ambient)
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, no_light);

    }
    if(diffuse)
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, no_light);
    }
    if(specular)
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    }
    else
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, no_light);
    }

    glutSwapBuffers();

  //objectaxis();


}


void displayLand(void)
{


    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    initRendering();

    glClearColor(0,0,0,1);

    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);

    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glGenTextures(10,texture);



    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,1,5,100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    gluLookAt(camera_x, camera_height, camera_y, camera_x + cos(camera_x_angle), camera_height, camera_y + sin(camera_y_angle), 0, 1, 0);
    //gluLookAt(eye_x,eye_y,eye_z,center_x,center_y,center_z,0,1,0);



    //C:\Users\djsuh\Desktop\mus_text
    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\wall.bmp", 1);
    draw_wall();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\ceiling.bmp", 2);
    draw_ceiling();

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\floor.bmp", 3);
    draw_floor();




    //Paintings

    //front wall

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan7.bmp", 51);
    draw_painting(24.5,8,-15,0.1,38,16,0,51);
         //     back,top,right,like thickness,height,width,angle,texture_id
        //           location               size


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan8.bmp", 52);
    draw_painting(24.5,8,-34,0.1,20,8,0,52);

    //C:\Users\djsuh\Desktop\mus_text\1
    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan9.bmp", 53);
    draw_painting(24.5,8,7,0.1,16,8,0,53);



    //left wall

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan4.bmp", 54);
    draw_painting(-14,8,-49.5,13.5,28,0.1,90,54);
    //                      width,height,thickness


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan5.bmp", 55);
    draw_painting(-35,8,-49.5,8,20,0.1,90,55);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan6.bmp", 56);
    draw_painting(8,8,-49.5,8,20,0.1,90,56);



    //right wall ulta pic

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan1.bmp", 57);
    draw_painting(-14,8,24,13.5,28,0.1,0,57);
    //       back,top,right,width,height,thickness


    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan2.bmp", 58);
    draw_painting(-35,8,24,8,20,0.1,0,58);

    loadTexture("C:\\Users\\djsuh\\Desktop\\mus_text\\Landscape Paintings\\lan3.bmp", 59);
    draw_painting(8,8,24,8,20,0.1,0,59);




    //lighting in scene

    glEnable(GL_LIGHT0);
    if(ambient)
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_AMBIENT, no_light);

    }
    if(diffuse)
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    }
    else
    {
        glLightfv(GL_LIGHT0, GL_DIFFUSE, no_light);
    }
    if(specular)
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);

    }
    else
    {
        glLightfv(GL_LIGHT0, GL_SPECULAR, no_light);
    }

    glutSwapBuffers();

  //objectaxis();


}





static void idle(void)
{
    glutPostRedisplay();
}



void handleKeyPressed(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 27:
        //exit(0);
        glutDisplayFunc(display);
        glutPostRedisplay();
        break;
    case 'a':
    case 'A':
        camera_y = camera_y - 0.5;
        //center_z = center_z - 0.5;
        break;
    case 's':
    case 'S':
        camera_y = camera_y + 0.5;
        //center_z = center_z + 0.5;
        break;
    case 'w':
    case 'W':
        camera_x = camera_x + 0.5;
        //center_x = center_x + 0.5;
        break;
    case 'z':
    case 'Z':
        camera_x = camera_x - 0.5;
        //center_x = center_x - 0.5;
        break;
    case 'h':
    case 'H':
        camera_x_angle+=.15;
        camera_y_angle+=.15;
        break;
    case 'k':
    case 'K':
        break;
    case 'g':
    case 'G':
        camera_x_angle-=.15;
        camera_y_angle-=.15;
        break;
    case 'j':
    case 'J':
        break;
    /*
    case '1':
        ambient=!ambient;
        break;
    case '2':
        diffuse=!diffuse;
        break;
    case '3':
        specular=!specular;
        break;
    */
    case 13:
        glutDisplayFunc(descdisplay);
        glutPostRedisplay();
        break;
    case 8:
        glutDisplayFunc(display);
        glutPostRedisplay();
        break;
    case 'r':
        glutDisplayFunc(menuDisplay);
        glutPostRedisplay();
        break;
    case 49:
        glutDisplayFunc(displayPaintings);
        glutPostRedisplay();
        break;
    case 50:
        glutDisplayFunc(displayWarArt);
        glutPostRedisplay();
        break;
    case 51:
        glutDisplayFunc(displayWonder);
        glutPostRedisplay();
        break;
    case '4':
        glutDisplayFunc(displayLand);
        glutPostRedisplay();
        break;
    case 'b':
    case 'B':
        glutDisplayFunc(menuDisplay);
        glutPostRedisplay();
        break;
    case 32:
        glutDisplayFunc(menuDisplay);
        glutPostRedisplay();
        break;

    }
}


int main(int argc,char ** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowSize(1000,800);
    glutInitWindowPosition(100,100);
    glutCreateWindow("project");

    glutDisplayFunc(display);

    glutKeyboardFunc(handleKeyPressed);
    glutReshapeFunc(handleResize);
    glutIdleFunc(idle);

    init();

    glutMainLoop();
    return 0;
}
