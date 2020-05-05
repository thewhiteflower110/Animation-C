#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<alloc.h>
    struct BMP
    {
      char Type[2];           //File type. Set to "BM".
      unsigned long Size;     //Size in BYTES of the file.
      unsigned long Reserved;      //Reserved. Set to zero.
      unsigned long OffSet;   //Offset to the data.
      unsigned long headsize; //Size of rest of header. Set to 40.
      unsigned long Width;     //Width of bitmap in pixels.
      unsigned long Height;     //  Height of bitmap in pixels.
      unsigned int  Planes;    //Number of Planes. Set to 1.
      unsigned int  BitsPerPixel;       //Number of Bits per pixels.
      unsigned long Compression;   //Compression. Usually set to 0.
      unsigned long SizeImage;  //Size in bytes of the bitmap.
      unsigned long XPixelsPreMeter;     //Horizontal pixels per meter.
      unsigned long YPixelsPreMeter;     //Vertical pixels per meter.
      unsigned long ColorsUsed;   //Number of colors used.
      unsigned long ColorsImportant;  //Number of "important" colors.
    };

void drawtent()
{
  line(getmaxx()/2-50,10,0,getmaxy()/2-150);
  line(getmaxx()/2-80,10,getmaxx()-150,getmaxy()/2-150);
  rectangle(30,getmaxy()/2-180+15+5,getmaxx()-180,getmaxy()/2+100);
  rectangle(getmaxx()/2-45-30-50,getmaxy()/2-20,getmaxx()/2+40-50,getmaxy()/2+100);
  setfillstyle(SOLID_FILL,6);
  floodfill(32,getmaxy()/2-180+15+15,15);
  floodfill(getmaxx()/2-60,15+5,15);
  setcolor(15);
  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(getmaxx()/2-60,getmaxy()/2-180,"Welcome to Diu tent city");
  settextjustify(1,1);
  settextstyle(DEFAULT_FONT,0,1);
  outtextxy(getmaxx()/2-95+10,getmaxy()/2-20-10,"Reception");
  }
void normal()
{
   rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame

   //joy
    //joy
   circle(120,335,20); //face
   line(120,355,120,405);//stick
   line(120,360,130,390);
   line(120,360,110,390);
   line(120,405,110,435);
   line(120,405,130,435);
   //delay(100);
  // k2
   circle(120+70,335,20); //face
   line(120+70,355,120+70,405);//stick

   line(120+70,360,130+70,390);
   line(120+70,360,110+70,390);

   line(120+70,405,110+70,435);
   line(120+70,405,130+70,435);
   //delay(100);
   //harshil
   circle(120+140,335-10,20); //face
   line(120+140,355-10,120+140,405);//stick

   line(120+70+70,360-10,130+70+70,390);
   line(120+70+70,360-10,110+70+70,390);

   line(120+140,405,110+140,435);
   line(120+140,405,130+140,435);
   //delay(100);
   //karnik

   circle(120+210,335-10,20); //face
   circle(120+230,315-10,10);

   line(120+210,355-10,120+210,405);//stick

   line(120+210,360-10,130+210,390);
   line(120+210,360-10,110+210,390);

   line(120+210,405,110+210,435);
   line(120+210,405,130+210,435);
 // delay(100);
  //rutvi

   circle(120+280,335,20); //face
   line(120+280,355,135+280,390);
   line(120+280,355,105+280,390);
   line(105+280,390,135+280,390);

   line(120+280,360,130+280+10,390);
   line(120+280,360,110+280-10,390);

   line(115+280,390,115+280,435);
   line(125+280,390,125+280,435);
   //delay(100);
   //juhi

   circle(120+350,320,15); //face
   line(120+350,335,135+350,355);
   line(120+350,335,105+350,355);
   line(105+350,355,135+350,355);

   line(120+350,340,155+350,330);
   line(155+350,330,145+350,315);
   line(120+350,340,85+350,330);
   line(85+350,330,95+350,315);

   line(115+350,355,115+350,375);
   line(125+350,355,125+350,375);
   //delay(100);
   //aman
   circle(120+420,335,20); //face
   ellipse(120+420,380, 0, 360,15,24);

   line(120+420,360-10,130+420+10+10,390);
   line(120+420,360-10,110+420-20,390);

   //line(120+420,405,110+420,435);
   //line(120+420,405,130+420,435);
   line(115+210*2,390+14,115+210*2,435);
   line(125+210*2,390+14,125+210*2,435);


   }
void injump()
{
   rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
   //joy
   circle(120,335,20); //face
   line(120,355,120,405);//stick
   line(120,360,165-10,340);
   line(165-10,340,145,325);
   line(120,360,75+10,340);
   line(75+10,340,95+10,325);

   line(120,405,115,430);
   line(120,405,130,430);
   line(130,430,135,405);
   line(115,430,110,405);
   //k2
   circle(120+70,335,20); //face
   line(120+70,355,120+70,405);//stick
   line(120+70,360,165+70-10,340);
   line(165+70-10,340,145+70,325);
   line(120+70,360,75+70+10,340);
   line(75+70+10,340,95+70+10,325);

   //line(120+70,405,110+70,435);
   //line(120+70,405,130+70,435);

   line(120+70,405,115+70,430);
   line(120+70,405,130+70,430);
   line(130+70,430,135+70,405);
   line(115+70,430,110+70,405);

   //harshil
   circle(120+140,335-10,20); //face
   line(120+140,355-10,120+140,405);//stick
   line(120+140,360-10,165+140-10,340-10);
   line(165+140-10,340-10,145+140,325-10);
   line(120+140,360-10,75+140+10,340-10);
   line(75+140+10,340-10,95+140+10,325-10);

   //line(120+140,405,110+140,435);
   //line(120+140,405,130+140,435);
   line(120+140,405,115+140,430);
   line(120+140,405,130+140,430);
   line(130+140,430,135+140,405);
   line(115+140,430,110+140,405);

   //karnik
   circle(120+210,335-10,20); //face
   circle(120+230,315-10,10);
   line(120+210,355-10,120+210,405);//stick

   line(120+210,360-10,165+210-10,340-10);
   line(165+210-10,340-10,145+210,325-10);
   line(120+210,360-10,75+210,340-10);
   line(75+210+10,340-10,95+210+10,325-10);

   //line(120+210+10,405,110+210+10,435);
   //line(120+210,405,130+210,435);
   line(120+210,405,115+210,430);
   line(120+210,405,130+210,430);
   line(130+210,430,135+210,405);
   line(115+210,430,110+210,405);

  //rutvi
   //rutvi
   circle(120+280,335,20); //face
   line(120+280,355,135+280,390);
   line(120+280,355,105+280,390);
   line(105+280,390,135+280,390);

   line(120+280,360,165+280,340);
   line(165+280,340,145+280,325);
   line(120+280,360,75+280,340);
   line(75+280,340,95+280,325);

   //line(115+280,390,115+280,435);
   //line(125+280,390,125+280,435);
   line(115+280,390,115+280,390+34);
   line(115+280,390+34,115+280-10,390+15);

   line(125+280,390,125+280,390+34);
   line(125+280,390+34,125+280+10,390+15);

   //juhi

   circle(120+350,320,15); //face
   line(120+350,335,135+350,355);
   line(120+350,335,105+350,355);
   line(105+350,355,135+350,355);

   line(120+350,340,155+350,330);
   line(155+350,330,145+350,315);
   line(120+350,340,85+350,330);
   line(85+350,330,95+350,315);

   line(115+350,355,115+350,375);
   line(125+350,355,125+350,375);
   //aman
   circle(120+420,335,20); //face
   ellipse(120+420,380, 0, 360,15,24);
   line(120+420,360,165+420,340);
   line(165+420,340,145+420,325);
   line(120+420,360,75+420,340);
   line(75+420,340,95+420,325);

   line(115+420,390+24-10,115+420,390+44);
   line(115+420,390+44,115+420-10,390+24);

   line(125+420,390+24-10,125+420,390+44);
   line(125+420,390+44,125+420+10,390+24);
}
int ShowBMP(int x, int y, char* FileName)
{
	int b,a;
	struct  BMP Obj;

	unsigned char* Datas;
	int in=0;
	unsigned char c=0;
	FILE * fp;

	fp = fopen(FileName,"rb");
	if(!fp)
	{
	printf("Error : Unable to open file ..");
	exit(0);
	}
	fread(&Obj, sizeof(Obj), 1, fp);
	if(Obj.BitsPerPixel!=4)  // This isn't a 16 color bmp we can read;
	{
	 fclose(fp);
	 printf("Error : File format not supported ..");
	 exit(0);
	};
	fseek(fp,Obj.OffSet,SEEK_SET);
	Datas=(unsigned char*) calloc(Obj.Width/2+1, sizeof(unsigned char));
	for(b=Obj.Height;b>=0;b--)
	{
		fread(Datas, sizeof(unsigned char), Obj.Width/2, fp);
		c=0;
		in=0;
		for(a=0;a<=Obj.Width;a+=2)
		{
		     c = (Datas[in] | 0x00) >>4;
		     putpixel(a+x,b+y,c);
		     c = (Datas[in] | 0xF0) & 0x0F;
		     putpixel(a+1+x,b+y,c);
		     in++;
		}
	}
	free (Datas);
	fclose(fp);
	return 1;
}

