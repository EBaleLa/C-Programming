#include <iostream>
#include<conio.h>
using namespace std;

void testBit(int d) {
	int x = (1<<3);
	int a = (d & 1);
	cout << " Test Shift " << d;
	cout << " \n Test bit 3 = 1 is " << ((d & x)==x) <<endl;
	(a==1)?(cout<<" odd "):(cout<<" even ");
}

main(void) {
	testBit(10);
	getch();
	return 0;
}
