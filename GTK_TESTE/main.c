#include <gtk/gtk.h>

int main (int argc , char *argv[]){

	GtkBuilder *builder;
	GtkWidget *window;


	gtk_init (&argc, &argv);


//Chamando o builder para construir o layout do programa
	builder = gtk_builder_new ();
  	gtk_builder_add_from_file (builder, "iqa.xml", NULL);

//Chamando a Janela (window)
  	window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
//Saindo
  //  g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);


    gtk_widget_show_all(window);

 
  gtk_main();


}