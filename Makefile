#Copyright 2015 Au Yeong Wing Yau
#Licensed under the Apache License, Version 2.0 (the "License");
#you may not use this file except in compliance with the License.
#You may obtain a copy of the License at

#http://www.apache.org/licenses/LICENSE-2.0

#Unless required by applicable law or agreed to in writing, software
#distributed under the License is distributed on an "AS IS" BASIS,
#WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#See the License for the specific language governing permissions and limitations under the License. 

CC = g++
FLAGS = -O2 -march=native -Wall -std=c++0x

all: STL1 postgresql1 Except BThread

STL1: STL1.cpp
	$(CC) $(FLAGS) -o STL1 STL1.cpp
	
postgresql1: postgresql1.cpp
	$(CC) $(FLAGS) -o postgresql1 -lpq postgresql1.cpp

Except: Except.cpp
	$(CC) $(FLAGS) -o Except Except.cpp
	
BThread: BThread.cpp
	$(CC) $(FLAGS) -o BThread -lboost_thread BThread.cpp

clean:
	rm -f STL1
	rm -f postgresql1
	rm -f Except
	rm -f BThread