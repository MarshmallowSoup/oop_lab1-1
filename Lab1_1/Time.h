////////////////////////////////////////
// Time.h
#pragma once
#include <iostream>
using namespace std;
class Time
{
	private:
		int first, second;
	public:
		inline int minutes();
		inline bool init(int first, int second);
		inline void read();
		inline void display();
		inline int get_first() {return first;};
		inline int get_second() {return second;};
		inline void set_first(int value) {first = value; };
		inline void set_second(int value) {second = value; };

};

