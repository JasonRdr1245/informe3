#include <iostream>
#include <cmath>

class Vector2D {
public:
    float x, y;
    
    Vector2D(float x=0.0, float y=0.0) {
        this->x = x;
        this->y = y;
    }
    
    Vector2D operator+(const Vector2D& v) const {
        return Vector2D(x + v.x, y + v.y);
    }
    
    Vector2D operator-(const Vector2D& v) const {
        return Vector2D(x - v.x, y - v.y);
    }
    
    Vector2D operator*(float scalar) const {
        return Vector2D(x * scalar, y * scalar);
    }
    
    float dot(const Vector2D& v) const {
        return x * v.x + y * v.y;
    }
    
    float length() const {
        return sqrt(x * x + y * y);
    }
    
    void normalize() {
        float len = length();
        if (len > 0.0) {
            x /= len;
            y /= len;
        }
    }
};

Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
    return Vector2D(v1.x + v2.x, v1.y + v2.y);
}

Vector2D operator-(const Vector2D& v1, const Vector2D& v2) {
    return Vector2D(v1.x - v2.x, v1.y - v2.y);
}

int main() {
    Vector2D v1(1.0, 2.0);
    Vector2D v2(3.0, 4.0);
    Vector2D v3 = v1 + v2; // v3 tiene componentes (4.0, 6.0)
    Vector2D v4 = v1 - v2; // v4 tiene componentes (-2.0, -2.0)
    
    std::cout << "v1 = (" << v1.x << ", " << v1.y << ")" << std::endl;
    std::cout << "v2 = (" << v2.x << ", " << v2.y << ")" << std::endl;
    std::cout << "v3 = (" << v3.x << ", " << v3.y << ")" << std::endl;
    std::cout << "v4 = (" << v4.x << ", " << v4.y << ")" << std::endl;
    
    return 0;
}

