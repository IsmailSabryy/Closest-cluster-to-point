// A2 class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"point.h"
using namespace std;
point center(point array[], int n) {
	float totalx = 0, totaly = 0, avgx = 0, avgy = 0;
	point center;
	for (int i = 0;i < n;i++)
	{
		totalx = totalx + array[i].getterx();
		totaly = totaly + array[i].gettery();
	}
	avgx = totalx / n;
	avgy = totaly / n;
	center.setterx(avgx);
	center.settery(avgy);
	return center;

}


void closestpt(point arraypt1[], point arraypt2[], int n, point p[], int m) {
	point cpt1, cpt2;
	cpt1 = center(arraypt1, n);
	cpt2 = center(arraypt2, n);
	for (int i = 0;i < m;i++)
	{
		if (p[i].distance(cpt1) > p[i].distance(cpt2)) {
			cout << " Cluster of B is closer to p than Cluster of A"; p[i].display();

		}
		else {
			cout << " Cluster of A is closer to p than Cluster of B"; p[i].display();

		}
		cout << endl;
	}

}

int main()
{
	int n, m;
	point* clusterA, * clusterB, * P;
	cout << "enter number of points of both clusters";
	cin >> n;
	cout << "enter index of P";
	cin >> m;
	clusterA = new point[n];
	clusterB = new point[n];
	P = new point[m];
	for (int i = 0;i < n;i++) {
		float xArand = (rand() % 20) + 70;
		float yArand = (rand() % 20) + 70;
		float xBrand = (rand() % 20) + 20;
		float yBrand = (rand() % 20) + 20;
		clusterA[i].setterx(xArand);
		clusterA[i].settery(yArand);
		clusterB[i].setterx(xBrand);
		clusterB[i].settery(yBrand);
	}
	for (int j = 0;j < m;j++) {
		float xPrand = (rand() % 95) + 5;
		float yPrand = (rand() % 95) + 5;
		P[j].setterx(xPrand);
		P[j].settery(yPrand);
	}

	closestpt(clusterA, clusterB, n, P, m);



	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
