#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<time.h>
#define PI 3.1416

int state;
float shift=0.0,down=0.0,rome=0.0,up=0.0,x=0.0, downToDustbin=0.0,left=0.0,garbageInDustbin=0.0,childToUncle=0.0,childUp=0.0;

void lady();
void ladyChild();
void car();
void boy();
void boy2();
void boy3();
void garbage();

float theta;


GLfloat ya = 50,xa = 10;
int xFlage = 1, yFlage = 1, aniFlage = 1;




void welcomeDisplay()  /////////////  FIRST PAGE   ///////////////
{
    glClearColor(1.0,0.5,0.6,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glRasterPos3f(-370.0,450.0,0);
    char msg1[] = "COMPUTER GRAPHICS AND VISUALISATION MINI PROJECT";
    for(int i=0;i<strlen(msg1);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

        glRasterPos3f(-40.0,350.0,0);
    char msg2[] = "( 18CSL67 )";
    for(int i=0;i<strlen(msg2);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg2[i]);

            glRasterPos3f(-80.0,250.0,0);
    char msg3[] = "CLEAN INDIA";
    for(int i=0;i<strlen(msg3);i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg3[i]);

        glColor3f(0.0,0.0,0.0);
         glRasterPos3f(-850.0,100.0,0);
    char message4[] = "BY -";
    for(int k=0;k<strlen(message4);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message4[k]);
    }

       glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-850.0,50.0,0);
    char message5[] = "KAVITA CHAUDHARY";
    for(int k=0;k<strlen(message5);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message5[k]);
    }

        glRasterPos3f(-800.0,0.0,0);
    char message6[] = "1KS18CS029";
    for(int k=0;k<strlen(message6);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message6[k]);
    }

        glColor3f(0.0,0.0,0.0);
    glRasterPos3f(550.0,100.0,0);
    char message7[] = "GUIDED BY - ";
    for(int k=0;k<strlen(message7);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message7[k]);
    }

     glColor3f(1.0,1.0,1.0);
    glRasterPos3f(550.0,50.0,0);
    char message8[] = "DR. DAYANANDA R B";
    for(int k=0;k<strlen(message8);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message8[k]);
    }

       glColor3f(0.0,0.0,0.0);
    glRasterPos3f(0.0,-100.0,0);
    char message9[] = "Description:";
    for(int k=0;k<strlen(message9);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message9[k]);
    }

      glRasterPos3f(-530.0,-150.0,0);
    char message10[] = "THIS PROJECT WILL PROMOTE CLEAN AWARENESS CAMPAING IN OUR SOCIETY";
    for(int k=0;k<strlen(message10);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message10[k]);
    }

        glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-30.0,-300.0,0);
    char message12[] = "INSTRUCTION:";
    for(int k=0;k<strlen(message12);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message12[k]);
    }

        glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-280.0,-350.0,0);
    char message13[] = "1. PRESS 'SPACEBAR' TO CHECK THE INSTRUCTIONS";
    for(int k=0;k<strlen(message13);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message13[k]);
    }


    glutPostRedisplay();
    glutSwapBuffers();
}

void instruction()  /////////////// INSRUCTION PAGE  ////////////
{
     glClearColor(1.0,0.5,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

            glColor3f(0.0,0.0,0.0);
    glRasterPos3f(-100.0,500.0,0);
    char message0[] = "INSTRUCTIONS:";
    for(int k=0;k<strlen(message0);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message0[k]);
    }

        glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,430.0,0);
    char message1[] = "1. PRESS 's' TO START THE PROJECT";
    for(int k=0;k<strlen(message1);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message1[k]);
    }

         glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,380.0,0);
    char message2[] = "2. PRESS 'b' TO MOVE THE BOY";
    for(int k=0;k<strlen(message2);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message2[k]);
    }

             glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,330.0,0);
    char message3[] = "3. PRESS 'W' TO THROW THE GARBAGE";
    for(int k=0;k<strlen(message3);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message3[k]);
    }

             glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,280.0,0);
    char message4[] = "4. PRESS '0' TO 1st CONVERSATION OF CHILD";
    for(int k=0;k<strlen(message4);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message4[k]);
    }

                 glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,230.0,0);
    char message5[] = "5. PRESS '1' TO 2nd CONVERSATION OF CHILD'S MOTHER";
    for(int k=0;k<strlen(message5);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message5[k]);
    }

                 glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,180.0,0);
    char message6[] = "6. PRESS '2' TO 3rd CONVERSATION OF CHILD";
    for(int k=0;k<strlen(message6);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message6[k]);
    }

                 glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,130.0,0);
    char message7[] = "7. PRESS '3' TO 4th CONVERSATION OF CHILD'S MOTHER";
    for(int k=0;k<strlen(message7);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message7[k]);
    }

                 glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,80.0,0);
    char message8[] = "8. PRESS '4' TO DISSEMBLE THE CONVERSATION";
    for(int k=0;k<strlen(message8);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message8[k]);
    }

                 glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,30.0,0);
    char message9[] = "9. PRESS '5' TO MOVE THE CHILD TO UNCLE";
    for(int k=0;k<strlen(message9);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message9[k]);
    }

                     glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,-20.0,0);
    char message10[] = "10. PRESS '6' TO PICK THE GARBAGE";
    for(int k=0;k<strlen(message10);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message10[k]);
    }

                     glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,-70.0,0);
    char message11[] = "11. PRESS '7' TO MOVE THE CHILD TO DUSTBIN";
    for(int k=0;k<strlen(message11);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message11[k]);
    }

                     glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,-120.0,0);
    char message12[] = "12. PRESS '8' TO THROW THE GARBAGE IN THE DUSTBIN";
    for(int k=0;k<strlen(message12);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message12[k]);
    }

                     glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,-170.0,0);
    char message13[] = "13. PRESS '9' TO MOVE THE CHILD AGAIN TO UNCLE";
    for(int k=0;k<strlen(message13);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message13[k]);
    }

                       glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,-220.0,0);
    char message14[] = "14. PRESS 'O' TO DISPLAY CHILD CONVERSATION TO UNCLE";
    for(int k=0;k<strlen(message14);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message14[k]);
    }

                       glColor3f(1.0,1.0,1.0);
    glRasterPos3f(-300.0,-270.0,0);
    char message15[] = "13. PRESS 'P' TO DISPLAY UNCLE CONVERSATION TO CHILD";
    for(int k=0;k<strlen(message15);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message15[k]);
    }

    glutSwapBuffers();
}

