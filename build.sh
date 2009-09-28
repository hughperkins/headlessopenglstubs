gcc -c -I/usr/include -I/usr/include/SDL sdlstub.c
g++ -c -I/usr/include sdlstub_cppbit.cpp
ar rcs libSDLstub.a sdlstub.o sdlstub_cppbit.o

gcc -c -I/usr/include -I/usr/include/SDL glewstub.c
ar rcs libglewstub.a glewstub.o

gcc -c -I/usr/include -I/usr/include/SDL glustub.c
ar rcs libglustub.a glustub.o

gcc -c -I/usr/include -I/usr/include/SDL glstub.c
ar rcs libGLstub.a glstub.o

# points on link order:
# glewstub MUST be before glew
# streflop should be after lua
g++ -g -o springheadless -L. -Llib -Llib/streflop $(find . -name "*.o" -print |grep -v "testmain.o"  | grep -v "^./lib") -lSDLstub -lGLstub -lboost_system-mt -lboost_thread-mt -lboost_signals-mt -lopenal -logg -lboost_filesystem-mt -lboost_regex-mt -lboost_serialization-mt -lz -lboost_program_options-mt -lfreetype -lIL -lILU -lvorbis -lX11 -lXcursor -lvorbisenc -lvorbisfile -l7zip -lhpiutil2 -loscpack -lminizip -lglewstub -lglustub -lGLEW -llua -lstreflop

# g++ -o foo -L. -Llib -Llib/streflop $(find . -name "*.o" -print | grep -v "^./lib") -lSDLstub -lGLstub -lboost_system-mt -lboost_thread-mt -lboost_signals-mt -lopenal -logg -lboost_filesystem-mt -lboost_regex-mt -lboost_serialization-mt -lz -lboost_program_options-mt -lfreetype -lvorbis -lvorbisenc -lvorbisfile -l7zip -lhpiutil2 -loscpack -lminizip -lglewstub -lglustub -lstreflop



