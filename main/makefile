COMPILER=g++ -std=c++14
HEADERS=-I../include/
FLAGS= -c -g
SOURCES=../scr/

main.exe: main.o actividades.o fecha.o hora.o materia.o apuntes.o usuario.o
	$(COMPILER) $(^) -std=c++14 -o $(@)

main.o: main.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)

actividades.o: $(SOURCES)actividades.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)
	
fecha.o: $(SOURCES)fecha.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)

hora.o: $(SOURCES)hora.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)

materia.o: $(SOURCES)materia.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)

apuntes.o: $(SOURCES)apuntes.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)

usuario.o: $(SOURCES)usuario.cpp
	$(COMPILER) $(^) $(HEADERS) $(FLAGS)	
clean:
	$(RM) *.o .*exe