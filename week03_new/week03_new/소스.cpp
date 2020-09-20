#include <iostream>
class SetValue {
private:
	int x, y;

public:
	int GetX() { return x; }
	int GetY() { return y; }

	void SetX(int x_1) { x = x_1; }
	void SetY(int y_1) { y = y_1; }
};
int main() {
	SetValue obj;
	obj.SetX(33);
	obj.SetY(44);
	std::cout << "X = " << obj.GetX() << " Y = " << obj.GetY() << std::endl;
	system("pause");
	return 0;
}