all: build

build: Test.cpp TestBadData.cpp MemoryTest.cpp
	mkdir -p out
	#g++ -o out/Test2 -std=c++11 -I. Testv_2.cpp
	g++ -o out/Test -std=c++11 -I. Test.cpp
	#g++ -o out/TestBadData -std=c++11 -I. TestBadData.cpp
	#g++ -o out/MemoryTest -std=c++11 -I. MemoryTest.cpp

test: build
	#./out/Test2
	./out/Test
	#./out/TestBadData baddata.txt
	#./out/MemoryTest

clean:
	rm -rf out