void display(void)
{

    glColor3f(0.0,0.79,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(960.0,540.0);
    glVertex2f(960.0,-540.0);
    glVertex2f(-960.0,-540.0);
    glVertex2f(-960.0,540.0);
    glEnd();


/////////////////////////////////////////////////////////////ROAD PART/////////////////////////////////////////////////////////////////////////////////

   glBegin(GL_POLYGON);
   glColor3ub(61, 60, 60);
   glVertex2f(300, 100);
   glVertex2f(350, 540);
   glVertex2f(610, 540);
   glVertex2f(660, 100);
   glVertex2f(960, 100);
   glVertex2f(960, -100);
   glVertex2f(680, -100);
   glVertex2f(730, -540);
   glVertex2f(220, -540);
   glVertex2f(350, -100);
   glVertex2f(-960, -100);
   glVertex2f(-960, 100);
   glVertex2f(300, 100);
   glEnd();

   glBegin(GL_POLYGON);  //1st RIGHT
  glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-870, 5);
   glVertex2f(-940, 5);
   glVertex2f(-940, -5);
   glVertex2f(-870, -5);
   glEnd();

   glBegin(GL_POLYGON);     //2nd RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-750, 5);
   glVertex2f(-820, 5);
   glVertex2f(-820, -5);
   glVertex2f(-750, -5);
   glEnd();

   glBegin(GL_POLYGON);      //3rd RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-630, 5);
   glVertex2f(-700, 5);
   glVertex2f(-700, -5);
   glVertex2f(-630, -5);
   glEnd();

   glBegin(GL_POLYGON);      //4th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-510, 5);
   glVertex2f(-580, 5);
   glVertex2f(-580, -5);
   glVertex2f(-510, -5);
   glEnd();

   glBegin(GL_POLYGON);       //5th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-390, 5);
   glVertex2f(-460, 5);
   glVertex2f(-460, -5);
   glVertex2f(-390, -5);
   glEnd();

   glBegin(GL_POLYGON);       //6th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-270, 5);
   glVertex2f(-340, 5);
   glVertex2f(-340, -5);
   glVertex2f(-270, -5);
   glEnd();

   glBegin(GL_POLYGON);        //7th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-150, 5);
   glVertex2f(-220, 5);
   glVertex2f(-220, -5);
   glVertex2f(-150, -5);
   glEnd();

   glBegin(GL_POLYGON);        //8th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(-30, 5);
   glVertex2f(-100, 5);
   glVertex2f(-100, -5);
   glVertex2f(-30, -5);
   glEnd();

   glBegin(GL_POLYGON);        //9th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(20, 5);
   glVertex2f(20, -5);
   glVertex2f(90, -5);
   glVertex2f(90, 5);
   glEnd();

   glBegin(GL_POLYGON);        //10th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(140, 5);
   glVertex2f(140, -5);
   glVertex2f(210, -5);
   glVertex2f(210, 5);
   glEnd();

   glBegin(GL_POLYGON);        //11th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(260, 5);
   glVertex2f(260, -5);
   glVertex2f(330, -5);
   glVertex2f(330, 5);
   glEnd();

   glBegin(GL_POLYGON);        //12th RIGHT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(380, 5);
   glVertex2f(380, -5);
   glVertex2f(450, -5);
   glVertex2f(450, 5);
   glEnd();

   glBegin(GL_POLYGON);       //13th TOP
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, 20);
   glVertex2f(500, 20);
   glVertex2f(500, 65);
   glVertex2f(490, 65);
   glEnd();

   glBegin(GL_POLYGON);       //14th TOP
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, 95);
   glVertex2f(500, 95);
   glVertex2f(500, 140);
   glVertex2f(490, 140);
   glEnd();

   glBegin(GL_POLYGON);        //15th TOP
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, 170);
   glVertex2f(500, 170);
   glVertex2f(500, 215);
   glVertex2f(490, 215);
   glEnd();

   glBegin(GL_POLYGON);        //16th TOP
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, 245);
   glVertex2f(500, 245);
   glVertex2f(500, 290);
   glVertex2f(490, 290);
   glEnd();

   glBegin(GL_POLYGON);        //17th TOP
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, 320);
   glVertex2f(500, 320);
   glVertex2f(500, 365);
   glVertex2f(490, 365);
   glEnd();

   glBegin(GL_POLYGON);          //18th TOP
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, 395);
   glVertex2f(500, 395);
   glVertex2f(500, 440);
   glVertex2f(490, 440);
   glEnd();

   glBegin(GL_POLYGON);          //19th top
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, 470);
   glVertex2f(500, 470);
   glVertex2f(500, 515);
   glVertex2f(490, 515);
   glEnd();

   glBegin(GL_POLYGON);          //20th BOTTOM
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, -20);
   glVertex2f(500, -20);
   glVertex2f(500, -65);
   glVertex2f(490, -65);
   glEnd();

   glBegin(GL_POLYGON);          //21th BOTTOM
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, -95);
   glVertex2f(500, -95);
   glVertex2f(500, -140);
   glVertex2f(490, -140);
   glEnd();

   glBegin(GL_POLYGON);          //22th BOTTOM
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, -170);
   glVertex2f(500, -170);
   glVertex2f(500, -215);
   glVertex2f(490, -215);
   glEnd();

   glBegin(GL_POLYGON);          //23th BOTTOM
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, -245);
   glVertex2f(500, -245);
   glVertex2f(500, -290);
   glVertex2f(490, -290);
   glEnd();

   glBegin(GL_POLYGON);          //24th BOTTOM
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, -320);
   glVertex2f(500, -320);
   glVertex2f(500, -365);
   glVertex2f(490, -365);
   glEnd();

   glBegin(GL_POLYGON);          //25th BOTTOM
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, -395);
   glVertex2f(500, -395);
   glVertex2f(500, -440);
   glVertex2f(490, -440);
   glEnd();

   glBegin(GL_POLYGON);          //26th BOTTOM
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(490, -470);
   glVertex2f(500, -470);
   glVertex2f(500, -515);
   glVertex2f(490, -515);
   glEnd();

   glBegin(GL_POLYGON);        //27th LEFT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(540, 5);
   glVertex2f(540, -5);
   glVertex2f(610, -5);
   glVertex2f(610, 5);
   glEnd();

   glBegin(GL_POLYGON);        //28th LEFT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(660, 5);
   glVertex2f(660, -5);
   glVertex2f(730, -5);
   glVertex2f(730, 5);
   glEnd();

   glBegin(GL_POLYGON);        //29th LEFT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(780, 5);
   glVertex2f(780, -5);
   glVertex2f(850, -5);
   glVertex2f(850, 5);
   glEnd();

   glBegin(GL_POLYGON);        //30th LEFT
   glColor3f(1.0, 0.87, 0.0);
   glVertex2f(900, 5);
   glVertex2f(900, -5);
   glVertex2f(970, -5);
   glVertex2f(970, 5);
   glEnd();

//////////////////////////////////////////////////////////////////////LIGHTS///////////////////////////////////////////////////////////////////////////

   glBegin(GL_QUADS);  //1st light (lower rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(220, -130);
   glVertex2f(220, -350);
   glVertex2f(200, -350);
   glVertex2f(200, -130);
   glEnd();

   glBegin(GL_QUADS);    //1st light (upper rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(290, -130);
   glVertex2f(290, -120);
   glVertex2f(120, -120);
   glVertex2f(120, -130);
   glEnd();

////////////////////////////////////////////////////////////// 1st bulb /////////////////////////////////////////////////////////////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(275, -130);
   glVertex2f(275, -145);
   glVertex2f(270, -145);
   glVertex2f(270, -130);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(295, -145);
   glVertex2f(295, -150);
   glVertex2f(250, -150);
   glVertex2f(250, -145);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(290, -150);
   glVertex2f(290, -180);
   glVertex2f(257, -180);
   glVertex2f(257, -150);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(295, -180);
   glVertex2f(295, -185);
   glVertex2f(250, -185);
   glVertex2f(250, -180);
   glEnd();

///////////////////////////////////////////////////////////////////////////////////// 2nd bulb //////////////////////////////////////////////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(135, -130);
   glVertex2f(135, -145);
   glVertex2f(140, -145);
   glVertex2f(140, -130);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(160, -145);
   glVertex2f(160, -150);
   glVertex2f(115, -150);
   glVertex2f(115, -145);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(154, -150);
   glVertex2f(154, -180);
   glVertex2f(121, -180);
   glVertex2f(121, -150);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(160, -180);
   glVertex2f(160, -185);
   glVertex2f(115, -185);
   glVertex2f(115, -180);
   glEnd();

//////////////////////////////////////////////////////////////////////////// 2nd tower of light ///////////////////////////////////////////////////////////////////////////

   glBegin(GL_QUADS);  //2nd light (lower rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(730, -130);
   glVertex2f(730, -350);
   glVertex2f(750, -350);
   glVertex2f(750, -130);
   glEnd();

   glBegin(GL_QUADS);    //2nd light (upper rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(660, -130);
   glVertex2f(660, -120);
   glVertex2f(820, -120);
   glVertex2f(820, -130);
   glEnd();

                            //////////////////////////// 1st bulb ///////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(800, -130);
   glVertex2f(800, -145);
   glVertex2f(805, -145);
   glVertex2f(805, -130);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(780, -145);
   glVertex2f(780, -150);
   glVertex2f(825, -150);
   glVertex2f(825, -145);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(787, -150);
   glVertex2f(787, -180);
   glVertex2f(820, -180);
   glVertex2f(820, -150);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(780, -180);
   glVertex2f(780, -185);
   glVertex2f(825, -185);
   glVertex2f(825, -180);
   glEnd();

                               //////////////////////// 2nd bulb ///////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(675, -130);
   glVertex2f(675, -145);
   glVertex2f(680, -145);
   glVertex2f(680, -130);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(700, -145);
   glVertex2f(700, -150);
   glVertex2f(655, -150);
   glVertex2f(655, -145);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(693, -150);
   glVertex2f(693, -180);
   glVertex2f(661, -180);
   glVertex2f(661, -150);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(700, -180);
   glVertex2f(700, -185);
   glVertex2f(655, -185);
   glVertex2f(655, -180);
   glEnd();

////////////////////////////////////////////////////////////////////// 3rd tower of light //////////////////////////////////////////////////////////////////////////////////

   glBegin(GL_QUADS);  //3rd light (lower rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(250, 125);
   glVertex2f(270, 125);
   glVertex2f(270, 325);
   glVertex2f(250, 325);
   glEnd();

   glBegin(GL_QUADS);    //3rd light (upper rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(175, 325);
   glVertex2f(340, 325);
   glVertex2f(340, 335);
   glVertex2f(175, 335);
   glEnd();

                            //////////////////////////// 1st bulb ///////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(195, 325);
   glVertex2f(190, 325);
   glVertex2f(190, 310);
   glVertex2f(195, 310);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(215, 310);
   glVertex2f(215, 305);
   glVertex2f(170, 305);
   glVertex2f(170, 310);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(175, 305);
   glVertex2f(175, 275);
   glVertex2f(210, 275);
   glVertex2f(210, 305);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(215, 275);
   glVertex2f(215, 270);
   glVertex2f(170, 270);
   glVertex2f(170, 275);
   glEnd();

                               //////////////////////// 2nd bulb ///////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(325, 325);
   glVertex2f(325, 310);
   glVertex2f(320, 310);
   glVertex2f(320, 325);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(300, 310);
   glVertex2f(300, 305);
   glVertex2f(345, 305);
   glVertex2f(345, 310);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(305, 305);
   glVertex2f(305, 275);
   glVertex2f(340, 275);
   glVertex2f(340, 305);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(300, 275);
   glVertex2f(300, 270);
   glVertex2f(345, 270);
   glVertex2f(345, 275);
   glEnd();

