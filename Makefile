# ****************************************************
# Julio Vega
# Example of Makefile
# *****************************************************
# NOTES: it uses '>' as prefix of my recipes (.RECIPEPREFIX is set in line 11)
# since all actions of every Makefile's rule are identified by tabs and I do not
# use tabs in my file editor. Otherwise, I will get the 'missing separator' error.
#
# To check whether a tab character is used, run: cat -e -t -v Makefile
# It shows the presence of tabs (-t) with ^I and line endings (-e) with $
# *****************************************************

CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o User.o Server.o Dashboard.o Sensor.o Termometro.o Luxometro.o CalidadAire.o Higrometro.o RGBcam.o SCam.o Seguridad.o SP.o SV.o Tcam.o Excepcion.o
>$(CC) $(CFLAGS) -o main main.o User.o Server.o Dashboard.o Sensor.o Termometro.o Luxometro.o CalidadAire.o Higrometro.o RGBcam.o SCam.o Seguridad.o SP.o SV.o Tcam.o Excepcion.h

main.o: main.cpp User.h Server.h Dashboard.h Sensor.h Termometro.h Luxometro.h CalidadAire.h Higrometro.h RGBcam.h SCam.h Seguridad.h SP.h SV.h Tcam.h Excepcion.h
>$(CC) $(CFLAGS) -c main.cpp
 
User.o: User.h
Server.o: Server.h
Dashboard.o: Dashboard.h
Sensor.o: Sensor.h
Termometro.o: Termometro.h
Luxometro.o:Luxometro.h
CalidadAire.o:CalidadAire.h
Higrometro.o:Higrometro.h
RGBcam.o:RGBcam.h
SCam.o:SCam.h
Seguridad.o:Seguridad.h
SP.o:SP.h
SV.o:SV.h
Tcam.o:Tcam.h
Excepcion.o:Excepcion.h
clean:
>rm *.o main
