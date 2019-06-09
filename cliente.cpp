//William Alexander Chavez Marquez
//Carnet:CM18064
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_message.H>
#include <FL/Fl_Round_Button.H>
#include <stdio.h>
#include <string.h>

//difine el nombre del txt donde se guardaran los datos
#define ARCHIVO "Cliente.txt"

//clase cliente
class Cliente: public Fl_Window 
{
	Fl_Input *entrada1;
	Fl_Input *entrada2;
	Fl_Input *entrada3;
	Fl_Input *entrada6;
	Fl_Input *entrada7;
	Fl_Input *entrada8;
	Fl_Round_Button *entrada4;
	Fl_Round_Button *entrada5;
	Fl_Button *b1;
	Fl_Button *b2;

	public:
		Cliente() : Fl_Window(500,250) {
             	begin();

               	entrada1= new Fl_Input(90,20,200,25,"DUI: ");
               	entrada2= new Fl_Input(90,45,200,25,"NOMBRE: ");
               	entrada3= new Fl_Input(90,65,200,25,"APELLIDO: ");
		entrada6= new Fl_Input(90,85,200,25,"TELEFONO: ");
               	entrada4= new Fl_Round_Button(90, 95, 40, 40, "F ");
                entrada5= new Fl_Round_Button(170, 95, 40, 40, "M ");
		entrada7= new Fl_Input(90,125,200,25, "DIRECCION: ");
		entrada8= new Fl_Input(90,145,200,25, "CORREO: ");
               	b1= new Fl_Button(90,180,100,25,"Guardar");
               	b2= new Fl_Button(210,180,100,25,"Salir");
               	b1->color(FL_RED);
		b2->color(FL_RED);
		entrada1->color(FL_MAGENTA);
		entrada2->color(FL_MAGENTA);
		entrada3->color(FL_MAGENTA);
		entrada4->color(FL_MAGENTA);
		entrada5->color(FL_MAGENTA);
		entrada6->color(FL_MAGENTA);
		entrada7->color(FL_MAGENTA);
		entrada8->color(FL_MAGENTA);
	     	end();

		b1->callback(Boton_CB, (void*)this);
             	b2->callback(Boton_CB, (void*)this);
             	entrada4->callback(Boton_CB, (void*)this);
             	entrada5->callback(Boton_CB, (void*)this);
       
 } 


static void Boton_CB(Fl_Widget *a, void *data) {
	Cliente *e = (Cliente*)data;
	//hace que solo se pueda elegir hombre o mujer y no los 2
 	if ( strcmp(a->label(), "F") == 0 ) {
      		e->SetM(0);
	}
	if ( strcmp(a->label(), "M") == 0 ) {
      		e->SetF(0);
	}
      	if ( strcmp(a->label(), "Guardar") == 0 ) {
            	if ( e->Guardar(ARCHIVO) == 0 ) {     
               		fl_message("%s", "los datos se guardaron");       
            	}
            	else{ 
                	fl_message("%s", "los datos no se guardaron");   
	}
        }

     	if ( strcmp(a->label(), "Salir") == 0 ) {
         	e->hide();
    	}
} 

//guarda la informacion
int Guardar(const char *nombrearchivo){
	FILE *fp = fopen(nombrearchivo, "a");
        if ( !fp ) {
        	fl_message("%s", "error no se puede abrir el archivo");
        	return -1;
	}
	if( entrada4->value()==0)
        {
//escribe los datos en el archivo
fprintf(fp,"%s %s %s %s M\n %s %s",entrada1->value(),entrada2->value(),entrada3->value(),entrada6->value(),entrada7->value(),entrada8->value());
        }
        if( entrada5->value()==0)
        {
//escribe los datos en el archivo
fprintf(fp,"%s %s %s %s F\n %s %s",entrada1->value(),entrada2->value(),entrada3->value(),entrada6->value(),entrada7->value(),entrada8->value());
        }
      	fclose(fp);
       	return 0;
}

//set y get 
//**********************************
void SetF(int val)      
{        
	entrada4->value(val);
}
void SetM(int val)      
{        
	entrada5->value(val);
}
//**********************************
void SetCodigo(const char *val)      
{        
	entrada1->value(val);
}   
const char *GetCodigo() const { 
	return entrada1->value();   
}
//***********************************
void SetNombre(const char *val)      
{        
	entrada2->value(val);
}
    
const char *GetNombre() const { 
	return entrada2->value();   
}
//************************************
void SetApellido(const char *val)      
{        
	entrada3->value(val);
}
    
const char *GetApellido() const { 
	return entrada3->value();   
}
//************************************
void SetTelefono(const char *val)      
{        
	entrada6->value(val);
}
    
const char *GetTelefono() const { 
	return entrada6->value();   
}
//************************************
void SetDireccion(const char *val)      
{        
	entrada7->value(val);
}
    
const char *GetDireccion() const { 
	return entrada7->value();   
}
//************************************
void SetCorreo(const char *val)      
{        
	entrada8->value(val);
}
    
const char *GetCorreo() const { 
	return entrada8->value();   
}
//************************************
} ;

//cuerpo del programa
int main() {
	Cliente *e = new Cliente();
     	e->show();
	return Fl::run();
} 