///////////////////////////////////////////////////////////////  4th tower of light  ////////////////////////////////////////////////////////////////////////////////////////

   glBegin(GL_QUADS);  //4th light (lower rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(690, 125);
   glVertex2f(710, 125);
   glVertex2f(710, 325);
   glVertex2f(690, 325);
   glEnd();

   glBegin(GL_QUADS);    //4th light (upper rectangle) tower
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(620, 325);
   glVertex2f(785, 325);
   glVertex2f(785, 335);
   glVertex2f(620, 335);
   glEnd();

                            //////////////////////////// 1st bulb ///////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(636, 325);
   glVertex2f(636, 310);
   glVertex2f(641, 310);
   glVertex2f(641, 325);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(618, 310);
   glVertex2f(618, 305);
   glVertex2f(659, 305);
   glVertex2f(659, 310);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(623, 305);
   glVertex2f(623, 275);
   glVertex2f(654, 275);
   glVertex2f(654, 305);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(618, 275);
   glVertex2f(618, 270);
   glVertex2f(659, 270);
   glVertex2f(659, 275);
   glEnd();

                               //////////////////////// 2nd bulb ///////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(769, 325);
   glVertex2f(769, 310);
   glVertex2f(764, 310);
   glVertex2f(764, 325);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(745, 310);
   glVertex2f(745, 305);
   glVertex2f(787, 305);
   glVertex2f(787, 310);
   glEnd();

   glBegin(GL_POLYGON);     //bulb
   glColor3f(1.0, 1.0, 1.0);
   glVertex2f(751, 305);
   glVertex2f(751, 275);
   glVertex2f(782, 275);
   glVertex2f(782, 305);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.68, 0.85, 0.90);
   glVertex2f(745, 275);
   glVertex2f(745, 270);
   glVertex2f(787, 270);
   glVertex2f(787, 275);
   glEnd();

////////////////////////////////////////////////////////////////////////////////////Red Swing of the park ////////////////////////////////////////////////////////////////

   glBegin(GL_QUADS);
   glColor3f(1.0, 0.0, 0.0);

   glVertex2f(-910, 400);
   glVertex2f(-900, 400);
   glVertex2f(-900, 520);
   glVertex2f(-910, 520);

   glVertex2f(-650, 400);
   glVertex2f(-640, 400);
   glVertex2f(-640, 520);
   glVertex2f(-650, 520);

   glVertex2f(-900, 510);
   glVertex2f(-650, 510);
   glVertex2f(-650, 505);
   glVertex2f(-900, 505);

   glVertex2f(-865, 510);
   glVertex2f(-865, 440);
   glVertex2f(-860, 440);
   glVertex2f(-860, 510);

   glVertex2f(-685, 510);
   glVertex2f(-685, 440);
   glVertex2f(-680, 440);
   glVertex2f(-680, 510);

   glVertex2f(-865, 440);
   glVertex2f(-680, 440);
   glVertex2f(-665, 420);
   glVertex2f(-880, 420);

   glColor4f(1.0, 0.75, 0.25, 1.0);
   glVertex2f(-880, 420);
   glVertex2f(-665, 420);
   glVertex2f(-665, 415);
   glVertex2f(-880, 415);
   glEnd();

////////////////////////////////////////////////////////////////////////////////////// TRIANGLE TREE OF SWING SIDE/////////////////////////////////////////////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.59, 0.29, 0.0);
   glVertex2f(80, 125);
   glVertex2f(50, 125);
   glVertex2f(50, 220);
   glVertex2f(80, 230);
   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3f(0.19, 0.93, 0.19);
   glVertex2f(130, 254);
   glVertex2f(10, 199);
   glVertex2f(10, 305);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.19, 0.93, 0.19);
   glVertex2f(20, 300);
   glVertex2f(20, 325);
   glVertex2f(129, 275);
   glVertex2f(80, 240);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.19, 0.93, 0.19);
   glVertex2f(30, 320);
   glVertex2f(30, 345);
   glVertex2f(125, 295);
   glVertex2f(92, 275);
   glEnd();

///////////////////////////////////////////////////////////////////////////// SLIDER OF BROWN COLOR /////////////////////////////////////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0.59, 0.29, 0.0);
   glVertex2f(150, 410);
   glVertex2f(250, 410);
   glVertex2f(180, 515);
   glVertex2f(80, 515);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.59, 0.29, 0.0);
   glVertex2f(80, 515);
   glVertex2f(-10, 410);
   glVertex2f(-2, 410);
   glVertex2f(85, 510);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.59, 0.29, 0.0);
   glVertex2f(120, 490);
   glVertex2f(60, 410);
   glVertex2f(68, 410);
   glVertex2f(125, 484);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.59, 0.29, 0.0);
   glVertex2f(103, 485);
   glVertex2f(103, 480);
   glVertex2f(52, 480);
   glVertex2f(52, 485);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.59, 0.29, 0.0);
   glVertex2f(97, 460);
   glVertex2f(97, 455);
   glVertex2f(34, 455);
   glVertex2f(34, 460);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.59, 0.29, 0.0);
   glVertex2f(81, 433);
   glVertex2f(81, 428);
   glVertex2f(11, 428);
   glVertex2f(11, 433);
   glEnd();

//////////////////////////////////////////////// bench of blue color  /////////////////////////////////////////////////////////////////////////////////

   glBegin(GL_POLYGON);
   glColor3f(0, 0, 255);
   glVertex2f(-250, 400);
   glVertex2f(-450, 400);
   glVertex2f(-500, 350);
   glVertex2f(-200, 350);
   glEnd();

   glBegin(GL_POLYGON);
   glColor4f(1.0, 0.75, 0.25, 1.0);
   glVertex2f(-500, 350);
   glVertex2f(-200, 350);
   glVertex2f(-200, 345);
   glVertex2f(-500, 345);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0, 0, 255);
   glVertex2f(-450, 345);
   glVertex2f(-435, 345);
   glVertex2f(-435, 320);
   glVertex2f(-450, 320);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0, 0, 255);
   glVertex2f(-250, 345);
   glVertex2f(-265, 345);
   glVertex2f(-265, 320);
   glVertex2f(-250, 320);
   glEnd();

   ladyChild();   ////////////////////// void lady() function call  ///////////////////////////////////////////
   boy2();
   boy();
   boy3();
   lady();
   garbage();

   //talk1();
   //talk2();
   //talk6();

/////////////////////////////////////////////////////////////////////DUSTBIN OF THE PARK //////////////////////////////////////////////////////////////////

  glBegin(GL_POLYGON); // dustbin upper circle ///
  glColor3f(0.12, 0.56, 1.0);
  for(int i=0; i<360; i++)
  {
    theta=i*3.142/180;
    glVertex2f(-810+70*cos(theta),-150+15*sin(theta));
  }
  glEnd();

   glBegin(GL_POLYGON);  // side pin to attach dustbin //
   glColor3f(0.69, 0.77, 0.87);
   glVertex2f(-747, -165);
   glVertex2f(-730, -165);
   glVertex2f(-730, -170);
   glVertex2f(-747, -170);

   glVertex2f(-725, -165);
   glVertex2f(-720, -165);
   glVertex2f(-720, -170);
   glVertex2f(-725, -170);
   glEnd();

   glBegin(GL_POLYGON);  // side pin to attach dustbin //
   glColor3f(0.69, 0.77, 0.87);
   glVertex2f(-870, -165);
   glVertex2f(-890, -165);
   glVertex2f(-890, -170);
   glVertex2f(-870, -170);

   glVertex2f(-895, -165);
   glVertex2f(-900, -165);
   glVertex2f(-900, -170);
   glVertex2f(-895, -170);
   glEnd();

   glBegin(GL_POLYGON);  // container of dustbin //
   glColor3f(0.12, 0.56, 1.0);
   glVertex2f(-870, -250);
   glVertex2f(-870, -155);
   glVertex2f(-747, -155);
   glVertex2f(-747, -250);
   glEnd();

   glBegin(GL_POLYGON); // dustbin lower circle ///
   glColor3f(0.12, 0.56, 1.0);
   for(int i=0; i<360; i++)
   {
     theta=i*3.142/180;
     glVertex2f(-810+70*cos(theta),-250+15*sin(theta));
   }
   glEnd();

   glBegin(GL_POLYGON);  // middle stand //
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-890, -290);
   glVertex2f(-730, -290);
   glVertex2f(-730, -285);
   glVertex2f(-890, -285);
   glEnd();

   glBegin(GL_POLYGON);  // side stand //
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-895, -310);
   glVertex2f(-895, -130);
   glVertex2f(-890, -130);
   glVertex2f(-890, -310);
   glEnd();

   glBegin(GL_POLYGON); // lower circle stand //
   glColor3f(0.0, 0.0, 0.0);
   for(int i=0; i<360; i++)
   {
     theta=i*3.142/180;
     glVertex2f(-890+10*cos(theta),-310+05*sin(theta));
   }
   glEnd();

   glBegin(GL_POLYGON);  // side stand //
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-730, -310);
   glVertex2f(-730, -130);
   glVertex2f(-725, -130);
   glVertex2f(-725, -310);
   glEnd();


   glBegin(GL_POLYGON); // lower circle stand //
   glColor3f(0.0, 0.0, 0.0);
   for(int i=0; i<360; i++)
   {
     theta=i*3.142/180;
     glVertex2f(-728+10*cos(theta),-310+05*sin(theta));
   }
   glEnd();


