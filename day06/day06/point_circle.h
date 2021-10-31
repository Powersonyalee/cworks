//point_circle.h//

struct Point {
	int x, y;
};

// 원 구조체(중심점과 반지름)
struct Circle {
	struct Point p1; //중심점
	int radius;		 // 반지름
};