void prepostjump()
{

   rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
   //joy
   circle(120,335,20); //face
   line(120,355,120,405);//stick
   line(120,360,165,340);
   line(165,340,145,325);
   line(120,360,75,340);
   line(75,340,95,325);
   line(120,405,110,435);
   line(120,405,130,435);


   circle(120+70,335,20); //face
   line(120+70,355,120+70,405);//stick
   line(120+70,360,165+70,340);
   line(165+70,340,145+70,325);
   line(120+70,360,75+70,340);
   line(75+70,340,95+70,325);
   line(120+70,405,110+70,435);
   line(120+70,405,130+70,435);
   //harshil

   circle(120+140,335-10,20); //face
   line(120+140,355-10,120+140,405);//stick
   line(120+140,360-10,165+140,340-10);
   line(165+140,340-10,145+140,325-10);
   line(120+140,360-10,75+140,340-10);
   line(75+140,340-10,95+140,325-10);
   line(120+140,405,110+140,435);
   line(120+140,405,130+140,435);
   //karnik

   circle(120+210,335-10,20); //face
   circle(120+230,315-10,10);
   line(120+210,355-10,120+210,405);//stick
   line(120+210,360-10,165+210,340-10);
   line(165+210,340-10,145+210,325-10);
   line(120+210,360-10,75+210,340-10);
   line(75+210,340-10,95+210,325-10);
   line(120+210,405,110+210,435);
   line(120+210,405,130+210,435);
  //rutvi

   circle(120+280,335,20); //face
   line(120+280,355,135+280,390);
   line(120+280,355,105+280,390);
   line(105+280,390,135+280,390);

   line(120+280,360,165+280,340);
   line(165+280,340,145+280,325);
   line(120+280,360,75+280,340);
   line(75+280,340,95+280,325);

   line(115+280,390,115+280,435);
   line(125+280,390,125+280,435);
   //juhi

   circle(120+350,320,15); //face
   line(120+350,335,135+350,355);
   line(120+350,335,105+350,355);
   line(105+350,355,135+350,355);

   line(120+350,340,155+350,330);
   line(155+350,330,145+350,315);
   line(120+350,340,85+350,330);
   line(85+350,330,95+350,315);

   line(115+350,355,115+350,375);
   line(125+350,355,125+350,375);
   //aman

   circle(120+420,335,20); //face
   //line(120+420,355,120+420,405);//stick
   ellipse(120+420,380, 0, 360,15,24);

   line(120+420,360,165+420,340);
   line(165+420,340,145+420,325);
   line(120+420,360,75+420,340);
   line(75+420,340,95+420,325);

   //line(115+420,405,115+420,435);
   //line(125+420,405,125+420,435);
  line(115+420,390+14,115+420,435);
  line(125+420,390+14,125+420,435);



}
void drawbench()
   {
   rectangle(20,50,200,150);
    setfillstyle(SOLID_FILL,6);
    floodfill(180,100,15);
   setcolor(15);

   rectangle(20,200,200,300);
    setfillstyle(SOLID_FILL,6);
    floodfill(180,250,15);
   setcolor(15);

   rectangle(440,200,getmaxx()-15,300);
    setfillstyle(SOLID_FILL,6);
    floodfill(480,250,15);
    setcolor(15);

   rectangle(220,50,420,150);
     setfillstyle(SOLID_FILL,6);
    floodfill(225,105,15);
    setcolor(15);

   rectangle(220,200,420,300);
     setfillstyle(SOLID_FILL,6);

    floodfill(410,204,15);
    setcolor(15);

   rectangle(440,50,getmaxx()-15,150);
     setfillstyle(SOLID_FILL,6);
    floodfill(450,100,15);
    setcolor(15);

   rectangle(140,getmaxy()-20,480,getmaxy()-10);//teacher table
   rectangle(220,350,420,400);  //board
     setfillstyle(SOLID_FILL,6);
    floodfill(230,355,15);
    setfillstyle(SOLID_FILL,8);
    floodfill(12,12,15);
}
void normalwithdelay()
{
   //joy
   circle(120,335,20); //face
   line(120,355,120,405);//stick
   line(120,360,130,390);
   line(120,360,110,390);
   line(120,405,110,435);
   line(120,405,130,435);
   delay(100);
  // k2
   circle(120+70,335,20); //face
   line(120+70,355,120+70,405);//stick

   line(120+70,360,130+70,390);
   line(120+70,360,110+70,390);

   line(120+70,405,110+70,435);
   line(120+70,405,130+70,435);
   delay(100);
   //harshil

   circle(120+140,335-10,20); //face
   line(120+140,355-10,120+140,405);//stick

   line(120+70+70,360-10,130+70+70,390);
   line(120+70+70,360-10,110+70+70,390);

   line(120+140,405,110+140,435);
   line(120+140,405,130+140,435);
   delay(100);
   //karnik

   circle(120+210,335-10,20); //face
   circle(120+230,315-10,10);

   line(120+210,355-10,120+210,405);//stick

   line(120+210,360-10,130+210,390);
   line(120+210,360-10,110+210,390);

   line(120+210,405,110+210,435);
   line(120+210,405,130+210,435);
  delay(100);
  //rutvi

   circle(120+280,335,20); //face
   line(120+280,355,135+280,390);
   line(120+280,355,105+280,390);
   line(105+280,390,135+280,390);

   line(120+280,360,130+280+10,390);
   line(120+280,360,110+280-10,390);

   line(115+280,390,115+280,435);
   line(125+280,390,125+280,435);
   delay(100);
   //juhi

   circle(120+350,320,15); //face
   line(120+350,335,135+350,355);
   line(120+350,335,105+350,355);
   line(105+350,355,135+350,355);

   line(120+350,340,155+350,330);
   line(155+350,330,145+350,315);
   line(120+350,340,85+350,330);
   line(85+350,330,95+350,315);

   line(115+350,355,115+350,375);
   line(125+350,355,125+350,375);
   delay(100);
   //aman
   circle(120+420,335,20); //face
   ellipse(120+420,380, 0, 360,15,24);

   line(120+420,360-10,130+420+10+10,390);
   line(120+420,360-10,110+420-20,390);

   line(120+420,405,110+420,435);
   line(120+420,405,130+420,435);

}
void drawstud1()
{
   circle(90,35,25);
   line(115,45,135,50);
   line(135,50,115,65);}
