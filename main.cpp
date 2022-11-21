#include "TXLib.h"


void DrawSun()
{
    txSetColor(RGB(255, 255, 0), 1);
    txSetFillColor (RGB(255, 255, 0));
    txCircle(785, 60, 50);
}

void DrawFon()
{
    //����, ����� � ������
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
    //����
    txSetFillColor (RGB(63, 72, 204));
    txRectangle(0, 0, 1450, 780);
    txSetFillColor (RGB(79, 79, 79));
    txRectangle(0, 535, 1450, 780);

    txSetColor (TX_NULL);
    txSetFillColor (RGB(179, 71, 0));
    txRectangle(1120, 0, 1450, 540);
    txRectangle(0, 0, 305, 540);

    //�������
    txSetFillColor(RGB(7, 126, 1));
    txRectangle(303, 35, 1122, 540);
    txSetColor (TX_BLACK, 4);
    txRectangle(350, 50, 1080, 285);
    txSelectFont ("Arial", 90, 70, FW_BOLD);
    txDrawText(350, 50, 1080, 285, "�������");

    //����
    txSetColor(TX_BLACK, 4);
    txSetFillColor(RGB(0, 162, 232));
    txRectangle(665, 305, 1075, 470);
    txRectangle(45, 85, 255, 170);
    txRectangle(1185, 85, 1405, 170);

    //dveri
    txSetColor(TX_BLACK, 2);
    txSetFillColor(RGB(128, 64, 0));
    txRectangle(95, 340, 195, 540);
    txRectangle(1235, 340, 1335, 540);

    txSetFillColor(RGB(0, 64, 0));
    txRectangle(395, 340, 500, 540);
    txRectangle(500, 340, 605, 540);


    //�������
    //1
    txSetColor(TX_NULL);
    txSetFillColor(RGB(127, 127, 127));
    txRectangle(25, 235, 265, 270);

    //zabor1
    txSetColor(TX_BLACK, 4);
    txLine(25, 235, 25, 200);
    txLine(265, 235, 265, 200);
    txLine(25, 200, 265, 200);
    txLine(145, 235, 145, 200);


    //2
    txSetColor(TX_NULL);
    txSetFillColor(RGB(127, 127, 127));
    txRectangle(1165, 235, 1420, 270);

    //lavka
    txSetColor(RGB(185, 122, 87), 4);
    txLine(1295, 235, 1305, 225);
    txLine(1370, 235, 1360, 225);
    txLine(1304, 225, 1360, 225);

    //4el
    txSetColor(TX_BLACK, 4);
    txSetFillColor(TX_BLACK);
    txLine(1328, 225, 1335, 160);//nogi
    txLine(1328, 225, 1300, 223);
    txLine(1300, 223, 1290, 235);
    txLine(1328, 225, 1300, 215);
    txLine(1300, 215, 1285, 235);
    txLine(1330, 190, 1310, 185);//ryki
    txLine(1310, 185, 1315, 175);
    txLine(1330, 190, 1345, 225);
    txCircle(1335, 145, 17);

    //sigareta
    txSetColor(RGB(127, 127, 127), 3);
    txLine(1315, 180, 1300, 170);
    txSetColor(TX_RED, 3);
    txLine(1300, 170, 1305, 173);

    //zabor2
    txSetColor(TX_BLACK, 4);
    txLine(1165, 235, 1165, 200);
    txLine(1420, 235, 1420, 200);
    txLine(1165, 200, 1420, 200);
    txLine(1293, 235, 1293, 200);

}


void DrawPotsandGrass()
{
    //�����
    for(int x = 695; x < 770; x+=10)
    {
        txSetColor(RGB(34, 177, 76), 3);
        txLine(x, 483, x, 400);
        txLine(x+125, 483, x+125, 400);
        txLine(x+250, 483, x+250, 400);
    }

    //������
    txSetColor(TX_BLACK, 4);
    txSetFillColor(RGB(156, 97, 65));
    POINT Pot1[4] = {{690, 485}, {770, 485}, {715, 540}, {750, 540}};
    txPolygon (Pot1, 4);

    POINT Pot2[4] = {{815, 485}, {895, 485}, {840, 540}, {875, 540}};
    txPolygon (Pot2, 4);

    POINT Pot3[4] = {{940, 485}, {1020, 485}, {960, 540}, {995, 540}};
    txPolygon (Pot3, 4);


}



void DrawDoma()
{
    int y1 = 110;
    //������ �� 1 ����
    //����� �������
    txSetColor(RGB(127, 127, 127));
    txSetFillColor(RGB(127, 127, 127));
    //1
    txRectangle(100, 100, 215 , 505);
    //2
    txRectangle(215, 155, 380, 505);
    //3
    txRectangle(535, 50, 620, 500);
    //4
    txRectangle(770, 225, 850, 570);
    //5
    txRectangle(850, 245, 930, 570);
    //6
    txRectangle(1000, 105, 1110, 590);
    //7
    txRectangle(1210, 95, 1390, 545);


    //���� �� ������
    //1
    for(int y1 = 110; y1 < 420; y1+=30)
    {
        //int y1 +=10
        txSetColor(TX_BLACK, 2);
        txSetFillColor(RGB(0, 162, 232));
        txRectangle(110, y1, 205, y1+30);
    }





}


void DrawCar(int x)
{
    //������
    //����
    txSetColor(TX_BLACK, 3);
    txSetFillColor(RGB(125, 249, 255));
    POINT Car[17] = {{x+200, 685}, {x+185, 660}, {x+140, 660}, {x+130, 685}, {x+85, 685}, {x+85, 640},
    {x+95, 640}, {x+95, 615}, {x+165, 570}, {x+460, 570}, {x+500, 615}, {x+605, 615},
    {x+575, 685}, {x+515, 685}, {x+495, 660}, {x+455, 660}, {x+445, 685}};
    txPolygon (Car, 17);

    //����
    txSetColor(RGB(63, 72, 204));
    txSetFillColor(RGB(63, 72, 204));
    POINT CarWindow[4] = {{x+330, 575}, {x+330, 615}, {x+495, 615}, {x+455, 575}};
    txPolygon (CarWindow, 4);

    //����
    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    POINT CarHeadLight[4] = {{x+605, 615}, {x+590, 645}, {x+545, 645}, {x+545, 615}};
    txPolygon (CarHeadLight, 4);

    //������
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txCircle(x+165, 695, 35);
    txCircle(x+478, 695, 35);
}



void DrawCloud(int x, int x1)
{
  //������

}




int main()
    {
    txCreateWindow (1450, 780);

    //int xCloud = 600;
    //int xCloud1 = 40;
    int xCar = 0;

    while (xCar < 1500)
    {
        //1 �����
        txBegin();
        DrawFon();
        DrawSun();
        DrawDoma();
        DrawCar(xCar);
        xCar = xCar + 10;
        txSleep(0.1);
        txEnd();
    }

    xCar = -100;
    while (xCar < 1500)
    {
        // 2 �����
        txBegin();
        DrawFon2();
        DrawPotsandGrass();
        DrawCar(xCar);
        xCar = xCar + 10;
        txSleep(0.1);
        txEnd();
    }
    txTextCursor (false);
    return 0;
    }

