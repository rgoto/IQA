#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define VALOR_MIN 0.0
#define VALOR_MAX 1.0
#define VALOR_INCR 0.01
#define VALOR_DECR 0.01
#define PAGE_SIZE 0.0

GtkBuilder *builder;

GtkWindow *window;

GtkEntry *entry;

void gtk_start(int argc, char **argv){

    gtk_init(&argc, &argv);
    //builder do gtk layout
    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "iqa.xml", NULL);

//pesos
    gtk_config_spin();

    window = (GtkWindow*) gtk_builder_get_object(builder, "window");
    //gtk window show all
    gtk_widget_show((GtkWidget*) window);

    //loop gtk
    gtk_main();

}

double * gtk_get_value(){

    GtkEntry *_entry[9];

    char *entry[9] = { "entryCF", "entryPH", "entryDBO", "entryNT", "entryFT", "entryDT", "entryTU", "entryOD", "entryST"};


static double value[9];

    for (int i =0; i < 9; i++){

        _entry[i] = (GtkEntry*) gtk_builder_get_object(builder, entry[i]);
        const char* _value  = gtk_entry_get_text(_entry[i]);
        value[i] = atof(_value);
    }

    return value;

}


GtkSpinButton ** gtk_get_spin(){

static GtkSpinButton *_spin[9];

char *spin[9] = { "spinbutton1", "spinbutton2", "spinbutton3", "spinbutton4", "spinbutton5", "spinbutton6", "spinbutton7", "spinbutton8", "spinbutton9"};


for(int i = 0; i < 9; i++){
    _spin[i] = (GtkSpinButton*) gtk_builder_get_object(builder, spin[i]);

}

return _spin;


}




void gtk_config_spin(){

    GtkAdjustment *adjustment;

    double valor_inicial[9] = {0.15, 0.12, 0.10, 0.10, 0.10, 0.10, 0.08, 0.08, 0.17};

        for(int i = 0; i < 9; i++){
            adjustment = gtk_adjustment_new  (valor_inicial[i],
                                                                            VALOR_MIN,
                                                                            VALOR_MAX,
                                                                            VALOR_INCR,
                                                                            VALOR_DECR,
                                                                            PAGE_SIZE
                                                                            );

            GtkSpinButton **spin = gtk_get_spin();

            gtk_spin_button_set_adjustment (spin[i], adjustment);
        }
}