/*glBegin(GL_POLYGON);
glColor3f(0.59, 0.29, 0.0);
glVertex2f(-913, -165);
glVertex2f(-913, -250);
glVertex2f(-787, -250);
glVertex2f(-787, -165);

glEnd();*/

   glColor3f(1.0, 1.0, 1.0);
   glRasterPos2f(-855, -210);
   char msg[] = "USE ME";
   for(int i=0;i<strlen(msg);i++)
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, msg[i]);

   /////////////////////////////////////////////////////////// DUSTBIN 2 /////////////////////////////////////////////////////////////

   glBegin(GL_POLYGON);  //side stand//
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-600, -310);
   glVertex2f(-600, -130);
   glVertex2f(-595, -130);
   glVertex2f(-595, -310);
   glVertex2f(-600, -310);
   glEnd();

   glBegin(GL_POLYGON); // lower circle stand //
   glColor3f(0.0, 0.0, 0.0);
   for(int i=0; i<360; i++)
   {
     theta=i*3.142/180;
     glVertex2f(-598+10*cos(theta),-310+05*sin(theta));
   }
   glEnd();

   glBegin(GL_POLYGON);   //// middle stand
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-595, -285);
   glVertex2f(-435, -285);
   glVertex2f(-435, -290);
     glVertex2f(-595, -290);
     glVertex2f(-595, -285);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3f(0.0, 0.0, 0.0);
   glVertex2f(-435, -310);
   glVertex2f(-435, -130);
     glVertex2f(-430, -130);
     glVertex2f(-430, -310);
     glVertex2f(-435, -310);
   glEnd();


   glBegin(GL_POLYGON); // lower circle stand //
   glColor3f(0.0, 0.0, 0.0);
   for(int i=0; i<360; i++)
   {
     theta=i*3.142/180;
     glVertex2f(-433+10*cos(theta),-310+05*sin(theta));
   }
   glEnd();


     glBegin(GL_POLYGON); // dustbin upper circle ///
  glColor3f(0.12, 0.56, 1.0);
  for(int i=0; i<360; i++)
  {
    theta=i*3.142/180;
    glVertex2f(-514+70*cos(theta),-150+15*sin(theta));
  }
  glEnd();

  glBegin(GL_POLYGON);  // container of dustbin //
   glColor3f(0.12, 0.56, 1.0);
   glVertex2f(-576, -250);
   glVertex2f(-576, -155);
   glVertex2f(-453, -155);
   glVertex2f(-453, -250);
   glEnd();

     glBegin(GL_POLYGON); // dustbin lower circle ///
   glColor3f(0.12, 0.56, 1.0);
   for(int i=0; i<360; i++)
   {
     theta=i*3.142/180;
     glVertex2f(-514+70*cos(theta),-250+15*sin(theta));
   }
   glEnd();


   glBegin(GL_POLYGON);  // side pin 1 to attach dustbin //
   glColor3f(0.69, 0.77, 0.87);
   glVertex2f(-453, -165);
   glVertex2f(-435, -165);
   glVertex2f(-435, -170);
   glVertex2f(-453, -170);
   glEnd();

   glBegin(GL_POLYGON);   // side pin 1
   glColor3f(0.69, 0.77, 0.87);
   glVertex2f(-430, -165);
   glVertex2f(-425, -165);
   glVertex2f(-425, -170);
   glVertex2f(-430, -170);
   glEnd();

    glBegin(GL_POLYGON);  // side pin 2 to attach dustbin //
   glColor3f(0.69, 0.77, 0.87);
   glVertex2f(-576, -165);
   glVertex2f(-594, -165);
   glVertex2f(-594, -170);
   glVertex2f(-576, -170);
   glEnd();

   glBegin(GL_POLYGON);   // side pin 2
   glColor3f(0.69, 0.77, 0.87);
   glVertex2f(-600, -165);
   glVertex2f(-606, -165);
   glVertex2f(-606, -170);
   glVertex2f(-600, -170);
   glEnd();


      glColor3f(1.0, 1.0, 1.0);
   glRasterPos2f(-555, -210);
   char msg1[] = "USE ME";
   for(int i=0;i<strlen(msg);i++)
   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, msg1[i]);





glutSwapBuffers();
   //glFlush();
}

////////////////////////////////////         total end of display function               //////////////////////////////////////////////////////////////

void Animate()
{
    if(aniFlage==1)
    {
        if (ya > -50 && yFlage == 1)
            ya = ya - 0.02;
        if (ya <= -50 && yFlage == 1)
            yFlage = 0;
        if (ya < 50 && yFlage == 0)
            ya = ya + 0.02;
        if (ya >= 50 && yFlage == 0)
            yFlage = 1;

        if (xa > -10 && xFlage == 1)
            xa = xa - 0.02;
        if (xa <= -10 && xFlage == 1)
            xFlage = 0;
        if (xa < 10 && xFlage == 0)
            xa = xa + 0.02;
        if (xa >= 10 && xFlage == 0)
            xFlage = 1;
    }
    glutPostRedisplay();
}


void flag()
{

   GLfloat x[4], y1[4], y2[4], y3[4], y4[4], t;
    GLdouble xt[200], yt1[200], yt2[200], yt3[200], yt4[200];
    int i;


    x[0] = 10; x[1] = 60; x[2] = 100; x[3] = 200 - xa;
    y1[0] = 50; y1[1] = 50 + ya; y1[2] = 50 - ya; y1[3] = 50;
    y2[0] = 0; y2[1] = 0 + ya; y2[2] = 0 - ya; y2[3] = 0;
    y3[0] = -50; y3[1] = -50 + ya; y3[2] = -50 - ya; y3[3] = -50;
    y4[0] = -100; y4[1] = -100 + ya; y4[2] = -100 - ya; y4[3] = -100;

    for (i= 0, t = 0; t <= 1; i++, t=t+0.01)
    {
        xt[i] = pow(1 - t, 3) * x[0] + 3 * t * pow(1 - t, 2) * x[1] + 3 * pow(t, 2) * (1 - t) * x[2] + pow(t, 3) * x[3];
        yt1[i] = pow(1 - t, 3) * y1[0] + 3 * t * pow(1 - t, 2) * y1[1] + 3 * pow(t, 2) * (1 - t) * y1[2] + pow(t, 3) * y1[3];
        yt2[i] = pow(1 - t, 3) * y2[0] + 3 * t * pow(1 - t, 2) * y2[1] + 3 * pow(t, 2) * (1 - t) * y2[2] + pow(t, 3) * y2[3];
        yt3[i] = pow(1 - t, 3) * y3[0] + 3 * t * pow(1 - t, 2) * y3[1] + 3 * pow(t, 2) * (1 - t) * y3[2] + pow(t, 3) * y3[3];
        yt4[i] = pow(1 - t, 3) * y4[0] + 3 * t * pow(1 - t, 2) * y4[1] + 3 * pow(t, 2) * (1 - t) * y4[2] + pow(t, 3) * y4[3];
    }
    glColor3f(1, 0, 0);
    glBegin(GL_QUAD_STRIP);
        for (i = 0; i < 100; i++)
        {
            glVertex2d(xt[i], yt1[i]);
            glVertex2d(xt[i], yt2[i]);
        }
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_QUAD_STRIP);
    for (i = 0; i < 100; i++)
    {
        glVertex2d(xt[i], yt2[i]);
        glVertex2d(xt[i], yt3[i]);
    }
    glEnd();

    glColor3f(0, 1, 0);
    glBegin(GL_QUAD_STRIP);
    for (i = 0; i < 100; i++)
    {
        glVertex2d(xt[i], yt3[i]);
        glVertex2d(xt[i], yt4[i]);
    }
    glEnd();

    glColor3f(0.8, 0.8, 0.8);
    glRecti(20, -350, 10, 50);

}