void drawstud2(){
   circle(90,185,25);
   line(115,195,135,200);
   line(135,200,115,215);}
  // delay(1000);
void drawstud3(){
   circle(320,35,25);
   line(345,45,365,50);    //320
   line(365,50,345,65);}
void drawstud4(){
   circle(320,185,25);
   line(345,195,365,200);
   line(365,200,345,215);}
void drawstud5(){
   circle(532,35,25);
   line(557,45,577,50);
   line(577,50,557,65);}
void drawstud6(){
   circle(532,185,25);
   line(557,195,577,200);
   line(577,200,557,215);}
void drawteacher()
{
   circle(320,435,25); //teacher
   line(345,425,365,420);
   line(365,420,345,400);
   line(295,425,275,420);
   line(275,420,295,400);

}
void main()
{
	int gdriver = DETECT, gmode, errorcode;
	int i,j,z=0,poly[14],x,y;
	initgraph(&gdriver, &gmode, "");
   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,3);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Last Exam");
   delay(1000);
   cleardevice();
   /********************STUDNENT ARRANGEMENT******************/
    rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
   drawbench();
    delay(1000);
	drawstud1();
	delay(100);
	drawstud2();
	delay(100);
	drawstud3();
	delay(100);
	drawstud4();
	delay(100);
	drawstud5();
	delay(100);
	drawstud6();
	delay(100);
	drawteacher();
	delay(1000);
   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,3);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Paper Distribution...");
  delay(1000);
  cleardevice();
/******************AFTER ARRANGEMENT******************/
 drawbench();
drawstud1();
drawstud2();
drawstud3();
drawstud4();
drawstud5();
drawstud6();
drawteacher();
   delay(200);
     setcolor(15);
   rectangle(120,65,140,95);
   rectangle(100,65,120,95);
   rectangle(120+30,65,140+30,95);
    setfillstyle(SOLID_FILL,0);
    floodfill(121,66,15);
    floodfill(101,66,15);
    floodfill(120+34,66,15);

   delay(200);
    setcolor(15);
    rectangle(562,215,582,245);
   rectangle(542,215,562,245);
   rectangle(512,215,532,245);
     setfillstyle(SOLID_FILL,0);
    floodfill(571,216,15);
    floodfill(551,216,15);
    floodfill(514,216,15);


   delay(200);
     setcolor(15);
   rectangle(562,65,582,95);
   rectangle(542,65,562,95);
   rectangle(512,65,532,95);
     setfillstyle(SOLID_FILL,0);
    floodfill(571,66,15);
    floodfill(551,66,15);
    floodfill(514,66,15);

   delay(200);
     setcolor(15);
   rectangle(350,215,370,245);
   rectangle(330,215,350,245);
   rectangle(380,215,400,245);
    setfillstyle(SOLID_FILL,0);
    floodfill(361,216,15);
    floodfill(331,216,15);
    floodfill(389,216,15);

   delay(200);
     setcolor(15);
   rectangle(350,65,370,95);
   rectangle(330,65,350,95);
   rectangle(380,65,400,95);
    setfillstyle(SOLID_FILL,0);
    floodfill(361,66,15);
    floodfill(331,66,15);
    floodfill(383,66,15);

   delay(200);
   setcolor(15);
   rectangle(120,215,140,245);
   rectangle(100,215,120,245);
   rectangle(120+30,215,140+30,245);
     setfillstyle(SOLID_FILL,0);
    floodfill(121,216,15);
    floodfill(101,216,15);
    floodfill(120+34,216,15);

   delay(200);

   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"2 hours of mental exhaustion later!!");
   delay(1000);
   cleardevice();
 /********************PRE JUMP*****************/

   normal();
   setfillstyle(SOLID_FILL,3);
   floodfill(12,21,15);
   delay(500);
   cleardevice();
  /********************IN JUMP*****************/

    injump();
    setfillstyle(SOLID_FILL,3);
    floodfill(12,21,15);
    floodfill(85+210+10,335-10,15);
   floodfill(85+140+10,335-10,15);
   floodfill(85+70+10,335,15);
   floodfill(85+10,335,15);
   floodfill(135+210,350-10,15);
  delay(500);
   cleardevice();
