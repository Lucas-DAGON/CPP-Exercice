#include "complex2D.hpp"
#include <stdexcept>

Complex2D::Complex2D(double _a, double _b)
{
    a = _a;
    b = _b;
}

Complex2D::Complex2D(double all)
{
    a = all;
    b = all;
}

Complex2D::Complex2D(const Complex2D& other)
{
    a = other.a;
    b = other.b;
}

Complex2D::~Complex2D()
{
    // Destructor
}

Complex2D::Complex2D()
{
    a = 0.0;
    b = 0.0;
}

void Complex2D::operationAdd(double _a, double _b)
{
    setReel(getReel() + _a);
    setImaginaire(getImaginere() + _b);
}

void Complex2D::operationMinus(double _a, double _b)
{
    setReel(getReel() - _a);
    setImaginaire(getImaginere() - _b);
}

void Complex2D::operationMult(double _a, double _b)
{
    const double reel = a;
    const double imaginaire = b;

    setReel(reel * _a - imaginaire * _b);
    setImaginaire(reel * _b + imaginaire * _a);
}

void Complex2D::operationDiv(double _a, double _b)
{
    const double denominateur = _a * _a + _b * _b;

    if (denominateur == 0.0)
    {
        throw std::domain_error("Division par le complexe nul");
    }

    const double reel = a;
    const double imaginaire = b;

    setReel((reel * _a + imaginaire * _b) / denominateur);
    setImaginaire((imaginaire * _a - reel * _b) / denominateur);
}

bool Complex2D::operationLessT(double _a, double _b) const
{
    return a * a + b * b < _a * _a + _b * _b;
}

bool Complex2D::operationGreatT(double _a, double _b) const
{
    return a * a + b * b > _a * _a + _b * _b;
}

double Complex2D::getReel() const
{
    return a;
}

double Complex2D::getImaginere() const
{
    return b;
}

void Complex2D::setReel(double _a)
{
    a = _a;
}

void Complex2D::setImaginaire(double _b)
{
    b = _b;
}