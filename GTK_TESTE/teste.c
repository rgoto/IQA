#include <gtk/gtk.h>

GtkBuilder* builder;
GtkWindow* window;
GtkButton* send;
GtkEntry* Entry;

int main (int argc, char *argv[]){

GtkEntry* EntryCF;


gtk_init(&argc, &argv);	


//Criando o Builder para construir o objeto
builder = gtk_builder_new();
gtk_builder_add_from_file (builder, "iqa.xml", NULL);


//Criando o objeto Janela
window = (GtkWindow*) gtk_builder_get_object (builder, "window");
g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);


//Criando botão (send)
send = (GtkButton*) gtk_builder_get_object (builder, "buttonCal")


//Mostrando a janela
gtk_widget_show_all(window);


//Loop do sistema
gtk_main();	

return 0;
}