void boy2()
{
    glBegin(GL_POLYGON);  // SHIRT
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-735, 430);
    glVertex2f(-735, 460);
    glVertex2f(-775, 460);
    glVertex2f(-775, 430);
    glVertex2f(-735, 430);
    glEnd();

    glBegin(GL_POLYGON);  // hand 1
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-735, 459);
    glVertex2f(-720, 451);
    glVertex2f(-723, 438);
    glVertex2f(-735, 447);
    glEnd();

    glBegin(GL_POLYGON);  // hand 1 other
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-720, 449);
    glVertex2f(-708, 435);
    glVertex2f(-708, 415);
    glVertex2f(-715, 415);
    glVertex2f(-715, 430);
    glVertex2f(-723, 441);
    glEnd();

    glBegin(GL_POLYGON);  // hand 2
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-775, 459);
    glVertex2f(-790, 451);
    glVertex2f(-787, 438);
    glVertex2f(-775, 447);
    glEnd();

    glBegin(GL_POLYGON);  // hand 2 other
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-790, 449);
    glVertex2f(-802, 435);
    glVertex2f(-802, 415);
    glVertex2f(-795, 415);
    glVertex2f(-795, 430);
    glVertex2f(-787, 441);
    glEnd();

     glBegin(GL_POLYGON);  // SHIRT lower
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-735, 430);
    glVertex2f(-735, 425);
    glVertex2f(-775, 425);
    glVertex2f(-775, 430);
    glVertex2f(-735, 430);
    glEnd();

    glBegin(GL_POLYGON);  // pant
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-737, 425);
    glVertex2f(-737, 415);
    glVertex2f(-737, 400);
    glVertex2f(-752, 400);
    glVertex2f(-755, 424);
    glVertex2f(-759, 400);
    glVertex2f(-773, 400);
    glVertex2f(-773, 425);
    glEnd();

    glBegin(GL_POLYGON); // leg 1
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-740, 400);
    glVertex2f(-740, 390);
    glVertex2f(-748, 390);
    glVertex2f(-748, 400);
    glEnd();

     glBegin(GL_POLYGON); // leg 2
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-763, 400);
    glVertex2f(-763, 390);
    glVertex2f(-771, 390);
    glVertex2f(-771, 400);
    glEnd();

    glBegin(GL_POLYGON); //shoe 1
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-740, 390);
    glVertex2f(-733, 383);
    glVertex2f(-749, 383);
    glVertex2f(-749, 390);
    glVertex2f(-740, 390);
    glEnd();

    glBegin(GL_POLYGON); //shoe 2
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-771, 390);
    glVertex2f(-778, 383);
    glVertex2f(-763, 383);
    glVertex2f(-763, 390);
    glVertex2f(-771, 390);
    glEnd();


    glBegin(GL_POLYGON);  //neck
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-750, 460);
    glVertex2f(-750, 465);
    glVertex2f(-760, 465);
    glVertex2f(-760, 460);
    glVertex2f(-750, 460);
    glEnd();

    glBegin(GL_POLYGON); // face
glColor3f(1.0, 0.84, 0.68);
for(int i=0; i<360; i++)
{
    theta=i*3.142/180;
    glVertex2f(-755+19*cos(theta),480+19*sin(theta));
}
glEnd();

glPointSize(2.5);
  glBegin(GL_POINTS);   ////////// eye balls
  glColor3f(0.0, 0.0, 0.0);
  glVertex2f(-746, 481);
  glVertex2f(-765, 481);
  glEnd();


glBegin(GL_LINES);  //nose
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-755, 478);
glVertex2f(-755, 471);

glVertex2f(-749, 468); // lip
glVertex2f(-762, 468);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-772, 489);
glVertex2f(-739, 489);
glVertex2f(-745, 499);
glVertex2f(-766, 499);
glVertex2f(-772, 489);
glEnd();

}

/////////////////////////////////////////////////// boy ///////////////////////////////////////////////////////////////////////////////////////////////

void boy(void)
{
    flag();

  glBegin(GL_POLYGON);    ///////////////// top part ///////////////////////////
  glColor3f(1.0, 0.0, 0.0);
  glVertex2f(150+shift, 210);
  glVertex2f(170+shift, 210);
  glVertex2f(178+shift, 140);
  glVertex2f(135+shift, 140);
  glVertex2f(150+shift, 210);
  glEnd();


  glBegin(GL_POLYGON);  ////////////////// trouser of boy //////////////////////
  glColor3f(0.0, 0.0, 1.0);
  glVertex2f(170+shift, 140);
  glVertex2f(173+shift, 90);
  glVertex2f(145+shift, 90);
  glVertex2f(152+shift, 140);
  glEnd();

  glBegin(GL_POLYGON);  ///////// shoes   //////////////////////////
  glColor3f(0.68, 0.85, 0.90);
  glVertex2f(165+shift, 90);
  glVertex2f(165+shift, 70);
  glVertex2f(140+shift, 70);
  glVertex2f(147+shift, 78);
  glVertex2f(156+shift, 78);
  glVertex2f(156+shift, 90);
  glEnd();

  glBegin(GL_POLYGON);      ////////// neck  ///////////////
  glColor3f(1.0, 0.84, 0.68);
  glVertex2f(155+shift, 210);
  glVertex2f(166+shift, 210);
  glVertex2f(166+shift, 216);
  glVertex2f(155+shift, 216);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(1.0, 0.84, 0.68);
  glVertex2f(166+shift, 216);
  glVertex2f(176+shift, 220);
  glVertex2f(176+shift, 250);
  glVertex2f(146+shift, 250);
  glVertex2f(146+shift, 240);
  glVertex2f(140+shift, 235);
  glVertex2f(146+shift, 231);
  glVertex2f(146+shift, 226);
  glVertex2f(155+shift, 226);
  glVertex2f(146+shift, 224);
  glVertex2f(146+shift, 224);
  glVertex2f(145+shift, 220);
  glVertex2f(155+shift, 216);/////////////2nd slant line from neck////////////
  glVertex2f(145+shift, 220);
  glEnd();

  glBegin(GL_POLYGON);  /////////////////hairs////////
  glColor3f(0.0, 0.0, 0.0);
  glVertex2f(153+shift, 250);
  glVertex2f(165+shift, 242);
  glVertex2f(173+shift, 217);
  glVertex2f(173+shift, 217);
  glVertex2f(176+shift, 220);
  glVertex2f(176+shift, 250);
  glEnd();

  glPointSize(2.5);
  glBegin(GL_POINTS);   ////////// eye balls
  glColor3f(0.0, 0.0, 0.0);
  glVertex2f(152+shift, 241);
  glEnd();

  glBegin(GL_POLYGON);  /////////////// sleeves ////////////////
  glColor3f(1.0, 0.0, 0.0);
  glVertex2f(160+shift, 205);
  glVertex2f(135+shift, 185);
  glVertex2f(160+shift, 186);
  glVertex2f(170+shift, 196);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(1.0, 0.84, 0.68);  ////////////// hand //////////////
  glVertex2f(143+shift, 184);
  glVertex2f(130+shift, 165);
  glVertex2f(141+shift, 165);
  glVertex2f(153+shift, 185);
  glEnd();

  glBegin(GL_POLYGON);    /////////// hand palm /////////////
  glColor3f(1.0, 0.84, 0.68);
  glVertex2f(130+shift, 165);
  glVertex2f(123+shift, 158);
  glVertex2f(130+shift, 158);
  glVertex2f(133+shift, 162);
  glVertex2f(133+shift, 152);
  glVertex2f(139+shift, 152);
  glVertex2f(141+shift, 165);
  glEnd();


}

////////////////////////////////////////////////////// another boy //////////////////////////////////////////////////////////////////

