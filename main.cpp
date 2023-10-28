#include<windows.h>
#include <GL/glut.h>
#include<cmath>
#include<stdlib.h>
float p=-10.0;
int selectedObject = 0;
//float rotationAngle = 0.0f;

int mainMenu;
//edittt

//float  tx=10,bx=10,bx2=-100;
//..................................
int screenWidth = 1100;     // Adjust this to your desired screen width
int screenHeight = 800;   // Adjust this to your desired screen height
float radius = 8.2f;    // Adjust this to your desired radius
int segments = 50;

//..............................


// Global variable to track day/night mode
bool isNight = false;


//void init(void)
void init()
{
    //glClearColor(0.8, 1.0, 1.0, 0.0);
glClearColor(1, 1.0, 1.0, 1.0);
    //glMatrixMode(GL_PROJECTION);

     //glOrtho(-210, 210, -220, 310, -210,310);
    gluOrtho2D(0.0, 100.0, 0.0, 80.0);
}





void drawTeapot(){






    //...................

//glutSolidTeapot(0.5);

//glutSolidTeapot(0.5);

           // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glColor3f(1.0, 0.0, 0.0); // Set the teapot color (red)

   // ........ glutSolidTeapot(0.5); // Draw a solid teapot
  //  glClearColor(1,1,1,1);

            // glFlush();

            //glutPostRedisplay();


}

//;;;;;;
//..........ose
/*

void arrowKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
                rotationAngle -= 12.0f;
        break;
        case GLUT_KEY_DOWN:
                rotationAngle += 13.0f;
        break;
}
glutPostRedisplay();
}






*/
//ose
//.............
/*
static void a(int w, int h)
{
const float ar = (float) w / (float) h;
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glFrustum(-ar, ar, -1.0, 1.0, 3.0, 100.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity() ;
}
*/
//................

