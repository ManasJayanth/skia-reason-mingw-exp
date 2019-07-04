all:
	x86_64-w64-mingw32-gcc.exe  -I$(esy_skia_build) -I$(shell ocamlc -where) -L$(esy_skia_build)/out/Shared -lskia -c mystub.c -o myskia_stub.o
	ocamlmklib -o skia_stubs myskia_stub.o -verbose
