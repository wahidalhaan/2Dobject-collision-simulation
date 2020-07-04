all:
	fltk-config --compile main.cpp && ./main
clean:
	rm main