/*

void menu(int value) {
    selectedObject = value;
 glutPostRedisplay();
}
*/
void drawLine(float x1, float y1, float x2, float y2)
{
    glBegin(GL_LINES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glEnd();
}
void makeCircle(float r, float x_center, float y_center)
{
    int deg = 0;
    float theta, x, y;
    glPointSize(4);
    glBegin(GL_POLYGON);

    while(deg < 360)
    {

        theta = (deg * M_PI) / 180;
        x = x_center + r*cos(theta);
        y = y_center + r*sin(theta);
        glVertex2f(x, y);
        deg++;
    }
    glEnd();
    //-

    /*
 switch (selectedObject) {
 case 0:
 glutSolidTorus(0.2, 0.5, 20, 20);
 break;
 case 1:
 glutSolidTeapot(0.5);
 break;

 }

 */
}





//---------------
void mainMenuFunction(int option) {

  if(option==1){
    isNight=false;
  }
  else if(option==2){
    isNight=true;
  }
  else if(option==3){

    drawTeapot();
  }
  else if(option==4){
    exit(0);
  }
  else{
    //
  }

  /*
  //....

    switch (option) {
        case 1: // Day mode
            isNight = false;
            break;
        case 2: // Night mode
            isNight = true;
            break;
        case 3:
            drawTeapot();
            //glutSolidTeapot(0.5);
         //.......
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0); // Set the teapot color (red)

    glutSolidTeapot(1.0); // Draw a solid teapot

    glFlush();
    */

   // tbba         break;

      //  case 3: // Fish color submenu
       //    fishColorSubMenuFunction(fishColorSubMenuOption);
       //     break;
   //t     case 4:
    //t        exit(0); // Exit the application
    //t        break;
    //t    default:
    //t        break;

    glutPostRedisplay();
    //....................................


}
//.........
void display(void){


//............................

glClear(GL_COLOR_BUFFER_BIT);
    //-----------------------sky------------------------------------------------------------------
        // Set the background color based on day or night mode
    if (isNight) {
        //   glColor3ub(0, 0, 0); // Black color for night mode
        //glColor3f(0,0,0);


         glClearColor(0.0, 0.0, 0.0, 1.0);
         //  sun diasppear krnna oni




    } else {
        //glColor3ub(125, 216, 220); // Light blue color for day mode

        glClearColor(0.6, 0.8, 1.0, 1.0);

    }
    glRecti(-200, 300, 200, 100);

    // Draw stars during the night mode
    //if (isNight) {
        //drawStars();

    //}

//...
/*
    // Draw the sun, adjusting its color for day and night modes
    if (isNight) {
        glColor3ub(255, 215, 0); // Yellow color for the moon in night mode
       // sun(90, 250);
    }
    */
    //...
//-----------------------sky------------------------------------------------------------------
    //if (!isNight) {
   // glColor3ub(135,206,250);//light blue
   //     glRecti(-200,300,200,100);
   // }

//.................................




/*

     glClear(GL_COLOR_BUFFER_BIT);
     //........................................................................



*/


//..............................................Temple try
/*


//glClear(GL_COLOR_BUFFER_BIT);

    // Set the drawing color to white (R, G, B, Alpha)
    glColor3f(1.0f, 1.0f, 1.0f);

    // Draw the filled half-circle
    glBegin(GL_TRIANGLE_FAN);
    //glVertex2f(screenWidth / 2, screenHeight / 2); // Center of the circle
      glVertex2f(20, 30); // Center of the circle


    for (int i = 0; i <= segments; ++i) {
        float angle = i * (M_PI / segments);


        float x = radius * cos(angle) + (20);
        float y = radius * sin(angle) + (30);
        glVertex2f(x, y);
    }
   // glEnd();

    glFlush();

 glutSwapBuffers();
 */












/*

    glColor3f(0.0, 0.0, 0.0);

    glPointSize(5.0);



    glColor3f(1.0, 0.0, 0.0);

*/
//-
/*
    //DIvidation
    glBegin(GL_QUADS);
    glColor3f(0.8, 1.0,1.0);
    glVertex2f(0.0,37.0);
    glVertex2f(0.0,80.0);
    glVertex2f(100.0,80.0);
    glVertex2f(100.0,37.0);

    */

    glBegin(GL_QUADS);
    glColor3f(0.0,0.9,0.0);
    glVertex2f(0.0,37.0);
    glVertex2f(100.0,37.0);
    glVertex2f(100.0,0.0);
    glVertex2f(0.0,0.0);
    glEnd();

    //Melaaa


//----------













//-


//------



//Ride On Right
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.,.0);
    glVertex2f(85.0,8.0);
    glVertex2f(87.9,19.30);
    glVertex2f(90.0,8.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.0,.0,.0);
    glVertex2f(81.0,23.0);
    glVertex2f(85.0,23.0);
    glVertex2f(85.0,21.0);
    glVertex2f(81.0,21.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.0,.0,.0);
    glVertex2f(90.0,24.0);
    glVertex2f(94.0,24.0);
    glVertex2f(94.0,22.0);
    glVertex2f(90.0,22.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.0,.0,.0);
    glVertex2f(82.0,15.0);
    glVertex2f(86.0,15.0);
    glVertex2f(86.0,13.0);
    glVertex2f(82.0,13.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.0,.0,.0);
    glVertex2f(90.0,16.0);
    glVertex2f(94.0,16.0);
    glVertex2f(94.0,14.0);
    glVertex2f(90.0,14.0);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINES);

    glColor3f(.0,0.0,0.0);
    glVertex2f(84.0,15.0);
    glVertex2f(92.0,24.0);

    glVertex2f(83.0,23.0);
    glVertex2f(92.0,16.0);
    glEnd();
//
 /*
    //Wall of both Sides
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    glVertex2f(0.0,37.0);
    glVertex2f(15.0,38.0);
    glVertex2f(29.45,38.0);
    glVertex2f(30.0,31.0);
    glVertex2f(15.0,31.0);
    glVertex2f(0.0,30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);

    glVertex2f(68.0,39.0);
    glVertex2f(85.0,39.0);
    glVertex2f(100.0,37.0);
    glVertex2f(100.0,33.0);
    glVertex2f(85.0,35.0);
    glVertex2f(70.0,35.0);
    glVertex2f(70.0,36.0);
    glVertex2f(68.0,37.0);


    glEnd();


     */
    //SUN
    glColor3f(1.0,1.0,0.0);
    makeCircle(3.0,85.0,65.0);
