install:
	(cd src; make install ROOT=/home/ubuntu/workspace/TestFiles/CppLibTest/01_DLL)
	g++ -o main.exe main.cpp -Llib -lMooseRNG -Iinclude
	
uninstall:
	(cd src; make uninstall ROOT=/home/ubuntu/workspace/TestFiles/CppLibTest/01_DLL)
	rm main.exe