void boy3()
{
    glBegin(GL_POLYGON);  //shirt
    glColor3f(0.4, 0.3, 0.5);
    glVertex2f(-130, -280);
    glVertex2f(-190, -280);
    glVertex2f(-190, -220);
    glVertex2f(-130, -220);
    glVertex2f(-130, -280);
    glEnd();

    glBegin(GL_POLYGON);  //neck
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-153, -220);
    glVertex2f(-167, -220);
    glVertex2f(-167, -215);
    glVertex2f(-153, -215);
    glVertex2f(-153, -220);
    glEnd();

        glBegin(GL_POLYGON); // face
    glColor3f(1.0, 0.84, 0.68);
    for(int i=0; i<360; i++)
    {
      theta=i*3.142/180;
      glVertex2f(-161+23*cos(theta),-195+23*sin(theta));
    }
    glEnd();

    glPointSize(2.5);
    glBegin(GL_POINTS);   ////////// eye balls
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-148, -197);
    glVertex2f(-174, -197);

     glVertex2f(-160, -228);  // buttons of shirt
     glVertex2f(-160, -236);
     glVertex2f(-160, -246);
     glVertex2f(-160, -256);
     glVertex2f(-160, -266);
     glVertex2f(-160, -276);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-161, -198); // nose
    glVertex2f(-161, -208);

    glVertex2f(-170, -211);  // lips
    glVertex2f(-151, -211);
    glEnd();

    glBegin(GL_POLYGON);  //hairs
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-183, -187);
    glVertex2f(-139, -187);
    glVertex2f(-150, -171);
    glVertex2f(-172, -171);
    glVertex2f(-183, -187);
    glEnd();

    glBegin(GL_POLYGON);  //shirt down
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-130, -280);
    glVertex2f(-190, -280);
    glVertex2f(-190, -285);
    glVertex2f(-130, -285);
    glVertex2f(-130, -280);
    glEnd();

    glBegin(GL_POLYGON); // sleeve 1
    glColor3f(0.4, 0.3, 0.5);
    glVertex2f(-130, -220);
    glVertex2f(-110, -230);
    glVertex2f(-118, -242);
    glVertex2f(-130, -235);
    glEnd();

    glBegin(GL_POLYGON); // hand 1 upper arm
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-111, -231);
    glVertex2f(-83, -255);
    glVertex2f(-103, -255);
    glVertex2f(-119, -240);
    glEnd();

    glBegin(GL_POLYGON); // hand1 palm area
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-103, -255);
    glVertex2f(-83, -255);
    glVertex2f(-130, -280);
    glVertex2f(-130, -270);
    glVertex2f(-103, -255);
    glEnd();

    glBegin(GL_POLYGON); // sleeve 2
    glColor3f(0.4, 0.3, 0.5);
    glVertex2f(-190, -220);
    glVertex2f(-210, -230);
    glVertex2f(-202, -242);
    glVertex2f(-190, -235);
    glEnd();

    glBegin(GL_POLYGON); // hand 2 upper arm
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-202, -240);
    glVertex2f(-224, -260);
    glVertex2f(-240, -259);
    glVertex2f(-210, -232);
    glEnd();

    glBegin(GL_POLYGON); // hand 2 palm area
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-224, -259);
    glVertex2f(-188, -269);
    glVertex2f(-188, -278);
    glVertex2f(-243, -260);
    glVertex2f(-224, -260);
    glEnd();

    glBegin(GL_POLYGON);  // TROUSER
    glColor3f(0.9, 0.5, 0.5);
    glVertex2f(-132, -285);
    glVertex2f(-134, -335);
    glVertex2f(-152, -335);
    glVertex2f(-170, -285);
    glVertex2f(-166, -335);
    glVertex2f(-183, -335);
    glVertex2f(-187, -285);
    glEnd();

    glBegin(GL_POLYGON);  // shoe 1
    glColor3f(0.4, 0.1, 0.0);
    glVertex2f(-134, -335);
    glVertex2f(-126, -348);
    glVertex2f(-152, -348);
    glVertex2f(-152, -335);
    glVertex2f(-134, -335);
    glEnd();

    glBegin(GL_POLYGON);  // shoe 2
    glColor3f(0.4, 0.1, 0.0);
    glVertex2f(-183, -335);
    glVertex2f(-191, -348);
    glVertex2f(-166, -348);
    glVertex2f(-166, -335);
    glVertex2f(-183, -335);
    glEnd();
}
//////////////////////////////////////////////////  garbage  //////////////////////////////////////////////////////////////////////////

void garbage()
{

  glBegin(GL_POLYGON);
  glColor3f(0.0, 0.0, 0.0);
  glVertex2f(132+shift+x+left, 156+down+up+downToDustbin+garbageInDustbin);
  glVertex2f(132+shift+x+left, 148+down+up+downToDustbin+garbageInDustbin);
  glVertex2f(135+shift+x+left, 148+down+up+downToDustbin+garbageInDustbin);
  glVertex2f(135+shift+x+left, 156+down+up+downToDustbin+garbageInDustbin);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3f(1.0, 0.68, 0.80);
  glVertex2f(127+shift+x+left, 148+down+up+downToDustbin+garbageInDustbin);
  glVertex2f(140+shift+x+left, 148+down+up+downToDustbin+garbageInDustbin);
  glVertex2f(144+shift+x+left, 125+down+up+downToDustbin+garbageInDustbin);
  glVertex2f(120+shift+x+left, 125+down+up+downToDustbin+garbageInDustbin);
  glVertex2f(127+shift+x+left, 148+down+up+downToDustbin+garbageInDustbin);
  glEnd();
}

////////////////////////////////////////////  lady  ///////////////////////////////////////////////////////////////////////////////////////////////////

void lady()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);   /////// top //////
    glVertex2f(-400, 365);
    glVertex2f(-400, 315);
    glVertex2f(-450, 315);
    glVertex2f(-450, 365);
     glVertex2f(-400, 365);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);  /////////// sleeves of left hand //////////////
    glVertex2f(-400, 365);
    glVertex2f(-395, 380);
    glVertex2f(-382, 370);
    glVertex2f(-388, 356);
    glVertex2f(-399, 365);
    glEnd();

    glBegin(GL_POLYGON);         ///////// hand ///////////////////
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-382, 368);
    glVertex2f(-368, 349);
    glVertex2f(-368, 330);
    glVertex2f(-376, 330);
    glVertex2f(-376, 347);
    glVertex2f(-388, 360);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0);   ///////// sleeves of right hand //////////////
    glVertex2f(-448, 365);
    glVertex2f(-452, 378);
    glVertex2f(-467, 368);
    glVertex2f(-462, 355);
    glVertex2f(-463, 354);
    glEnd();

    glBegin(GL_POLYGON);         ///////// hand ///////////////////
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-467, 367);
    glVertex2f(-481, 348);
    glVertex2f(-481, 330);
    glVertex2f(-473, 330);
    glVertex2f(-473, 330);
    glVertex2f(-473, 347);
    glVertex2f(-462, 358);
    glEnd();

      glBegin(GL_POLYGON); // hairs of lady
glColor3f(0.0, 0.0, 0.0);
for(int i=0; i<360; i++)
{
    theta=i*3.142/180;
    glVertex2f(-423+29*cos(theta),411.5+39*sin(theta));
}
glEnd();

    glBegin(GL_POLYGON);      ///////// neck part ////////////////
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-394, 380);
     glVertex2f(-453, 380);
     glVertex2f(-448, 365);
     glVertex2f(-400, 365);
      glVertex2f(-395, 380);
    glEnd();

    glBegin(GL_POLYGON);    ///////// actual neck ///////////////
    glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-418, 380);
     glVertex2f(-418, 387);
     glVertex2f(-426, 387);
     glVertex2f(-426, 380);
    glEnd();

    glBegin(GL_POLYGON); // face of lady
glColor3f(1.0, 0.84, 0.68);
for(int i=0; i<360; i++)
{
    theta=i*3.142/180;
    glVertex2f(-423+21*cos(theta),406+23*sin(theta));
}
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-419, 417); ///////// eyebrows /////////
glVertex2f(-408, 412);

glVertex2f(-429, 417); ///////// eyebrows /////////
glVertex2f(-440, 412);

glVertex2f(-424, 410);  //////// nose ////////////
glVertex2f(-424, 399);

glVertex2f(-433, 395);  /////// lips /////////////
glVertex2f(-415, 395);

glVertex2f(-418.5, 395);
glVertex2f(-423, 390);

glVertex2f(-430, 395);
glVertex2f(-423, 390);
glEnd();

glPointSize(2.5);
glBegin(GL_POINTS);   ////////// eye balls
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-415, 408);
glVertex2f(-434, 408);
glEnd();

glBegin(GL_POLYGON);     ////////// brown belt ////////////
glColor3f(0.59, 0.29, 0.0);
glVertex2f(-400, 315);
glVertex2f(-400, 308);
glVertex2f(-450, 308);
glVertex2f(-450, 315);
glEnd();

glBegin(GL_POLYGON);     ////////  skirt //////////////////
glColor3f(0.0, 0.0, 1.0);
glVertex2f(-400, 308);
glVertex2f(-380, 270);
glVertex2f(-470, 270);
glVertex2f(-449, 308);
glVertex2f(-400, 308);
glEnd();

glBegin(GL_POLYGON);    ////////// leg ///////////////////
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-400, 270);
glVertex2f(-400, 250);
glVertex2f(-410, 250);
glVertex2f(-410, 270);
glEnd();