glColor3f(1.0f, 1.0f, 0.0f);  // Yellow color for rays
    glLineWidth(2.0f);

     glBegin(GL_LINES);

    for (int i = 0; i < 12; ++i) {
        float angle = (float)i / 12 * 2.0f * M_PI;
        float x1 = 3.0f * cos(angle) + 85.0f;
        float y1 = 3.0f * sin(angle) + 65.0f;
        float x2 = 6.0f * cos(angle) + 85.0f;
        float y2 = 6.0f * sin(angle) + 65.0f;
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
    }
    glEnd();

    //glFlush();

    //sun222222
    //-------------
    /*

// Draw the sun body (yellow circle)
    glColor3f(1.0f, 1.0f, 0.0f);  // Yellow color
    makeCircle(3.0f, 85.0f, 65.0f);

    // Draw sun rays (lines radiating outwards)
    glColor3f(1.0f, 1.0f, 0.0f);  // Yellow color for rays
    glLineWidth(2.0f);
    glBegin(GL_LINES);

    for (int i = 0; i < 12; ++i) {
        float angle = (float)i / 12 * 2.0f * M_PI;
        float x1 = 3.0f * cos(angle) + 85.0f;
        float y1 = 3.0f * sin(angle) + 65.0f;
        float x2 = 6.0f * cos(angle) + 85.0f;
        float y2 = 6.0f * sin(angle) + 65.0f;
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
    }
    glEnd();

    glFlush();

*/
    //-----------




//plane

