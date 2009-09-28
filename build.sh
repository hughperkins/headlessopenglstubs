gcc -c -I/usr/include -I/usr/include/SDL sdlstub.c
ar rcs libSDLstub.a sdlstub.o

gcc -c -I/usr/include -I/usr/include/SDL glewstub.c
ar rcs libglewstub.a glewstub.o

gcc -c -I/usr/include -I/usr/include/SDL glustub.c
ar rcs libglustub.a glustub.o

gcc -c -I/usr/include -I/usr/include/SDL glstub.c
ar rcs libGLstub.a glstub.o

g++ -o foo -L. -Llib -Llib/streflop $(find . -name "*.o" -print | grep -v "^./lib") -lSDLstub -lGLstub -lboost_system-mt -lboost_thread-mt -lboost_signals-mt -lopenal -logg -lboost_filesystem-mt -lboost_regex-mt -lboost_serialization-mt -lz -lboost_program_options-mt -lfreetype -lIL -lILU -lvorbis -lX11 -lXcursor -lvorbisenc -lvorbisfile -l7zip -lhpiutil2 -loscpack -lminizip -lglewstub -lGLEW -lglustub -llua -lstreflop



