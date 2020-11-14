#include <gtk/gtk.h>

int main(int argc,char *argv[]){

		GtkWidget *window;/*GtkWidget is the base class that all widget in GTK+ derives*/
		gtk_init (&argc,&argv);/*This function initialize GTK+ and parses some standard*/

		window = gtk_window_new(GTK_WINDOW_TOPLEVEL);/*function to create a new GTK window*/
		gtk_widget_show(window);/*Display the window*/

		g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);/*call back function */

		gtk_main();/*Call the main loop*/

		return 0;
		}
