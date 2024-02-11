#include <stdio.h>
#include <thread>

void CurrentThread(const char* thread) {
	printf("%s\n", thread);
}

int main() {
	
	const char* thread[3] = {
		"Thread1",
		"Thread2",
		"Thread3"
	};
	
	std::thread T1(CurrentThread, thread[0]);
	T1.join();

	std::thread T2(CurrentThread, thread[1]);
	T2.join();

	std::thread T3(CurrentThread, thread[2]);
	T3.join();

	return 0;
}