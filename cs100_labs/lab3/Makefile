#Lab3 Makefile

#Variables
COMPILE = g++
FLAGS = -g -W -Wall -Werror
OBJS = add.o mul.o sub.o div.o sqr.o op.o #container.o sort.o bubSort.o listCont.o selSort.o vectCont.o

#Targets

all: main.cpp $(OBJS)
	$(COMPILE) $(FLAGS) -o a.out main.cpp $(OBJS)
	
#container.o: container.cpp container.h 
#$(COMPILE) $(FLAGS) -c container.cpp 

#sort.o: sort.cpp sort.h
#$(COMPILE) $(FLAGS) -c sort.cpp

#bubSort.o: bubSort.cpp bubSort.h sort.h
#$(COMPILE) $(FLAGS) -c bubSort.cpp 
	
#listCont.o: listCont.cpp listCOnt.h container.h
#$(COMPILE) $(FLAGS) -c listCont.cpp 

#selSort.o: selSort.cpp selSort.h sort.h
#$(COMPILE) $(FLAGS) -c selSort.cpp 

#vectCont.o: vectCont.cpp vectCont.h container.h
#$(COMPILE) $(FLAGS) -c vectCont.cpp 

op.o: op.cpp op.h base.h
	$(COMPILE) $(FLAGS) -c op.cpp 
	
add.o: add.cpp add.h base.h
	$(COMPILE) $(FLAGS) -c add.cpp 
	
mul.o: mul.cpp mul.h base.h
	$(COMPILE) $(FLAGS) -c mul.cpp 

sub.o: sub.cpp sub.h base.h
	$(COMPILE) $(FLAGS) -c sub.cpp 

div.o: div.cpp div.h base.h
	$(COMPILE) $(FLAGS) -c div.cpp 
	
sqr.o: sqr.cpp sqr.h base.h
	$(COMPILE) $(FLAGS) -c sqr.cpp
	
clean:
	rm -rf *~ *.o a.out