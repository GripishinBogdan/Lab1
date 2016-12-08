#ifndef TRIANGLE_TRIANGLE_H
#define TRIANGLE_TRIANGLE_H


class Triangle {
private:
    int a;
    int b;
public:
    Triangle();
    Triangle(int a, int b);

    int getA() const;
    void setA(int a);

    int getB() const;
    void setB(int b);

    bool checkSimilarity(Triangle triangle);

};


#endif //TRIANGLE_TRIANGLE_H
