#include <iostream>
using namespace std;

void ball_initial_pos(int &x, int &y, int &theta_angle)
{

    cout << "please give intial x-position for the ball:\n";
    cin >> x;
    cout << "please give intial y-position for the ball:\n";
    cin >> y;
    cout << "please give intial angle with the origin for the ball:\n";
    cin >> theta_angle;
}

int main() {

    int x{};
    int y{};
    int theta_angle{};

    ball_initial_pos(x,y,theta_angle);

    //motor_movement_function()

    return 0;

}