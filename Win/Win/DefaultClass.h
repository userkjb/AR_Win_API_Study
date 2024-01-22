#pragma once
class DefaultClass
{
public :
	// constructer destructer
	DefaultClass();
	virtual ~DefaultClass();

	// delete Function
	DefaultClass(const DefaultClass& _Other) = delete;
	DefaultClass(DefaultClass&& _Other) noexcept = delete;
	DefaultClass& operator=(const DefaultClass) = delete;
	DefaultClass& operator=(DefaultClass&& _Other) noexcept = delete;

protected :

private :

};