/********************POST JUMP*****************/

   prepostjump();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Free!!");
    setfillstyle(SOLID_FILL,3);
    floodfill(12,21,15);
    floodfill(85+210+10,335-10,15);
   floodfill(85+140+10,335-10,15);
   floodfill(85+70+10,335,15);
   floodfill(85+10,335,15);
   floodfill(135+210,350-10,15);
   delay(500);
   cleardevice();
   normal();
   delay(500);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(120, 305,"Joy");
   delay(500);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(120+280, 305,"Rutvi");
   delay(500);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(120+420, 305,"Aman");
   delay(500);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(120+140, 305-10,"Harshil");
   delay(500);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(120+350, 305-5,"Juhi");
   delay(500);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(120+210, 305-15,"Karnik");
   delay(500);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(120+70, 305,"K2");
   delay(500);
   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,3);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Trip begins now!");
   delay(4000);
  /*******************CAR MOVES ****************/

   for(i=0;z<getmaxx()-10;i+=10)
   {
   cleardevice();
   rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
   line(getmaxx()-10,400,0,400);
   setfillstyle(SOLID_FILL,8);
   floodfill(getmaxx()-34,403,15);
   settextjustify(1,1);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(15);
   outtextxy(495,58,"Diu 450->");

   rectangle(450,50,getmaxx()-20,75);
   setcolor(15);
   line(getmaxx()-10,150,0,150);
   setlinestyle(0,1,3);
   line(490+30,75,490+30,150);
  //line(120+210+26+20,105,120+210+26+20,getmaxy()-10-200);
   setlinestyle(0,1,1);
    setfillstyle(SOLID_FILL,2);
   floodfill(455,55,15);
   setfillstyle(SOLID_FILL,3);
   floodfill(12,12,15);

   z=getmaxx()/2-200+60+i;
   poly[0]=getmaxx()/2-200-20+i;     //.
   poly[1]=getmaxy()/2;

   poly[2]=getmaxx()/2+20+i-200;     //............
   poly[3]=getmaxy()/2;

   poly[4]=getmaxx()/2+60+20+i-200;   //...
   poly[5]=getmaxy()/2+30;      //   .

   poly[6]=getmaxx()/2-200+60+20+i;
   poly[7]=getmaxy()/2+30+35;

   poly[8]=getmaxx()/2-20-60-200+i;
   poly[9]=getmaxy()/2+30+35;

   poly[10]=getmaxx()/2-200-60-20+i;
   poly[11]=getmaxy()/2+30;

   poly[12]=poly[0];
   poly[13]=poly[1];
   setfillstyle(SOLID_FILL,7);
   fillpoly(7,poly);

   arc(getmaxx()/2-200-40+i,getmaxy()/2+30+35, 180,360, 17);
   arc(getmaxx()/2-200+40+i,getmaxy()/2+30+35, 180,360, 17);
   delay(50);
   }
   z=0;
  /*******************WELCOME TO DIU ***************/

for(i=0;z<getmaxx()-10;i+=10)
 {
   cleardevice();
   rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
     x =  50;
     y =  75;
     line(x,y+y/6,x,y+y/2);//l1
     line(x,y+y/6,x,y);//l2
     line(x,y,x+x/2,y);//l3
     line(2*x,y+y/6,2*x,y+y/2);//l6
     line(2*x,y+y/2,2*x,y+y*5/6);//l7
      line(x,2*y,x+x/2,2*y);//l10
      line(x,y+y*5/6,x,2*y);//l11
      line(x,y+y*5/6,x,y+y/2);//l12
   line(2*x,y+y/6,x/2+x,y);//l14
    line(x+x/2,2*y,2*x,y+y*5/6);//l15
    // setfillstyle(SOLID_FILL,9);
    // floodfill(x-1,y-1,15);

      x = 105;
     line(x,y,x+25,y);//l3
     line(x+25,y,x+50,y);//l4
     line(x+25,2*y,x+50,2*y);//l9
     line(x,2*y,x+25,2*y);//l10
    line(x+25,y,x+25,y+y/2);//l21
    line(x+25,y+y/2,x+25,2*y);//l22

      x = 160;
     line(x,y+y/6,x,y+y/2);//l1
     line(x,y+y/6,x,y);//l2
     line(x+50,y,50+x,y+y/6);//l5
     line(x+50,y+y/6,x+50,y+y/2);//l6
    line(x+50,y+y/2,x+50,y+y*5/6);//l7
    line(x,y+y*5/6,x,y+y/2);//l12
     line(x,y+y*5/6,25+x,2*y);//l16
     line(x+25,2*y,x+50,y+y*5/6);//l15
     ellipse(-30,400,0, 180 ,getmaxx()+300, getmaxy()/2);
    line(0,500,getmaxx(),500);

   z=getmaxx()/2-200+60+i;
   poly[0]=getmaxx()/2-200-20+i;     //.
   poly[1]=getmaxy()/2;

   poly[2]=getmaxx()/2+20+i-200;     //............
   poly[3]=getmaxy()/2;

   poly[4]=getmaxx()/2+60+20+i-200;   //...
   poly[5]=getmaxy()/2+30;      //   .

   poly[6]=getmaxx()/2-200+60+20+i;
   poly[7]=getmaxy()/2+30+35;

   poly[8]=getmaxx()/2-20-60-200+i;
   poly[9]=getmaxy()/2+30+35;

   poly[10]=getmaxx()/2-200-60-20+i;
   poly[11]=getmaxy()/2+30;

   poly[12]=poly[0];
   poly[13]=poly[1];
   setfillstyle(SOLID_FILL,7);
   fillpoly(7,poly);

   arc(getmaxx()/2-200-40+i,getmaxy()/2+30+35, 180,360, 17);
   arc(getmaxx()/2-200+40+i,getmaxy()/2+30+35, 180,360, 17);
   delay(100);
}
   /***********************WELCOME to Diu tent city***********************/

  cleardevice();
  drawtent();

  poly[0]=getmaxx()/2-20+200;     //.
   poly[1]=getmaxy()/2+100+5;
   poly[2]=getmaxx()/2+20+200;     //............
   poly[3]=getmaxy()/2+100+5;

   poly[4]=getmaxx()/2+60+20-200+200+100+100;   //...
   poly[5]=getmaxy()/2+30+100+5;      //   .

   poly[6]=getmaxx()/2-200+60+20+200+100+100;
   poly[7]=getmaxy()/2+30+35+100+5;

   poly[8]=getmaxx()/2-20-60-200+200+100+100;
   poly[9]=getmaxy()/2+30+35+100+5;

   poly[10]=getmaxx()/2-200-60-20+200+100+100;
   poly[11]=getmaxy()/2+30+100+5;

   poly[12]=poly[0];
   poly[13]=poly[1];
   setfillstyle(SOLID_FILL,7);
   fillpoly(7,poly);

   arc(getmaxx()/2-200-40+200+100+100,getmaxy()/2+30+35+100+5, 180,360, 17);
   arc(getmaxx()/2-200+40+200+100+100,getmaxy()/2+30+35+100+5, 180,360, 17);
   delay(2000);

   /********PEOPLE COMING OUT OF IT!**********/

   cleardevice();
  drawtent();
  rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame

  normalwithdelay();
   delay(500);
   cleardevice();
  /********************IN JUMP****************/

  drawtent();
  normal();
  delay(500);
  cleardevice();
  drawtent();
  injump();
  delay(500);
 cleardevice();
  /******POST JUMP*****/

  drawtent();
  prepostjump();
  delay(500);
  cleardevice();
 /******POST JUMP NORMaL POSITION*******/
   drawtent();
  normal();
  delay(500);
  cleardevice();
/************************THE BEACH!!***********************/
//  cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,3);
   outtextxy(getmaxx()/2, getmaxy() / 2,"At the Beach!!");
   delay(1000);
   cleardevice();

