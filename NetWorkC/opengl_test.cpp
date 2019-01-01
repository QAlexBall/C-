//
// Created by alex on 12/30/18.
//


#include <GL/glut.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
float wid = 400;         //设置窗口的大小,约定窗口必须为正方形
float height = wid;      //设置窗口的大小
int numbers = 20;       //设置划分的网格的个数
float t = wid/numbers; //模拟像素下的单位1
/*
 参数设置说明：
 您应当确保参数范围在-400～400.且为整数。
 由于使用的是模拟像素，应保持数据为单位模拟像素值的倍数。
 */
int x=100;
int y=100;
float r = 200;
void draw_point(float x, float y,float x1,float y1);
float translater(int x);
void real_circle();
int decision_fxy(int x,int y){
    /*
     函数说明：该函数为决策函数，每次判断下一个参考中点点在圆内还是园外
     如果在圆内那么返回0，如果是园外那么选择1；
     参数说明：传入坐标点。返回int判断值。
     */
    float d =(x+t)*(x+t) + (y-0.5*t)*(y-0.5*t)- r*r - 0.25*t*t;
    if ( (d)>=-0.25*t*t)
        return 1;
    else
        return 0;}
void bresenham_circle(float r_x,float r_y,float r){
    /*
     函数说明：bresenham画圆算法部分s
     参数说明：传入圆的中心坐标点（openGL坐标下）和半径长度。为了保障模拟像素点和实际像素点的对应情况
     我们将原来的单位1变为一个比例因子。比例因子= wid / numbers；
     */
    int x,y,h;
    x  = 0;
    y = int(r);
    h = t*t-y*t;//初始值带入（0，R）这里我们将公式进行-0.25t*t处理。
    draw_point(translater(x),translater(y),r_x,r_y); //先绘制起点
    while(x<y){
        //因为我们选取的是45度～90度部分所以标准为x<y;
        if (decision_fxy(x, y)==1){
            //说明，因为下一个中点在圆外，选择下侧的点。
            y -=t;
            h +=2*x*t+3*t*t;
        }else{
            //说明，下一个中点在圆内，说明应该选择上方的点。
            h +=2*x*t-2*y*t+5*t*t;
        }
        x+=t;
        //继续绘制点
        draw_point(translater(x),translater(y),r_x,r_y);
    }
}
float translater(int x){
    /*
     函数说明：将像素坐标下的坐标转化为openGL坐标
     参数说明：传入点像素坐标-wid-wid，返回-1～1坐标
     */
    return  x/wid;
}
void draw_point(float x , float y,float x1,float y1){
    /*
     函数说明：绘制像素的点，这里将点的大小设置为7。
     颜色采用蓝色。利用圆八个部分的坐标对应关系进行绘图。
     加x1与y1是为了进行圆的平移
     参数说明：浮点数x，y是openGl坐标系。
     */
    glPointSize(7);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POINTS);
    glVertex3f(x+x1,y+y1,0.0);
    glVertex3f(-x+x1,y+y1,0.0);              //关于y轴对称
    glVertex3f(x+x1,-y+y1,0.0);              //关于x轴对称
    glVertex3f(-x+x1,-y+y1,0.0);            //关于原点对称
    glVertex3f(y+x1,x+y1,0.0);                //关于y=x对称
    glVertex3f(-y+x1,-x+y1,0.0);            //关于y=-x对称
    glVertex3f(-y+x1,x+y1,0.0);              //再次翻折关于x轴对称
    glVertex3f(y+x1,-x+y1,0.0);              //再次关于y轴对称
    glEnd();
    glFlush();
}
void grid(){
    /*
     函数说明：绘制网格为了便于将真实的像素pixel转化为我们模拟的像素
     */
    glClearColor(0, 0, 0, 0);//这是设置背景色,必须要在glclear之前调用
    glClear(GL_COLOR_BUFFER_BIT);
    int hei_number = numbers;
    float delta_hei = height / hei_number;
    glColor3f(1.0,1.0,0);
    for (int i = 1; i < 40 ; i ++ ) { //利用循环绘制网格
        glBegin(GL_LINES);
        glVertex2f(-1+i*delta_hei/height, -1);
        glVertex2f(-1+i*delta_hei/height, 1);
        glVertex2f(-1,-1+i*delta_hei/height);
        glVertex2f(1,-1+i*delta_hei/height);
        glEnd();
        glFlush();}
    glColor3f(1.0,0,0);
    glBegin(GL_LINES);          //绘制坐标系，便于观察
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(0,-1);
    glVertex2f(0,1);
    glEnd();
    glFlush();
    //为了便于比较我们同时使用迭代法进行openGL绘制圆。
    real_circle();
    //刷新缓冲，保证绘图命令能被执行
    bresenham_circle(translater(x),translater(y),r);//进入bresenham算法
}
const int n=120;
const GLfloat Pi=3.1415926536f;
void real_circle()
{
    /*
     函数说明：使用迭代进行画圆，精度用N来控制。
     */
    int i;
    glBegin(GL_POLYGON);
    for(int i=0;i<n;i++)
        glVertex2f(translater(x)+translater(r)*cos(2*Pi/n*i),translater(y)+translater(r)*sin(2*Pi/n*i));
    glEnd();
    glFlush();
}
int main(int argc, char *argv[]) {
    //初始化GLUT library
    glutInit(&argc, argv);
    //对窗口的大小进行初始化
    glutInitWindowSize(700,700);
    glutInitWindowPosition(300,200);
    // 设置窗口出现的位置
    //glutInitWindowPosition(int x, int y);
    glutInitDisplayMode(GLUT_RGBA);
    glutCreateWindow("class16_hw1");
    glutDisplayFunc(&grid);
    glutMainLoop();
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
GLFWwindow* window;
#include <glm/glm.hpp>
using namespace glm;

int main( void )
{
    // Initialise GLFW
    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        getchar();
        return -1;
    }

    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_RESIZABLE,GL_FALSE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Open a window and create its OpenGL context
    window = glfwCreateWindow( 1024, 768, "Playground", NULL, NULL);
    if( window == NULL ){
        fprintf( stderr, "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible. Try the 2.1 version of the tutorials.\n" );
        getchar();
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // Initialize GLEW
    if (glewInit() != GLEW_OK) {
        fprintf(stderr, "Failed to initialize GLEW\n");
        getchar();
        glfwTerminate();
        return -1;
    }

    // Ensure we can capture the escape key being pressed below
    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

    // Dark blue background
    glClearColor(0.0f, 0.0f, 0.4f, 0.0f);

    do{
        glClear(GL_COLOR_BUFFER_BIT);

        // Draw nothing, see you in tutorial 2 !

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();

    } // Check if the ESC key was pressed or the window was closed
    while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
           glfwWindowShouldClose(window) == 0 );

    // Close OpenGL window and terminate GLFW
    glfwTerminate();

    return 0;
}
*/
