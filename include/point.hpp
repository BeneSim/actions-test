#ifndef POINT_HPP
#define POINT_HPP

#include <ostream>

template <typename T>
class Point {
    public:
        Point(T x1, T x2) : x1_(x1), x2_(x2) {}

        auto operator+(Point<T> const &rhs) const -> Point<T> {
            return Point(x1_ + rhs.x1_, x2_ + rhs.x2_);
        }

        auto x1() const -> T {
            return x1_;
        }

        auto x2() const -> T {
            return x2_;
        }

    private:
        T x1_;
        T x2_;
};

template <typename T>
auto operator<<(std::ostream &os, Point<T> const &point) -> std::ostream& {
    os << "Point { x1: " << point.x1() << ", x2: " << point.x2() << " }";
    return os;
}

#endif // POINT_HPP