for(i=getmaxx()-10;i>360;i=i-10)
{
   cleardevice();
    rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
    ellipse(30,-40,180,0 ,getmaxx()+300, getmaxy()/2);//sea
    arc(getmaxx()/2-40+200,getmaxy()/2+5,0,180,90);//umbrella
    ellipse(getmaxx()/2-40+200,getmaxy()/2+5,0,360,90,20);//umbrella-2

     line(getmaxx()/2+175,getmaxy()/2+105+15+5+10,getmaxx()/2+175+44,getmaxy()/2+105+15);
     line(getmaxx()/2+160+5,getmaxy()/2+105+15,getmaxx()/2+175,getmaxy()/2+105+15+5+10);
      setlinestyle(0,1,3);
    line(getmaxx()/2+160,getmaxy()/2+5,getmaxx()/2+155,getmaxy()/2+5+150);//umbrella stick
    setlinestyle(0,1,1);
  setfillstyle(SOLID_FILL,3);
  floodfill(30,12,15);
     setfillstyle(SOLID_FILL,12);
  floodfill(getmaxx()/2+160+4,getmaxy()/2+5+4,15);
     setfillstyle(SOLID_FILL,4);
   floodfill(getmaxx()/2+160+1,getmaxy()/2+5-21,15);
   floodfill(getmaxx()/2+160+1,getmaxy()/2+5-21-61,15);
  //aman

  ellipse(getmaxx()/2-40+200,getmaxy()/2+5+100,0,360,24,15);//body
    circle(getmaxx()/2+200+5,getmaxy()/2+105,20); //face
    circle(getmaxx()/2+200+5+2,getmaxy()/2+105+4,2); //eye-1
    circle(getmaxx()/2+200+5+2,getmaxy()/2+105-4,2); //eye-2
    line(getmaxx()/2+200-40-24,getmaxy()/2+5+105,getmaxx()/2+200-40-30-24,getmaxy()/2+5+105);
    line(getmaxx()/2+200-40-24,getmaxy()/2-5+105,getmaxx()/2+200-40-15-24,getmaxy()/2-5+105-15);
    line(getmaxx()/2+200-40-15-24,getmaxy()/2-5+105-15,getmaxx()/2+200-40-24-30,getmaxy()/2-5+105);

     line(getmaxx()/2+170,getmaxy()/2+105-15+5,getmaxx()/2+175,getmaxy()/2+105+5);
     line(getmaxx()/2+160+5,getmaxy()/2+105-15,getmaxx()/2+170,getmaxy()/2+105-15+5);

  //joy
   circle(120,335,20); //face
   line(120,355,120,405);//stick

   line(120,360,130,390);
   line(120,360,110,390);

   line(120,405,110,435);
   line(120,405,130,435);

   rectangle(115,325,120,328);
   rectangle(125,325,130,328);
   line(120-6,335+5,120+6,335+5);
  // k2
   circle(120+70,335,20); //face
   circle(120+70+5,335-10,3); //eye face
   circle(120+70-5,335-10,3); //eye face
   line(120+70,355,120+70,405);//stick
   arc(120+70,335+5,180,0,3);

   line(120+70,360,130+70,390);
   line(120+70,360,110+70,390);

   line(120+70,405,110+70,435);
   line(120+70,405,130+70,435);

   //harshil
   circle(120+140,335-10,20); //face
   line(120+140,355-10,120+140,405);//stick
   circle(120+70+5+70,335-5-10,3); //eye-1
   circle(120+70-5+70,335-5-10,3); //eye-1
   line(120+70+70-6,335,120+140+6,335);

   line(120+70+70,360-10,130+70+70,390);
   line(120+70+70,360-10,110+70+70,390);

   line(120+140,405,110+140,435);
   line(120+140,405,130+140,435);
   //karnik

   circle(120+210,335-10,20); //face
   arc(120+210,335-20-7,0,180,7);//bun;
   circle(120+210-5,335-5-10,3); //face
   circle(120+210+5,335-5-10,3); //face
   arc(120+210,335-5,180,0,6);
   line(120+210,355-10,120+210,405);//stick

   line(120+210,360-10,130+210,390);
   line(120+210,360-10,110+210,390);

   line(120+210,405,110+210,435);
   line(120+210,405,130+210,435);

   circle(i,335,20); //face
   circle(i+25,335-10,10);

   line(i,355,i+15,390);
   line(i,355,i-15,390);
   line(i-15,390,i+15,390);

   line(i,360,i+10+10,390);
   line(i,360,i-10-10,390);

   line(i-5,390,i-5,435);
   line(i+5,390,i+5,435);
   delay(100);
 }
/***************AFTER THE GIRL HOLDS HAND*********/

    cleardevice();
    rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
    ellipse(30,-40,180,0 ,getmaxx()+300, getmaxy()/2);//sea
    arc(getmaxx()/2-40+200,getmaxy()/2+5,0,180,90);//umbrella
    ellipse(getmaxx()/2-40+200,getmaxy()/2+5,0,360,90,20);//umbrella-2


     line(getmaxx()/2+175,getmaxy()/2+105+15+5+10,getmaxx()/2+175+44,getmaxy()/2+105+15);
     line(getmaxx()/2+160+5,getmaxy()/2+105+15,getmaxx()/2+175,getmaxy()/2+105+15+5+10);
    setlinestyle(0,1,3);
    line(getmaxx()/2+160,getmaxy()/2+5,getmaxx()/2+155,getmaxy()/2+5+150);//umbrella stick
  setlinestyle(0,1,1);
    setfillstyle(SOLID_FILL,3);
  floodfill(30,12,15);
     setfillstyle(SOLID_FILL,12);
  floodfill(getmaxx()/2+160+4,getmaxy()/2+5+4,15);
     setfillstyle(SOLID_FILL,4);
   floodfill(getmaxx()/2+160+1,getmaxy()/2+5-21,15);
   floodfill(getmaxx()/2+160+1,getmaxy()/2+5-21-61,15);

  //aman
    settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,1);
   outtextxy(getmaxx()/2+205, getmaxy() / 2-55+100,"Huh..Moh Maya!");
    ellipse(getmaxx()/2-40+200,getmaxy()/2+5+100,0,360,24,15);//body
    circle(getmaxx()/2+200+5,getmaxy()/2+105,20); //face
    circle(getmaxx()/2+200+5+2,getmaxy()/2+105+4,2); //eye-1
    circle(getmaxx()/2+200+5+2,getmaxy()/2+105-4,2); //eye-2
    line(getmaxx()/2+200-40-24,getmaxy()/2+5+105,getmaxx()/2+200-40-30-24,getmaxy()/2+5+105);
    line(getmaxx()/2+200-40-24,getmaxy()/2-5+105,getmaxx()/2+200-40-15-24,getmaxy()/2-5+105-15);
    line(getmaxx()/2+200-40-15-24,getmaxy()/2-5+105-15,getmaxx()/2+200-40-24-30,getmaxy()/2-5+105);

     line(getmaxx()/2+170,getmaxy()/2+105-15+5,getmaxx()/2+175,getmaxy()/2+105+5);
     line(getmaxx()/2+160+5,getmaxy()/2+105-15,getmaxx()/2+170,getmaxy()/2+105-15+5);

  //joy
   circle(120,335,20); //face
   line(120,355,120,405);//stick
   line(120,360,130,390);
   line(120,360,110,390);
   line(120,405,110,435);
   line(120,405,130,435);
   rectangle(115,325,120,328);
   rectangle(125,325,130,328);
   line(120-6,335+5,120+6,335+5);
  // k2
   circle(120+70,335,20); //face
   circle(120+70+5,335-10,3); //face
   circle(120+70-5,335-10,3); //face
   line(120+70,355,120+70,405);//stick
   ellipse(120+70,335+10,0,360,3,5);

   line(120+70,360,130+70,390);
   line(120+70,360,110+70,390);

   line(120+70,405,110+70,435);
   line(120+70,405,130+70,435);

   //harshil
   circle(120+140,335-10,20); //face
   line(120+140,355-10,120+140,405);//stick
   //circle(120+70+5,335-10,3); //face
   arc(120+70+70+5,335-5-10,0,180,3);//eye-2
   circle(120+70-5+70,335-5-10,3); //eye-1
   ellipse(120+70+70,335+10-10,135,0,5,3);
   line(120+70+70,360-10,130+70+70,390);
   line(120+70+70,360-10,110+70+70,390);
   //karnik
   line(120+140,405,110+140,435);
   line(120+140,405,130+140,435);
   circle(120+210,335-10,20); //face
   arc(120+210,335-20-7,0,180,7);//bun
   circle(120+210-5,335-5-10,3); //face
   circle(120+210+5,335-5-10,3); //face
   arc(120+210,335-5,180,0,6);
   line(120+210-6,335-5,120+210+6,335-5);
   line(120+210,355-10,120+210,405);//stick

   line(120+210,360-10,130+210,390);
   line(120+210,360-10,110+210,390);

   line(120+210,405,110+210,435);
   line(120+210,405,130+210,435);

  //a girl
   circle(120+280-40,335,20); //face
   circle(120+280-40+25,335-10,10);

   line(120+280-40,355,135+280-40,390);
   line(120+280-40,355,105+280-40,390);
   line(105+280-40,390,135+280-40,390);

   line(120+280-40,360,130+280+10-40,390);
   line(120+280-40,360,110+280-10-40,390);

   line(115+280-40,390,115+280-40,435);
   line(125+280-40,390,125+280-40,435);
   circle(i,335,20); //face
   circle(i+25,335-10,10);

   line(i,355,i+15,390);
   line(i,355,i-15,390);
   line(i-15,390,i+15,390);

   line(i,360,i+10+10,390);
   line(i,360,i-10-10,390);

   line(i-5,390,i-5,435);
   line(i+5,390,i+5,435);

 delay(1000);
   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Karnik found his true love");
   delay(1500);
   cleardevice();
   //cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Playing beach Volleyball");
   delay(1000);
   cleardevice();