glBegin(GL_POLYGON);   ///////// leg ////////////////////
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-438, 270);
glVertex2f(-438, 250);
glVertex2f(-448, 250);
glVertex2f(-448, 271);
glEnd();

glBegin(GL_POLYGON);   ////// shoe ///////////////////
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-400, 250);
glVertex2f(-390, 240);
glVertex2f(-410, 240);
glVertex2f(-410, 250);
glEnd();

glBegin(GL_POLYGON);    ////////// shoe ////////////
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-448, 250);
glVertex2f(-458, 240);
glVertex2f(-438, 240);
glVertex2f(-438, 250);
glEnd();
}

/////////////////////////////////////////////    lady's child /////////////////////////////////////////////////////////////////////////////////////////

void ladyChild()
{
glBegin(GL_POLYGON);     //////// top of blue color //////////////
glColor3f(0.36, 0.55, 0.74);
glVertex2f(-270+left+childUp, 350+rome+downToDustbin+childToUncle);
glVertex2f(-270+left+childUp, 305+rome+downToDustbin+childToUncle);
glVertex2f(-330+left+childUp, 305+rome+downToDustbin+childToUncle);
glVertex2f(-330+left+childUp, 350+rome+downToDustbin+childToUncle);
glVertex2f(-335+left+childUp, 335+rome+downToDustbin+childToUncle);
glVertex2f(-340+left+childUp, 350+rome+downToDustbin+childToUncle);
glVertex2f(-315+left+childUp, 360+rome+downToDustbin+childToUncle);
glVertex2f(-325+left+childUp, 360+rome+downToDustbin+childToUncle);
glVertex2f(-290+left+childUp, 360+rome+downToDustbin+childToUncle);
glVertex2f(-285+left+childUp, 360+rome+downToDustbin+childToUncle);
glVertex2f(-265+left+childUp, 350+rome+downToDustbin+childToUncle);
glVertex2f(-265+left+childUp, 336+rome+downToDustbin+childToUncle);
glVertex2f(-270+left+childUp, 338+rome+downToDustbin+childToUncle);
glEnd();

////////neck
glBegin(GL_POLYGON);
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-285+left+childUp, 360+rome+downToDustbin+childToUncle);
glVertex2f(-295+left+childUp, 364+rome+downToDustbin+childToUncle);
glVertex2f(-305+left+childUp, 364+rome+downToDustbin+childToUncle);
glVertex2f(-315+left+childUp, 360+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-295+left+childUp, 363+rome+downToDustbin+childToUncle);
glVertex2f(-295+left+childUp, 365+rome+downToDustbin+childToUncle);
glVertex2f(-305+left+childUp, 365+rome+downToDustbin+childToUncle);
glVertex2f(-305+left+childUp, 363+rome+downToDustbin+childToUncle);
glEnd();


glBegin(GL_POLYGON); // face of girl child
glColor3f(1.0, 0.84, 0.68);
for(int i=0; i<360; i++)
{
    theta=i*3.142/180;
    glVertex2f(-300+left+childUp+21*cos(theta),383+rome+downToDustbin+childToUncle+21*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);   ///////////////// hairs ////////////////////
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-300+left+childUp, 406+rome+downToDustbin+childToUncle);
glVertex2f(-288+left+childUp, 400+rome+downToDustbin+childToUncle);
glVertex2f(-300+left+childUp, 405+rome+downToDustbin+childToUncle);
glVertex2f(-317+left+childUp, 398+rome+downToDustbin+childToUncle);
glVertex2f(-322+left+childUp, 385+rome+downToDustbin+childToUncle);
glVertex2f(-300+left+childUp, 394+rome+downToDustbin+childToUncle);
glVertex2f(-276+left+childUp, 384+rome+downToDustbin+childToUncle);
glVertex2f(-285+left+childUp, 398+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-297+left+childUp, 385+rome+downToDustbin+childToUncle);  ////// 1st  eyebrow
glVertex2f(-285+left+childUp, 382+rome+downToDustbin+childToUncle);

glVertex2f(-305+left+childUp, 385+rome+downToDustbin+childToUncle);  /////// 2nd eyebrow
glVertex2f(-316+left+childUp, 382+rome+downToDustbin+childToUncle);

glVertex2f(-301+left+childUp, 380+rome+downToDustbin+childToUncle);  /////// nose
glVertex2f(-301+left+childUp, 373+rome+downToDustbin+childToUncle);

glVertex2f(-308+left+childUp, 371+rome+downToDustbin+childToUncle);  /////// lips
glVertex2f(-291+left+childUp, 371+rome+downToDustbin+childToUncle);

glVertex2f(-300+left+childUp, 367+rome+downToDustbin+childToUncle);  /////// lips
glVertex2f(-297+left+childUp, 370+rome+downToDustbin+childToUncle);

glVertex2f(-300+left+childUp, 367+rome+downToDustbin+childToUncle);  /////// lips
glVertex2f(-304+left+childUp, 370+rome+downToDustbin+childToUncle);
glEnd();

glPointSize(2.5);
glBegin(GL_POINTS);   ////////// eye balls
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-292+left+childUp, 378+rome+downToDustbin+childToUncle);
glVertex2f(-308+left+childUp, 378+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.59, 0.29, 0.0);
glVertex2f(-270+left+childUp, 305+rome+downToDustbin+childToUncle);
glVertex2f(-270+left+childUp, 300+rome+downToDustbin+childToUncle);
glVertex2f(-330+left+childUp, 300+rome+downToDustbin+childToUncle);
glVertex2f(-330+left+childUp, 305+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);    ////////skirt/////////////
glColor3f(1.0, 0.39, 0.50);
glVertex2f(-270+left+childUp, 300+rome+downToDustbin+childToUncle);
glVertex2f(-260+left+childUp, 265+rome+downToDustbin+childToUncle);
glVertex2f(-340+left+childUp, 265+rome+downToDustbin+childToUncle);
glVertex2f(-330+left+childUp, 300+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);    ////////legs/////////////
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-280+left+childUp, 265+rome+downToDustbin+childToUncle);
glVertex2f(-280+left+childUp, 250+rome+downToDustbin+childToUncle);
glVertex2f(-290+left+childUp, 250+rome+downToDustbin+childToUncle);
glVertex2f(-290+left+childUp, 265+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);    ////////shoes/////////////
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-290+left+childUp, 250+rome+downToDustbin+childToUncle);
glVertex2f(-290+left+childUp, 240+rome+downToDustbin+childToUncle);
glVertex2f(-273+left+childUp, 240+rome+downToDustbin+childToUncle);
glVertex2f(-280+left+childUp, 250+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);    ////////legs/////////////
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-310+left+childUp, 265+rome+downToDustbin+childToUncle);
glVertex2f(-310+left+childUp, 250+rome+downToDustbin+childToUncle);
glVertex2f(-320+left+childUp, 250+rome+downToDustbin+childToUncle);
glVertex2f(-320+left+childUp, 265+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);    ////////shoes/////////////
glColor3f(0.0, 0.0, 0.0);
glVertex2f(-310+left+childUp, 250+rome+downToDustbin+childToUncle);
glVertex2f(-310+left+childUp, 240+rome+downToDustbin+childToUncle);
glVertex2f(-328+left+childUp, 240+rome+downToDustbin+childToUncle);
glVertex2f(-320+left+childUp, 250+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);    ////////hands/////////////
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-265+left+childUp, 350+rome+downToDustbin+childToUncle);
glVertex2f(-255+left+childUp, 338+rome+downToDustbin+childToUncle);
glVertex2f(-255+left+childUp, 318+rome+downToDustbin+childToUncle);
glVertex2f(-262+left+childUp, 318+rome+downToDustbin+childToUncle);
glVertex2f(-262+left+childUp, 332+rome+downToDustbin+childToUncle);
glVertex2f(-266+left+childUp, 341+rome+downToDustbin+childToUncle);
glEnd();


glBegin(GL_POLYGON);    ////////hands/////////////
 glColor3f(1.0, 0.84, 0.68);
glVertex2f(-340+left+childUp, 349+rome+downToDustbin+childToUncle);
glVertex2f(-349+left+childUp, 335+rome+downToDustbin+childToUncle);
glVertex2f(-349+left+childUp, 315+rome+downToDustbin+childToUncle);
glVertex2f(-341+left+childUp, 313+rome+downToDustbin+childToUncle);
glVertex2f(-341+left+childUp, 332+rome+downToDustbin+childToUncle);
glVertex2f(-337+left+childUp, 338+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON);  //palm//
     glColor3f(1.0, 0.84, 0.68);
    glVertex2f(-264+left+childUp, 318+rome+downToDustbin+childToUncle);
    glVertex2f(-266+left+childUp, 310+rome+downToDustbin+childToUncle);
    glVertex2f(-264+left+childUp, 310+rome+downToDustbin+childToUncle);
    glVertex2f(-260+left+childUp, 314+rome+downToDustbin+childToUncle);
    glVertex2f(-259+left+childUp, 307+rome+downToDustbin+childToUncle);
    glVertex2f(-253+left+childUp, 307+rome+downToDustbin+childToUncle);
    glVertex2f(-256+left+childUp, 318+rome+downToDustbin+childToUncle);
