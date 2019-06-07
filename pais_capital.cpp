#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_message.H>
#include <iostream> 
#include <stdio.h>
#include <string.h>

//clase que hace los botones para los paises
class Paises:public Fl_Window {
	Fl_Button *pais1;
	Fl_Button *pais2;
	Fl_Button *pais3;
	Fl_Button *pais4;
	Fl_Button *pais5;
	Fl_Button *cerrar;
	int n;

public:

	Paises() : Fl_Window(750,500) {
		begin();

		srand(time(NULL));
		n=1+rand()%4;

		if(n==1)
		{
	   	pais1  =new Fl_Button(100, 100, 90, 100,"Filipinas");//Manila
	   	pais2  =new Fl_Button(500, 100, 90, 100,"Alemania");//Berlin
	   	pais3  =new Fl_Button(500, 300, 90, 100,"Guatemala");//Ciudad de Guatemala	   
	   	pais4  =new Fl_Button(100, 300, 90, 100,"Tonga");//Nukualofa
	   	pais5  =new Fl_Button(300, 200, 90, 100,"Zambia");//Lusaka
	   	cerrar  =new Fl_Button(300, 400, 90, 50,"Cerrar");

	//color para las letras	
	pais1->labelcolor(FL_WHITE);
	pais2->labelcolor(FL_WHITE);
	pais3->labelcolor(FL_WHITE);
	pais4->labelcolor(FL_WHITE);
	pais5->labelcolor(FL_WHITE);

	//color de los botones
	pais1->color(FL_BLACK);
	pais2->color(FL_BLACK);
	pais3->color(FL_BLACK);
	pais4->color(FL_BLACK);
	pais5->color(FL_BLACK);
	cerrar->color(FL_GREEN);

	}
	
	if(n==2)
	{
	   pais1  =new Fl_Button(100, 100, 90, 100,"Brasil");
	   pais2  =new Fl_Button(500, 100, 90, 100,"Espania");
	   pais3  =new Fl_Button(500, 300, 90, 100,"El Salvador");
	   pais4  =new Fl_Button(100, 300, 90, 100,"Argentina");
	   pais5  =new Fl_Button(300, 200, 90, 100,"Mexico");
	   cerrar  =new Fl_Button(300, 400, 90, 50,"Cerrar");

	//color para las letras	
	pais1->labelcolor(FL_WHITE);
	pais2->labelcolor(FL_WHITE);
	pais3->labelcolor(FL_WHITE);
	pais4->labelcolor(FL_WHITE);
	pais5->labelcolor(FL_WHITE);

	//color de los botones
	pais1->color(FL_BLACK);
	pais2->color(FL_BLACK);
	pais3->color(FL_BLACK);
	pais4->color(FL_BLACK);
	pais5->color(FL_BLACK);
	cerrar->color(FL_GREEN);


	}

	if(n==3)
	{
	   pais1  =new Fl_Button(100, 100, 90, 100,"Mayotte");//Mamoudzou
	   pais2  =new Fl_Button(500, 100, 90, 100,"Trinidad y tobago");//Puerto Espania
	   pais3  =new Fl_Button(500, 300, 90, 100,"Chipre");//Nicosia
	   pais4  =new Fl_Button(100, 300, 90, 100,"Peru");//Lima
	   pais5  =new Fl_Button(300, 200, 90, 100,"India");//Nueva Deli
	   cerrar  =new Fl_Button(300, 400, 90, 50,"Cerrar");

	//color para las letras	
	pais1->labelcolor(FL_WHITE);
	pais2->labelcolor(FL_WHITE);
	pais3->labelcolor(FL_WHITE);
	pais4->labelcolor(FL_WHITE);
	pais5->labelcolor(FL_WHITE);

	//color de los botones
	pais1->color(FL_BLACK);	
	pais2->color(FL_BLACK);
	pais3->color(FL_BLACK);
	pais4->color(FL_BLACK);
	pais5->color(FL_BLACK);
	cerrar->color(FL_GREEN);


	}
	
	if(n==4)
	{
	   pais1  =new Fl_Button(100, 100, 90, 100,"Panama");//Panama
	   pais2  =new Fl_Button(500, 100, 90, 100,"Francia");//Paris
	   pais3  =new Fl_Button(500, 300, 90, 100,"Nigeria");//Abuya
	   pais4  =new Fl_Button(100, 300, 90, 100,"Iraq");//Bagdad
	   pais5  =new Fl_Button(300, 200, 90, 100,"Japon");//Tokio
	   cerrar  =new Fl_Button(300, 400, 90, 50,"Cerrar");

	//color para las letras	
	pais1->labelcolor(FL_WHITE);
	pais2->labelcolor(FL_WHITE);
	pais3->labelcolor(FL_WHITE);
	pais4->labelcolor(FL_WHITE);
	pais5->labelcolor(FL_WHITE);

	//color de los botones
	pais1->color(FL_BLACK);
	pais2->color(FL_BLACK);
	pais3->color(FL_BLACK);
	pais4->color(FL_BLACK);
	pais5->color(FL_BLACK);
	cerrar->color(FL_GREEN);

	}

	
	end();
	pais1->callback(Button_CB, (void*)this);
	pais2->callback(Button_CB, (void*)this);
	pais3->callback(Button_CB, (void*)this);
	pais4->callback(Button_CB, (void*)this);
	pais5->callback(Button_CB, (void*)this);
	cerrar->callback(Button_CB, (void*)this);


 }


static void Button_CB(Fl_Widget *w, void *data) {

	if ( strcmp(w->label(), "El Salvador") == 0 ) {

	fl_message("%s: %s", "Capital","San Salvador");
	}

	if ( strcmp(w->label(), "Brasil") == 0 ) {

	fl_message("%s: %s", "Capital","Brasilia");
	}

	if ( strcmp(w->label(), "Mexico") == 0 ) {
	fl_message("%s: %s", "Capital","Ciudad de Mexico");
	}

	if ( strcmp(w->label(), "Argentina") == 0 ) {

	fl_message("%s: %s", "Capital","Buenos Aires");
	}

	if ( strcmp(w->label(), "Espania") == 0 ) {

	fl_message("%s: %s", "Capital","Madrid");
	}
//*******************************************************
	if ( strcmp(w->label(), "Filipinas") == 0 ) {

	fl_message("%s: %s", "Capital","Manila");
	}

	if ( strcmp(w->label(), "Alemania") == 0 ) {

	fl_message("%s: %s", "Capital","Berlin");
	}

	if ( strcmp(w->label(), "Guatemala") == 0 ) {
	fl_message("%s: %s", "Capital","Ciudad de Guatemala");
	}

	if ( strcmp(w->label(), "Tonga") == 0 ) {

	fl_message("%s: %s", "Capital","Nukualofa");
	}

	if ( strcmp(w->label(), "Zambia") == 0 ) {

	fl_message("%s: %s", "Capital","Lukasa");
	}
//*********************************************************
	if ( strcmp(w->label(), "Mayotte") == 0 ) {

	fl_message("%s: %s", "Capital","Mamoudzou");
	}

	if ( strcmp(w->label(), "Trinidad y tobago") == 0 ) {

	fl_message("%s: %s", "Capital","Puerto Espania");
	}

	if ( strcmp(w->label(), "Chipre") == 0 ) {
	fl_message("%s: %s", "Capital","Nicosia");
	}

	if ( strcmp(w->label(), "Peru") == 0 ) {

	fl_message("%s: %s", "Capital","Lima");
	}

	if ( strcmp(w->label(), "India") == 0 ) {

	fl_message("%s: %s", "Capital","Nueva Deli");
	}
//*********************************************************
	if ( strcmp(w->label(), "Panama") == 0 ) {

	fl_message("%s: %s", "Capital","Panama");
	}

	if ( strcmp(w->label(), "Francia") == 0 ) {

	fl_message("%s: %s", "Capital","Paris");
	}

	if ( strcmp(w->label(), "Nigeria") == 0 ) {
	fl_message("%s: %s", "Capital","Abuya");
	}

	if ( strcmp(w->label(), "Iraq") == 0 ) {

	fl_message("%s: %s", "Capital","Bagdad");
	}

	if ( strcmp(w->label(), "Japon") == 0 ) {

	fl_message("%s: %s", "Capital","Tokio");
	}
//*********************************************************

	if ( strcmp(w->label(), "Cerrar") == 0 ) {

	Paises *p = (Paises*)data;
	 p->hide();
	}

}


}; //fin de la clase


int main(int argc, char **argv) 
{
	Paises *p = new Paises();
	p->show();
	

return Fl::run();
}