/**************VOLLEYBALL***********************************/
  for(i=1;i<15;i++)
 {
 cleardevice();
  setlinestyle(0,1,3);
 line(120+210+26,305,120+210+26,getmaxy()-10);
 line(120+210+26+20,105,120+210+26+20,getmaxy()-10-200);
 setlinestyle(0,1,1);
 line(120+210+26+20,105,120+210+26,305);
 line(330+26+20,105+70,330+26,305+70);
 setlinestyle(0,1,3);
 circle(145+5+i*i,325-150-15-5-8*i,15);
 setfillstyle(SOLID_FILL,14);
 floodfill(145+5+i*i+1,325-150-15-4-8*i,15);

 setlinestyle(0,1,1);

   circle(120,335-150,20); //face
   line(120,355-150,120,405-150);//stick

   line(120,360-150,165,340-150);
   line(165,340-150,145,325-150);

   line(120,360-150,110,390-150);

   line(120,405-150,110,435-150);
   line(120,405-150,130,435-150);

  // k2
   circle(120+70,335,20); //face
   line(120+70,355,120+70,405);//stick

   line(120+70,360,130+70,390);
   line(120+70,360,110+70,390);

   line(120+70,405,110+70,435);
   line(120+70,405,130+70,435);
   //harshil

   circle(120+140,335-10-75,20); //face
   line(120+140,355-10-75,120+140,405-75);//stick

   line(120+70+70,360-10-75,130+70+70,390-75);
   line(120+70+70,360-10-75,110+70+70,390-75);

   line(120+140,405-75,110+140,435-75);
   line(120+140,405-75,130+140,435-75);
   //karnik

   circle(120+210+150,335-10,20); //face
   circle(120+230+150,315-10,10);
   line(120+210+150,355-10,120+210+150,405);//stick

   line(120+210+150,360-10,130+210+150,390);
   line(120+210+150,360-10,110+210+150,390);

   line(120+210+150,405,110+210+150,435);
   line(120+210+150,405,130+210+150,435);

  //rutvi
   circle(120+280+150,335-75,20); //face
   line(120+280+150,355-75,135+280+150,390-75);
   line(120+280+150,355-75,105+280+150,390-75);
   line(105+280+150,390-75,135+280+150,390-75);

   line(120+280+150,360-75,130+280+10+150,390-75);
   line(120+280+150,360-75,110+280-10+150,390-75);

   line(115+280+150,390-75,115+280+150,435-75);
   line(125+280+150,390-75,125+280+150,435-75);
   //aman

   circle(120+210+150,335-150,20); //face
   ellipse(120+210+150,380-150, 0, 360,15,24);

   line(120+210+150,360-150-5,380+120+10,380-150);
   line(120+210+150,360-150-5,120+210+150-20,380-150);


   line(115+210+150,390-150+14,115+210+150,435-150);
   line(125+210+150,390-150+14,125+210+150,435-150);

   delay(200);
 }
 /******************************/
  for(i=1;i<20;i++)
  {
   cleardevice();
  setlinestyle(0,1,3);
 line(120+210+26,305,120+210+26,getmaxy()-10);
 line(120+210+26+20,105,120+210+26+20,getmaxy()-10-200);
 setlinestyle(0,1,1);
 line(120+210+26+20,105,120+210+26,305);
 line(330+26+20,105+70,330+26,305+70);
 setlinestyle(0,1,3);

 circle(145+5+225+16*i,325-150-15-5-8*15+i*i,15);
 setfillstyle(SOLID_FILL,14);
 floodfill(145+5+225+16*i+1,325-150-15-8*15+i*i+1,15);

  setlinestyle(0,1,1);
  circle(120,335-150,20); //face
   line(120,355-150,120,405-150);//stick
   line(120,360-150,130,390-150);
   line(120,360-150,110,390-150);
   line(120,405-150,110,435-150);
   line(120,405-150,130,435-150);
  // k2
   circle(120+70,335,20); //face
   line(120+70,355,120+70,405);//stick

   line(120+70,360,130+70,390);
   line(120+70,360,110+70,390);

   line(120+70,405,110+70,435);
   line(120+70,405,130+70,435);
   //harshil

   circle(120+140,335-10-75,20); //face
   line(120+140,355-10-75,120+140,405-75);//stick

   line(120+70+70,360-10-75,130+70+70,390-75);
   line(120+70+70,360-10-75,110+70+70,390-75);

   line(120+140,405-75,110+140,435-75);
   line(120+140,405-75,130+140,435-75);
   //karnik

   circle(120+210+150,335-10,20); //face
   circle(120+230+150,315-10,10);
   line(120+210+150,355-10,120+210+150,405);//stick

   line(120+210+150,360-10,130+210+150,390);
   line(120+210+150,360-10,110+210+150,390);

   line(120+210+150,405,110+210+150,435);
   line(120+210+150,405,130+210+150,435);

  //rutvi
   circle(120+280+150,335-75,20); //face
   line(120+280+150,355-75,135+280+150,390-75);
   line(120+280+150,355-75,105+280+150,390-75);
   line(105+280+150,390-75,135+280+150,390-75);

   line(120+280+150,360-75,130+280+10+150,390-75);
   line(120+280+150,360-75,110+280-10+150,390-75);

   line(115+280+150,390-75,115+280+150,435-75);
   line(125+280+150,390-75,125+280+150,435-75);
   //aman

   circle(120+210+150,335-150,20); //face
   ellipse(120+210+150,380-150, 0, 360,15,24);

   line(120+210+150,360-150,165+210+150,340-150);
   line(165+210+150,340-150,145+210+150,325-150);
   line(120+210+150,360-150,75+210+150,340-150);
   line(75+210+150,340-150,95+210+150,325-150);

   line(115+210+150,390-150+14,115+210+150,435-150);
   line(125+210+150,390-150+14,125+210+150,435-150);

   delay(200);
}
  cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Ball goes into the sea");
   delay(1000);
   cleardevice();
   // cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Everyone is pissed at JOY");
   delay(1000);
   cleardevice();

