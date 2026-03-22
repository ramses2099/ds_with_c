all: step0 step1 step2 step3 step4	 

step0:
	rm -rf build/*.o
	rm -rf bin/app
step1:
	gcc -Wall -Wextra -Iinclude -c src/*.c
step2:
	mv *.o build/
step3:
	gcc -Wall -Wextra -Iinclude -o bin/app  build/*.o
step4:
	./bin/app
