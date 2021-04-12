#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main(){
	int sleepsec = 1000000;
	for (int i = 0; i < 12481491; i++){
		cout << "장다혜....";
		usleep(sleepsec);
		cout << " 보고싶따...";
		usleep(sleepsec);
		cout << " \n 많이....";
		usleep(sleepsec);
		cout << " 보고싶다....\n"; 
		usleep(sleepsec);
		cout << "오늘도.....";
		usleep(sleepsec);
		cout << "내일도.....\n";
	}
}
