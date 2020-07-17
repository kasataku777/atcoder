// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
#define EPS (1e-10)
#define equals(a,b) (fabs((a)-(b))<EPS)

class Point {
public:
	double x, y;


	Point(double x = 0, double y = 0) :x(x), y(y) {}

	Point operator + (Point p) { return Point(x + p.x, y + p.y); }
	Point operator - (Point p) { return Point(x - p.x, y - p.y); }
	Point operator * (double a) { return Point(a * x, a * y); }
	Point operator / (double a) { return Point(x / a, y / a); }

	double abs() { return sqrt(norm()); }
	double norm() { return x * x + y * y; };

	bool operator < (const Point& p)const {
		return x != p.x ? x < p.x : y < p.y;
	}

	bool operator ==(const Point& p)const {
		return fabs(x - p.x) < EPS && fabs(y - p.y) < EPS;
	}

};

typedef Point Vector;

int main()
{
	const double pi = acos(-1);

	int a, b, h, m;

	cin >> a >> b >> h >> m;

	double longrad = 2 * pi * m / 60;
	double alpha = pi / 6 * m / 60;
	double shortrad = 2 * pi * h / 12;
	double rad;
	Vector v1 = Vector(b * cos(pi/2-longrad), b * sin(pi / 2-longrad));
	Vector v2 = Vector(a * cos(pi / 2-shortrad-alpha), a * sin(pi / 2-shortrad-alpha));

	Vector ansv = v2 - v1;
	
	double ans = ansv.abs();


	printf("%.12f", ans);

	return 0;

}
