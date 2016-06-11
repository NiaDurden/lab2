./bin/diskr: ./obj/kvadrat.o ./obj/diskr.o ./bin
	gcc -o ./bin/diskr ./obj/kvadrat.o ./obj/diskr.o -lm

./obj/kvadrat.o: kvadrat.c ./obj
	gcc -c ./kvadrat.c -o ./obj/kvadrat.o -Wall

./obj/diskr.o: diskr.c ./obj
	gcc -c ./diskr.c -o ./obj/diskr.o -Wall

./bin:
	mkdir bin

./obj:
	mkdir obj

.PHONY: clean
clean:
	rm -r bin/ obj/

