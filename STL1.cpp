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

/** @file STL1.cpp
 * 
 *  Example test file for STL use.
 */
#include <list>
#include <utility>
#include <string>
#include <iostream>
#include <map>

using namespace std;


int main()
{
	list<string> str_list;
	list<string>::iterator iter;
	
	cout << "Hello World!" << endl;
	str_list.push_back("one");
	str_list.push_back("two");
	for(iter = str_list.begin(); iter != str_list.end(); iter++)
		cout << *iter << endl;
	
	str_list.clear();
	
	pair<int, string> pair_item;
	pair_item.first = 1;
	pair_item.second = "one";
	cout << pair_item.first << " " << pair_item.second << "\n";

	//map<string, string> refs;
	//refs["key"] = "1";
	//refs["name"] = "2";
	
	return 0;
}