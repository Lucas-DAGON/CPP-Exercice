#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex2D {
	public:
		// Constructors
		Complex2D();
		Complex2D(double _a, double _b);
		Complex2D(double all);
		Complex2D(const Complex2D&);
		virtual ~Complex2D();

		// getter and setter
		double getReel() const;
		double getImaginere() const;
		void setReel(double _a);
		void setImaginaire(double _b);

		// Operation
		void operationAdd(double _a, double _b);
		void operationMinus(double _a, double _b);
		void operationMult(double _a, double _b);
		void operationDiv(double _a, double _b);
		bool operationLessT(double _a, double _b) const;
		bool operationGreatT(double _a, double _b) const;


	private:
		double a;
		double b;
		char i = 'i';
};


#endif