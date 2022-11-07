#include "TXLib.h"


void DrawSun(int x)
{
    txSetColor(RGB(255, 255, 0), 1);
    txSetFillColor (RGB(255, 255, 0));
    txCircle(x, 70, 40);
}

void DrawFon()
{
    txSetFillColor (RGB(63, 72, 204));
    txSetColor(RGB(63, 72, 204));
    txRectangle(0, 0, 1450, 780);

    txSetFillColor (RGB(195, 195, 195));
    txSetColor(RGB(195, 195, 195));
    txRectangle(0,600,1450, 780);

    //razmetka next
//    txSetFillColor(TX_BLACK);
//    txSetColor(TX_BLACK);
//    txRectangle(55,640,165, 700);
//    txRectangle(55+195,640,165+195, 700);
//    txRectangle(250+195,640,360+195, 700);
//    txRectangle(445+195,640,555+195, 700);
//    txRectangle(640+195,640,750+195, 700);
//    txRectangle(835+195,640,945+195, 700);
//    txRectangle(1030+195,640,1140+195, 700);
//    txRectangle(1225+195,640,1335+195, 700);

    txSetColor (RGB(34, 177, 76));
    txSetFillColor (RGB(34, 177, 76));
    txRectangle(0, 400, 1450, 600);

}

void DrawFon2()
{
    txSetFillColor (RGB(63, 72, 204));
    txRectangle(0, 0, 1450, 780);
    txSetFillColor (RGB(79, 79, 79));
    txRectangle(0, 535, 1450, 780);

    txSetColor (TX_NULL);
    txSetFillColor (RGB(179, 71, 0));
    txRectangle(1120, 0, 1450, 540);
    txRectangle(0, 0, 305, 540);

    txSetFillColor(RGB(7, 126, 1));
    txRectangle(303, 35, 1122, 540);
    txSetColor (TX_BLACK, 4);
    txRectangle(350, 50, 1080, 285); //‚˚‚ÂÒÍ‡
    txSelectFont ("Arial", 90, 70, FW_BOLD);
    txDrawText(350, 50, 1080, 285, "Ã¿√¿«»Õ");

    //dveri
    txSetColor(TX_BLACK, 2);
    txSetFillColor(RGB(128, 64, 0));
    txRectangle(160, 340, 275, 540);
    txRectangle(1235, 340, 1335, 540);

    txSetFillColor(RGB(0, 64, 0));
    txRectangle(525, 350, 635, 540);
    txRectangle(635, 350, 740, 540);





}

void DrawDoma()
{
    txSetFillColor(RGB(127, 127, 127));
    txSetColor(RGB(127, 127, 127));
    txRectangle(35, 215, 120, 510);
    txRectangle(130, 110, 210, 515);
    txRectangle(230, 170, 120, 510);
    txRectangle(350, 225, 495, 455);
    txRectangle(490, 295, 580, 450);
    txRectangle(625, 195, 685, 490);
    txRectangle(685, 290, 750, 485);
    txRectangle(865, 160, 965, 460);
    txRectangle(965, 215, 1135, 455);
    txRectangle(1260, 80, 1370, 460);

    txSetColor(RGB(0, 162, 232));
    txSetFillColor(RGB(0, 162, 232));
    txRectangle(45, 230, 115, 255);  //230 255
    txRectangle(140, 120, 200, 160); //nenado
    txRectangle(140, 185, 200, 225); //185 225
    txRectangle(365, 240, 415, 270); //240 270
    txRectangle(430, 240, 480, 270); //240 270
    txRectangle(505, 310, 565, 340); //310 340
    txRectangle(630, 210, 670, 230); //210 230
    txRectangle(695, 305, 735, 330); //305 330
    txRectangle(875, 170, 955, 210); //170 210
    txRectangle(970, 225, 1030, 260); //225 260
    txRectangle(1045, 225, 1120, 260); //225 260
    txRectangle(1275, 95, 1360, 130);  //95 130

}


void DrawCar(int x)
{

    txSetColor(TX_BLACK, 3);
    txSetFillColor(RGB(125, 249, 255));
    POINT Car[17] = {{x+200, 685}, {x+185, 660}, {x+140, 660}, {x+130, 685}, {x+85, 685}, {x+85, 640},
    {x+95, 640}, {x+95, 615}, {x+165, 570}, {x+460, 570}, {x+500, 615}, {x+605, 615},
    {x+575, 685}, {x+515, 685}, {x+495, 660}, {x+455, 660}, {x+445, 685}};
    txPolygon (Car, 17);

    txSetColor(RGB(63, 72, 204));
    txSetFillColor(RGB(63, 72, 204));
    POINT CarWindow[4] = {{x+330, 575}, {x+330, 615}, {x+495, 615}, {x+455, 575}};
    txPolygon (CarWindow, 4);

    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    POINT CarHeadLight[4] = {{x+605, 615}, {x+590, 645}, {x+545, 645}, {x+545, 615}};
    txPolygon (CarHeadLight, 4);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txCircle(x+165, 695, 35);
    txCircle(x+478, 695, 35);
}



void DrawCloud(int x, int x1)
{


}




int main()
    {
    txCreateWindow (1450, 780);

    int xSun = 100;
    int xCloud = 600;
    int xCloud1 = 40;
    int xCar = 0;

//    while (xCar < 1500)
//    {
//        DrawFon();
//        DrawDoma();
//        DrawCar(xCar);
//        xCar = xCar + 3;
//        txSleep(0.1);
//    }

    DrawFon2();

    txTextCursor (false);
    return 0;
    }

