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

#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception
{
	
public:
	MyException(string pMsg) 
	{
		v_msg = pMsg;
	}

	const char* what() const throw()
	{
		cout << this << endl;
		return v_msg.c_str();
	}

private:
	string v_msg;
};


int main()
{
	MyException exc("My Exception");
	try {
		throw exc;
	} catch (exception &e) {
		cout << &e << endl;
		cout << e.what() << endl;
	}
	return 0;
}