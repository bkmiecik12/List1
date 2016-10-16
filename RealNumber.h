class RealNumber
{
	private:
	string liczba; //jaka jest kazdy widzi
	string cecha; // czesc calkowita
	string mantysa; //czesc ulamkowa
	
	public:
	RealNumber(string);
	~RealNumber();
	
	string add(string);
	string multiply(string);
	void separate(string); //kropka [.] oddziela
}
