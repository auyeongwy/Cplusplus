/*
Copyright 2015 Au Yeong Wing Yau
 Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and limitations under the License. 
*/

/** @file BThread.cpp
 * 
 *  Example test file for Boost threads.
 */
#include <boost/thread.hpp>
#include <iostream>

using namespace std;


int main()
{
	boost::mutex mtx;
	mtx.lock();
	cout << "mutex acquired" << endl;
	mtx.unlock();
	return 0;
}