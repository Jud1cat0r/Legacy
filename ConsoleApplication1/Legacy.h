#pragma once

class Legacy
{
protected:
	static string rawMaterial;
public:
	Legacy()
	{
	}
	Legacy(string nameMetal)
	{
		this->rawMaterial = nameMetal;
	}
	virtual void Production()
	{
		cout << "Production: заготовки " << rawMaterial << endl;
	}
};

class Production1 : public Legacy
{
private:
	string nameProduction;
public:
	Production1(string nameProduction)
	{
		this->nameProduction = nameProduction;
	}

	void Production()
	{
		cout << "Production: " << rawMaterial << " " << nameProduction << endl;
	}
};

class Production2 :public Legacy
{
private:
	string nameProduction;
public:
	Production2(string nameProduction)
	{
		this->nameProduction = nameProduction;
	}

	void Production()
	{
		cout << "Production: " << rawMaterial << " " << nameProduction << endl;
	}
};