//*

    if(p<=95) //moving limit with the display measurement
        p=p+.04; // changing the object position for redisplaying

    else
        p=-60; // For backing the object continuously

    glutPostRedisplay();

    glColor3f(1,0,1);
    glBegin(GL_QUADS);
    glVertex2f(70-p,70); //mid planes
    glVertex2f(85-p,70);
    glVertex2f(85-p,65);
    glVertex2f(70-p,65);
    glEnd();



    glBegin(GL_QUADS);
    glVertex2f(85-p,70);
    glVertex2f(90-p,75);
    glVertex2f(93-p,75);
    glVertex2f(85-p,65);
    glEnd();


     glColor3f(1,0,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(65-p,66);
    glVertex2f(70-p,70);
    glVertex2f(70-p,65);
    glEnd();



   glColor3f(1,0,1);
    glBegin(GL_QUADS);
    glVertex2f(77-p,70);
    glVertex2f(81-p,74);
    glVertex2f(83-p,74);
    glVertex2f(80-p,70);
    glEnd();


    glBegin(GL_QUADS);
    glVertex2f(77-p,65);
    glVertex2f(80-p,65);
    glVertex2f(81-p,62);
    glVertex2f(79-p,62);
    glEnd();

//...............












//................................rod tryy


glColor3f(0.1,0.2,0.2);
 glBegin(GL_POLYGON);

glVertex2f(-36,39);
glVertex2f(106,39);
glVertex2f(106,32);
glVertex2f(-36,32);

  // glVertex2f(-106,50);

 // glVertex2f(37,44);
  //glVertex2f(37.5,35);
  //  glVertex2f(36,35);
    glEnd();





    glColor3f(0,0,0);

 glBegin(GL_LINES);
    glVertex2f(.25,0.25);
    glVertex2f(.75,.75);
glEnd();





//-home tryyy        riverrr ..............................................................
glColor3f(0,0,.8);
 glBegin(GL_POLYGON);



   glVertex2f(-106,24);
   glVertex2f(106,24);
   glVertex2f(106,-24);
   glVertex2f(-106,-24);
   // glVertex2f(37,44);
   // glVertex2f(37.5,35);
    //glVertex2f(36,35);
    glEnd();







    //tree1
    glColor3f(1.0,0.3,0.0);
    glBegin(GL_QUADS);
    glVertex2f(15,28);
    glVertex2f(16,35);
    glVertex2f(17.5,35);
    glVertex2f(17,28);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(16,44);
    glVertex2f(17,44);
    glVertex2f(17.5,35);
    glVertex2f(16,35);
    glEnd();
    glColor3f(0.0,0.3,0.0);
    makeCircle(2,15,46);
    makeCircle(2,15,43);
    makeCircle(2,15,48);
    makeCircle(2,17,48);
    makeCircle(2,19,48);
    makeCircle(2,19,45);
    makeCircle(2,18,44);
    /*
    //.......................................................................tree sample








/*
    // glBegin(GL_QUADS);

    glVertex2f(25,25);
    glVertex2f(76,35);
    glVertex2f(77.5,35);
    glVertex2f(77,25);
    glEnd();

   //
 glColor3f(1.0,0.3,0.0);




    glBegin(GL_QUADS);
    glVertex2f(96,64);
    glVertex2f(97,64);
    glVertex2f(97.5,55);
    glVertex2f(96,55);
    glEnd();
    glColor3f(0.0,0.4,0.0);
    makeCircle(2,95,66);
    makeCircle(2,95,63);
    makeCircle(2,95,68);
   // makeCircle(2,97,68);
    makeCircle(2,99,68);
    makeCircle(2,99,65);
    makeCircle(2,98,64);
     */
    //....................................................
//tree2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.3,0.0);
    glVertex2f(75,25);
    glVertex2f(76,35);
    glVertex2f(77.5,35);
    glVertex2f(77,25);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(76,44);
    glVertex2f(77,44);
    glVertex2f(77.5,35);
    glVertex2f(76,35);
    glEnd();
    glColor3f(0.0,0.4,0.0);
    makeCircle(2,75,46);
    makeCircle(2,75,43);
    makeCircle(2,75,48);
    makeCircle(2,77,48);
    makeCircle(2,79,48);
    makeCircle(2,79,45);
    makeCircle(2,78,44);
//tree3

    glBegin(GL_QUADS);
    glColor3f(1.0,0.3,0.0);
    glVertex2f(85,25);
    glVertex2f(86,35);
    glVertex2f(87.5,35);
    glVertex2f(87,25);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(86,44);
    glVertex2f(87,44);
    glVertex2f(87.5,35);
    glVertex2f(86,35);
    glEnd();


    glColor3f(0.0,0.9,0.0);
    makeCircle(2,85,46);
    makeCircle(2,85,43);
    makeCircle(2,85,48);
    makeCircle(2,87,48);
    makeCircle(2,89,48);
    makeCircle(2,89,45);
    makeCircle(2,88,44);

    glFlush();
    //-
/*
    //tree4
    glBegin(GL_QUADS);
    glColor3f(1.0,0.7,0.0);
    glVertex2f(35,35);
    glVertex2f(36,35);
    glVertex2f(37.5,85);
    glVertex2f(67,65);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(96,44);
    glVertex2f(37,44);
    glVertex2f(37.5,35);
    glVertex2f(36,35);
    glEnd();
    glColor3f(0.0,0.9,0.0);
    makeCircle(2,75,46);
    makeCircle(2,75,43);
    makeCircle(2,75,48);
    makeCircle(2,77,48);
    makeCircle(2,79,48);
    makeCircle(2,79,45);
    makeCircle(2,78,44);





*/


    //-


//.........


// Function to handle main menu selection


    //drawTeapot();

//...........
}


int main(int argc, char* argv[]){
    glutInit(&argc, argv);						// Initalise GLUT



  //  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);


 glutInitWindowSize(1100,800);					// Set window size

    glutInitWindowPosition(50, 100);				// Set window position
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode
    //    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutCreateWindow("Temple Scene");	// Create display window

 init();							// Execute initialisation procedure
 //   glutCreateMenu(menu);
 //glutAddMenuEntry("Day ", 1);
 //glutAddMenuEntry("Night", 2);



    glutDisplayFunc(display);		// Send graphics to display window




    // drawTeapot();

//    glutSpecialFunc(arrowKeys);



        // Create the main menu
    mainMenu = glutCreateMenu(mainMenuFunction);
    glutAddMenuEntry("Day Mode", 1);
    glutAddMenuEntry("Night Mode", 2);
    glutAddMenuEntry("View Teapot", 3);
//    glutAddSubMenu("Fish Color", fishColorSubMenu); // Add the fish color submenu
    glutAddMenuEntry("Exit",4);

    // Attach the main menu to the right mouse button
    glutAttachMenu(GLUT_RIGHT_BUTTON);




    //  glutTimerFunc(0, update, 0);

    glutMainLoop();					// Display everything and wait

    return 0;
}
