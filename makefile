all:
	gcc -o create pic.c
	./create
	magick pic.ppm pic.png

clean:
	del *.exe
	del pic.png
	del pic.ppm