/*********************AFTER JOY Fumbles *********************/

for(i=0,j=0;i<70 && j<70;i++,j++)     //x-axis
{
   cleardevice();
   circle(120,335-150,20); //face
   line(120,355-150,120,405-150);//stick
   line(120,360-150,130,390-150);
   line(120,360-150,110,390-150);
   line(120,405-150,110,435-150);
   line(120,405-150,130,435-150);
   arc(120,335-150+8,0,180,5);
  // k2
   circle(120+70-i,335-j,20); //face
   line(120+70-i,355-j,120+70-i,405-j);//stick

   line(120+70-i,360-j,130+70-i,390-j);
   line(120+70-i,360-j,110+70-i,390-j);

   line(120+70-i,405-j,110+70-i,435-i);
   line(120+70-i,405-j,130+70-i,435-j);
   //harshil

   circle(120+140-2*i,335-10-75-2*j,20); //face
   line(120+140-2*i,355-10-75-2*j,120+140-2*i,405-75-2*j);//stick

   line(120+70+70-2*i,360-10-75-2*j,130+70+70-2*i,390-75-2*j);
   line(120+70+70-2*i,360-10-75-2*j,110+70+70-2*i,390-75-2*j);

   line(120+140-2*i,405-75-2*j,110+140-2*i,435-75-2*j);
   line(120+140-2*i,405-75-2*j,130+140-2*i,435-75-2*j);
   //karnik

   circle(120+210+150-3*i,335-10-3*j,20); //face
   circle(120+230+150-3*i,315-10-3*j,10);
   line(120+210+150-3*i,355-10-3*j,120+210+150-3*i,405-3*j);//stick

   line(120+210+150-3*i,360-10-3*j,130+210+150-3*i,390-3*j);
   line(120+210+150-3*i,360-10-3*j,110+210+150-3*i,390-3*j);

   line(120+210+150-3*i,405-3*j,110+210+150-3*i,435-3*j);
   line(120+210+150-3*i,405-3*j,130+210+150-3*i,435-3*j);

  //rutvi
   circle(120+280+150-7*i,335-75-2*j,20); //face
   line(120+280+150-7*i,355-75-2*j,135+280+150-7*i,390-75-2*j);
   line(120+280+150-7*i,355-75-2*j,105+280+150-7*i,390-75-2*j);
   line(105+280+150-7*i,390-75-2*j,135+280+150-7*i,390-75-2*j);

   line(120+280+150-7*i,360-75-2*j,130+280+10+150-7*i,390-75-2*j);
   line(120+280+150-7*i,360-75-2*j,110+280-10+150-7*i,390-75-2*j);

   line(115+280+150-7*i,390-75-2*j,115+280+150-7*i,435-75-2*j);
   line(125+280+150-7*i,390-75-2*j,125+280+150-7*i,435-75-2*j);
   //aman

   circle(120+210+150-4*i,335-150,20); //face
   //line(120+420,355,120+420,405);//stick
   ellipse(120+210+150-4*i,380-150, 0, 360,15,24);
   line(120+210+150-4*i,360-150-5,380+120+10-4*i,380-150);
   line(120+210+150-4*i,360-150-5,120+210+150-20-4*i,380-150);

   line(115+210+150-4*i,390-150+14,115+210+150-4*i,435-150);
   line(125+210+150-4*i,390-150+14,125+210+150-4*i,435-150);
   delay(100);
}
  cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"Joy gets beaten up!");
   delay(1000);
   cleardevice();
   //cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,3);
   outtextxy(getmaxx()/2, getmaxy() / 2,"We leave diu..");
   delay(1000);
   cleardevice();

   //  cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"To admit joy to hospital");
   delay(1000);
   cleardevice();

/****************RETURN JOURNEY******************************/