glEnd();

glBegin(GL_POLYGON); //palm
glColor3f(1.0, 0.84, 0.68);
glVertex2f(-340+left+childUp, 314+rome+downToDustbin+childToUncle);
glVertex2f(-337+left+childUp, 306+rome+downToDustbin+childToUncle);
glVertex2f(-340+left+childUp, 306+rome+downToDustbin+childToUncle);
glVertex2f(-341+left+childUp, 309+rome+downToDustbin+childToUncle);
glVertex2f(-343+left+childUp, 302+rome+downToDustbin+childToUncle);
glVertex2f(-347+left+childUp, 302+rome+downToDustbin+childToUncle);
glVertex2f(-349+left+childUp, 315+rome+downToDustbin+childToUncle);
glEnd();

}


void talk1()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    {
      glColor3f(1.0, 1.0, 1.0);
      glVertex2f(-50, 400);
      glVertex2f(-280, 400);
      glVertex2f(-280, 520);
      glVertex2f(-50, 520);
      glVertex2f(-50, 400);
      glEnd();
    }
    glPopMatrix();

     glColor3f(0.0, 0.0, 0.0);
    glRasterPos3f(-270.0,500.0,0);
    char msg1[] = "1) Mom look uncle has thrown";
    for(int i=0;i<strlen(msg1);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg1[i]);

        glColor3f(0.0, 0.0, 0.0);
    glRasterPos3f(-270.0,485.0,0);
    char msg0[] = "the garbage on the road, we";
    for(int i=0;i<strlen(msg0);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg0[i]);

        glColor3f(0.0, 0.0, 0.0);
    glRasterPos3f(-270.0,470.0,0);
    char msg2[] = "should not throw the garbage";
    for(int i=0;i<strlen(msg2);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg2[i]);

        glColor3f(0.0, 0.0, 0.0);
    glRasterPos3f(-270.0,455.0,0);
    char msg3[] = "on the roads";
    for(int i=0;i<strlen(msg3);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg3[i]);

        glutSwapBuffers();

}

void talk2()
{
    glBegin(GL_POLYGON);
    {
      glColor3f(1.0, 1.0, 1.0);
      glVertex2f(-400, 460);
      glVertex2f(-610, 460);
      glVertex2f(-610, 530);
      glVertex2f(-400, 530);
      glVertex2f(-400, 460);
      glEnd();
    }

     glColor3f(0.0, 0.0, 0.0);
    glRasterPos3f(-600.0,510.0,0);
    char msg9[] = "1) Yes you are saying right";
    for(int i=0;i<strlen(msg9);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg9[i]);

        glutSwapBuffers();

}

void talk3()
{
    glBegin(GL_POLYGON);
    {
      glColor3f(1.0, 1.0, 1.0);
      glVertex2f(-50, 400);
      glVertex2f(-280, 400);
      glVertex2f(-280, 520);
      glVertex2f(-50, 520);
      glVertex2f(-50, 400);
      glEnd();
    }

     glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-270.0,435.0,0);
    char msg1[] = "2) OK Mom I'll throw the";
    for(int i=0;i<strlen(msg1);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg1[i]);

        glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-270.0,420.0,0);
    char msg0[] = "garbage in the dustbin";
    for(int i=0;i<strlen(msg0);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg0[i]);

        glutPostRedisplay();
        glutSwapBuffers();

}

void talk4()
{
    glBegin(GL_POLYGON);
    {
      glColor3f(1.0, 1.0, 1.0);
      glVertex2f(-400, 455);
      glVertex2f(-610, 455);
      glVertex2f(-610, 530);
      glVertex2f(-400, 530);
      glVertex2f(-400, 455);
      glEnd();
    }

     glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-600.0,490.0,0);
    char msg9[] = "2) GOOD! My child we";
    for(int i=0;i<strlen(msg9);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg9[i]);

        glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-600.0,475.0,0);
    char msg8[] = "should always keep our";
    for(int i=0;i<strlen(msg8);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg8[i]);

          glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-600.0,460.0,0);
    char msg7[] = "surroundings clean.";
    for(int i=0;i<strlen(msg7);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg7[i]);

        glutSwapBuffers();
}

void talk6()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-170, 300);
    glVertex2f(5, 300);
    glVertex2f(5, 245);
    glVertex2f(-170, 245);
    glVertex2f(-170, 300);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-165.0,285.0,0);
    char msg9[] = "SOORY ! From now I'll";
    for(int i=0;i<strlen(msg9);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg9[i]);

    glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-165.0,270.0,0);
    char msg8[] = "not throw the garbage";
    for(int i=0;i<strlen(msg8);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg8[i]);


    glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-165.0,255.0,0);
    char msg7[] = "on roads";
    for(int i=0;i<strlen(msg7);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg7[i]);

        glutSwapBuffers();
}


void talk5()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(-360, 170);
    glVertex2f(-600, 170);
    glVertex2f(-600, 225);
    glVertex2f(-360, 225);
    glVertex2f(-360, 170);
    glEnd();


    glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-595.0,210.0,0);
    char msg9[] = "Don't throw garbage on the roads";
    for(int i=0;i<strlen(msg9);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg9[i]);

            glColor3f(1.0, 0.0, 0.0);
    glRasterPos3f(-595.0,190.0,0);
    char msg8[] = "it pollutes our environment.";
    for(int i=0;i<strlen(msg8);i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, msg8[i]);

        glutSwapBuffers();
}


int waste=0,child=0,moveBoy=0,momCon=0,childMove=0,childCon=0,momCon2=0,wasteUP=0,childMoveToDustbin=0,garbageDown=0,childMoveToUncle=0;

void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
         case 32:   // for starting project
            glutDisplayFunc(instruction);
            break;

            case 's':   // for starting project
            glutDisplayFunc(display);
            break;

          case 'b':   //to move the boy//
                 state=0;
                 moveBoy=1;
            break;

          case 'w':  //to fall the garbage down//
                state=1;
                waste=1;
            break;

            case '0': //to display child conversation//
                glutDisplayFunc(talk1);
            break;

            case '1':
                glutDisplayFunc(talk2);
            break;

            case '2':
                glutDisplayFunc(talk3);
            break;

            case '3':
                glutDisplayFunc(talk4);
            break;

            case '4':
                glutDisplayFunc(display);
                break;

          case '5':  // for the child to come down//
                state=2;
                childMove=1;
            break;

          case '6': // for waste to reach in child's hand//
                state=3;
                wasteUP=1;
            break;

          case '7':
              state=4;
              childMoveToDustbin=1;
            break;

          case  '8':
              state=5;
              garbageDown=1;
            break;

          case '9':
            state=6;
            childMoveToUncle=1;
            break;

            case 'o':
                glutDisplayFunc(talk5);
            break;

            case 'p':
                glutDisplayFunc(talk6);
            break;

         case 27:   //for stopping project
            exit(0);
            break;
    }
}

int a=90;
int b=30,c=35,c1=0,u=350,y=20,d=15,l=03,i=20,v=580,v1=700;

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60, timer, 0);
    switch(state)
    {
    case 0:
        if(moveBoy==1 && shift<a)
        {
            shift -= 0.80;
            a--;
        }
      break;

    case 1:
        if(waste==1 && down<b)
        {
            down-=0.50;
            b--;
        }
       break;

    case 2:
        if(childMove==1 && rome<c)
        {
            rome-=0.80;
            c--;
        }
       break;

    case 3:
        if(wasteUP==1 && up<u && x<y)
        {
            up+=0.80;
            x-=0.60;
            u--;
            y--;
        }
        break;

    case 4:
        if(childMoveToDustbin==1 && downToDustbin<d && left<l)
        {
            downToDustbin-=0.95;
            left-=1.70;
            d--;
            l--;
        }
    case 5:
        if(garbageDown==1 && garbageInDustbin<i)
        {
            garbageInDustbin-=0.50;
            i--;
        }
    case 6:
        if(childMoveToUncle==1 && childToUncle<v && childUp<v1)
        {
            childToUncle+=1.50;
            childUp+=2.70;
            v--;
            v1--;
        }
    }

}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-960,960,-540,540);
    glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Clean and Green Environment");
    glutDisplayFunc(welcomeDisplay);
    glutReshapeFunc(reshape);
    init();
    glutKeyboardFunc(keyboard);
    glutTimerFunc(1000, timer, 0);
    glutIdleFunc(Animate);
    glutMainLoop();

}
