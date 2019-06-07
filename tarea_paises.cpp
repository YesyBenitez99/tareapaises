#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_message.H>
#include <iostream> 

class Paises:public Fl_Window {

Fl_Button	*paises1;
Fl_Button	*paises2;
Fl_Button	*paises3;
Fl_Button	*paises4;
Fl_Button	*paises5;
Fl_Button	*cerrar;
int r;

public:

Paises() : Fl_Window(750,500) {

	srand(time(NULL));
	r=1+rand()%3;

	begin();

	if(r==1)
	{
	   paises1  =new Fl_Button(100, 100, 110, 100,"El Salvador");
	   paises2  =new Fl_Button(500, 100, 110, 100,"Corea del sur");
	   paises3  =new Fl_Button(100, 300, 110, 100,"Japon");
	   paises4  =new Fl_Button(500, 300, 110, 100,"Argentina");
	   paises5  =new Fl_Button(300, 100, 110, 100,"China");
	   cerrar  =new Fl_Button(300, 400, 90, 50,"Cerrar");

	}
	
	if(r==2)
	{
	   paises1  =new Fl_Button(500, 100, 110, 100,"El Salvador");
	   paises2  =new Fl_Button(100, 100, 110, 100,"Corea del sur");
	   paises3  =new Fl_Button(300, 100, 110, 100,"Japon");
	   paises4  =new Fl_Button(100, 300, 110, 100,"Argentina");
	   paises5  =new Fl_Button(500, 300, 110, 100,"China");
	   cerrar  =new Fl_Button(300, 400, 90, 50,"Cerrar");

	}

	if(r==3)
	{
	   paises1  =new Fl_Button(100, 300, 110, 100,"El Salvador");
	   paises2  =new Fl_Button(500, 300, 110, 100,"Corea del sur");
	   paises3  =new Fl_Button(100, 100, 110, 100,"Japon");
	   paises4  =new Fl_Button(300, 100, 110, 100,"Argentina");
	   paises5  =new Fl_Button(500, 100, 110, 100,"China");
	   cerrar  =new Fl_Button(300, 440, 90, 50,"Cerrar");

	}
	//color de letra
	paises1->labelcolor(FL_WHITE);
	paises2->labelcolor(FL_BLACK);
	paises3->labelcolor(FL_RED);
	paises4->labelcolor(FL_BLACK);
	paises5->labelcolor(FL_YELLOW);	

	//color del boton
	paises1->color(FL_BLUE);
	paises2->color(FL_MAGENTA);
	paises3->color(FL_WHITE);
	paises4->color(FL_CYAN);
	paises5->color(FL_RED);
	cerrar->color(FL_RED);	

	end();
	paises1->callback(Button_CB1, (void*)this);
	paises2->callback(Button_CB2, (void*)this);
	paises3->callback(Button_CB3, (void*)this);
	paises4->callback(Button_CB4, (void*)this);
	paises5->callback(Button_CB5, (void*)this);
	cerrar->callback(Button_CB6, (void*)this);
	
	
 }


static void Button_CB1(Fl_Widget *W, void *data) {
	fl_message("%s: %s", "Capital","San Salvador");
}
static void Button_CB2(Fl_Widget *W, void *data) {
	fl_message("%s: %s", "Capital","Seul");
}
static void Button_CB3(Fl_Widget *W, void *data) {
	fl_message("%s: %s", "Capital","Tokio");
}
static void Button_CB4(Fl_Widget *W, void *data) {
	fl_message("%s: %s", "Capital","Buenos Aires");
}
static void Button_CB5(Fl_Widget *W, void *data) {
	fl_message("%s: %s", "Capital","Pekin");
}
static void Button_CB6(Fl_Widget *W, void *data) {
	Paises *p = (Paises*)data;
	 p->hide();
}


}; //fin de la clase


int main(int argc, char **argv) 
{
	Paises *p = new Paises();
	p->show();
	

return Fl::run();
}