z=getmaxx();
for(i=0;z>10;i-=10)
{
 z=getmaxx()/2+200-20+i;
  cleardevice();
  drawtent();
  poly[0]=getmaxx()/2-20+200+i;     //.
   poly[1]=getmaxy()/2+100+5;
   poly[2]=getmaxx()/2+20+200+i;     //............
   poly[3]=getmaxy()/2+100+5;

   poly[4]=getmaxx()/2+60+20+200+i;   //...
   poly[5]=getmaxy()/2+30+100+5;      //   .

   poly[6]=getmaxx()/2+60+20+200+i;
   poly[7]=getmaxy()/2+30+35+100+5;

   poly[8]=getmaxx()/2-20-60+200+i;
   poly[9]=getmaxy()/2+30+35+100+5;

   poly[10]=getmaxx()/2-60-20+200+i;
   poly[11]=getmaxy()/2+30+100+5;

   poly[12]=poly[0];
   poly[13]=poly[1];
   setfillstyle(SOLID_FILL,7);
   fillpoly(7,poly);

   arc(getmaxx()/2-40+200+i,getmaxy()/2+30+35+100+5, 180,360, 17);
   arc(getmaxx()/2+40+200+i,getmaxy()/2+30+35+100+5, 180,360, 17);
   delay(100);

}
/************BYE DIU********************/
z=getmaxx();
for(i=0;z>10;i-=10)
{
	z=getmaxx()/2+200-20+i;
  cleardevice();
 // d
   x =  50;
     y =  75;
     line(x,y+y/6,x,y+y/2);//l1
     line(x,y+y/6,x,y);//l2
     line(x,y,x+x/2,y);//l3
     line(2*x,y+y/6,2*x,y+y/2);//l6
     line(2*x,y+y/2,2*x,y+y*5/6);//l7
      line(x,2*y,x+x/2,2*y);//l10
      line(x,y+y*5/6,x,2*y);//l11
      line(x,y+y*5/6,x,y+y/2);//l12
   line(2*x,y+y/6,x/2+x,y);//l14
    line(x+x/2,2*y,2*x,y+y*5/6);//l15
     //i
      x = 105;
     line(x,y,x+25,y);//l3
     line(x+25,y,x+50,y);//l4
     line(x+25,2*y,x+50,2*y);//l9
     line(x,2*y,x+25,2*y);//l10
    line(x+25,y,x+25,y+y/2);//l21
    line(x+25,y+y/2,x+25,2*y);//l22
     //u
     x = 160;
     line(x,y+y/6,x,y+y/2);//l1
     line(x,y+y/6,x,y);//l2
     line(x+50,y,50+x,y+y/6);//l5
     line(x+50,y+y/6,x+50,y+y/2);//l6
    line(x+50,y+y/2,x+50,y+y*5/6);//l7
    line(x,y+y*5/6,x,y+y/2);//l12
     line(x,y+y*5/6,25+x,2*y);//l16
     line(x+25,2*y,x+50,y+y*5/6);//l15
     ellipse(-30,400,0, 180 ,getmaxx()+300, getmaxy()/2);
    line(0,500,getmaxx(),500);

  poly[0]=getmaxx()/2-20+200+i;     //.
   poly[1]=getmaxy()/2+100+5;
   poly[2]=getmaxx()/2+20+200+i;     //............
   poly[3]=getmaxy()/2+100+5;

   poly[4]=getmaxx()/2+60+20+200+i;   //...
   poly[5]=getmaxy()/2+30+100+5;      //   .

   poly[6]=getmaxx()/2+60+20+200+i;
   poly[7]=getmaxy()/2+30+35+100+5;

   poly[8]=getmaxx()/2-20-60+200+i;
   poly[9]=getmaxy()/2+30+35+100+5;

   poly[10]=getmaxx()/2-60-20+200+i;
   poly[11]=getmaxy()/2+30+100+5;

   poly[12]=poly[0];
   poly[13]=poly[1];
   setfillstyle(SOLID_FILL,7);
   fillpoly(7,poly);

   arc(getmaxx()/2-40+200+i,getmaxy()/2+30+35+100+5, 180,360, 17);
   arc(getmaxx()/2+40+200+i,getmaxy()/2+30+35+100+5, 180,360, 17);
   delay(100);

}
/************Stop for a photo*************/
z=getmaxx();
for(i=0;z>getmaxx()/2;i-=10)
{
   cleardevice();
  rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
   line(getmaxx()-10,400,0,400);
   setfillstyle(SOLID_FILL,8);
   floodfill(getmaxx()-34,403,15);
   settextjustify(1,1);
   settextstyle(5,0,4);
   setcolor(15);
   outtextxy(495,58,"Diu 450->");

   rectangle(450,50,getmaxx()-20,75);
   setcolor(15);
   line(getmaxx()-10,150,0,150);
   setlinestyle(0,1,3);
   line(490+30,75,490+30,150);
  //line(120+210+26+20,105,120+210+26+20,getmaxy()-10-200);
   setlinestyle(0,1,1);
    setfillstyle(SOLID_FILL,2);
   floodfill(455,55,15);
   setfillstyle(SOLID_FILL,3);
   floodfill(12,12,15);

  z=getmaxx()/2+200-20+i;


  poly[0]=getmaxx()/2-20+200+i;     //.
   poly[1]=getmaxy()/2+100+5-50;
   poly[2]=getmaxx()/2+20+200+i;     //............
   poly[3]=getmaxy()/2+100+5-50;

   poly[4]=getmaxx()/2+60+20+200+i;   //...
   poly[5]=getmaxy()/2+30+100+5-50;      //   .

   poly[6]=getmaxx()/2+60+20+200+i;
   poly[7]=getmaxy()/2+30+35+100+5-50;

   poly[8]=getmaxx()/2-20-60+200+i;
   poly[9]=getmaxy()/2+30+35+100+5-50;

   poly[10]=getmaxx()/2-60-20+200+i;
   poly[11]=getmaxy()/2+30+100+5-50;

   poly[12]=poly[0];
   poly[13]=poly[1];
   setfillstyle(SOLID_FILL,7);
   fillpoly(7,poly);

   arc(getmaxx()/2-40+200+i,getmaxy()/2+30+35+100+5-50, 180,360, 17);
   arc(getmaxx()/2+40+200+i,getmaxy()/2+30+35+100+5-50, 180,360, 17);
   //delay(100);
    setfillstyle(SOLID_FILL,8);
   floodfill(getmaxx()-34,403,15);


   delay(100);
   }
   delay(1000);
   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"We halt for nature's call");
   delay(1000);
   cleardevice();


  /****************/
   rectangle(10,10,getmaxx()-10,getmaxy()-10);//frame
   line(getmaxx()-10,400,0,400);
   settextjustify(1,1);
   settextstyle(5,0,4);
   outtextxy(495,58,"Diu 450->");

   rectangle(450,50,getmaxx()-20,75);
   line(getmaxx()-10,150,0,150);


   poly[0]=getmaxx()/2-20+200+i;     //.
   poly[1]=getmaxy()/2+100+5-50;
   poly[2]=getmaxx()/2+20+200+i;     //............
   poly[3]=getmaxy()/2+100+5-50;

   poly[4]=getmaxx()/2+60+20+200+i;   //...
   poly[5]=getmaxy()/2+30+100+5-50;      //   .

   poly[6]=getmaxx()/2+60+20+200+i;
   poly[7]=getmaxy()/2+30+35+100+5-50;

   poly[8]=getmaxx()/2-20-60+200+i;
   poly[9]=getmaxy()/2+30+35+100+5-50;

   poly[10]=getmaxx()/2-60-20+200+i;
   poly[11]=getmaxy()/2+30+100+5-50;

   poly[12]=poly[0];
   poly[13]=poly[1];
   setfillstyle(SOLID_FILL,7);
   fillpoly(7,poly);

   arc(getmaxx()/2-40+200+i,getmaxy()/2+30+35+100+5-50, 180,360, 17);
   arc(getmaxx()/2+40+200+i,getmaxy()/2+30+35+100+5-50, 180,360, 17);
   delay(500);

   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2, getmaxy() / 2,"We click our first group photo");
   delay(1500);
   cleardevice();

   /*********Picture displayed*********/
   cleardevice();
   ShowBMP(150,100,"pic1.bmp");
   delay(3000);
   /**************Text displayed************************/
   cleardevice();
   settextjustify(1,1);
   setcolor(15);
   settextstyle(DEFAULT_FONT,0,2);
   outtextxy(getmaxx()/2-20,getmaxy()/2-120,"Diu!");
   outtextxy(getmaxx()/2-40,getmaxy()/2-15,"A journey of friendship");
   outtextxy(getmaxx()/2-30,getmaxy()/2+100,"with friends");
 //  delay(1500);
  // cleardevice();
getch();
closegraph();
}