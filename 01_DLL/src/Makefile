
CPP_VERSION=11

TARGET = MooseRNG

install:
	g++ -std=c++$(CPP_VERSION) -c -fPIC $(TARGET).cpp -o $(TARGET).o
	g++ -shared $(TARGET).o -o $(ROOT)/lib/lib$(TARGET).so
	cp $(TARGET).hpp $(ROOT)/include
	rm $(TARGET).o
	
uninstall:
	rm $(ROOT)/lib/lib$(TARGET).so
	rm $(ROOT)/include/$(TARGET).hpp