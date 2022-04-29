#pragma once
//#include <vector>
class IBaseCommand
{
public:
	virtual double CalculateCommands() = 0;
	virtual double getSecond() = 0;
	virtual void setFirst(double add) = 0;
};

class AddCommand : public IBaseCommand {

private:
	double addFirst;
	double addSecond;
public:
	AddCommand(double first, double second) {
		addFirst = first;
		addSecond = second;
	}
	double CalculateCommands() {
		return addFirst + addSecond;
	}
	void setFirst(double add) {
		addFirst = add;
	}
	double getSecond() {
		return addSecond;
	}

};

class MinCommand : public IBaseCommand {
private:
	double subFirst;
	double subSecond;
public:
	MinCommand(double first, double second) {
		subFirst = first;
		subSecond = second;
	}
	double CalculateCommands() {
		return subFirst - subSecond;
	}
	void setFirst(double min) {
		subFirst = min;
	}
	double getSecond() {
		return subSecond;
	}
};

class MultCommand : public IBaseCommand {
private:
	double multFirst;
	double multSecond;

public:
	MultCommand(double first, double second) {
		multFirst = first;
		multSecond = second;
	}
	double CalculateCommands() {
		return multFirst * multSecond;
	}
	void setFirst(double mult) {
		multFirst = mult;
	}
	double getSecond() {
		return multSecond;
	}
};

class DivCommand : public IBaseCommand {
private:
	double divFirst;
	double divSecond;

public:
	DivCommand(double first, double second) {
		divFirst = first;
		divSecond = second;
	}
	double CalculateCommands() {
		return divFirst / divSecond;
	}
	void setFirst(double div) {
		divFirst = div;
	}
	double getSecond() {
		return divSecond;
	}
};

class ModCommand : public IBaseCommand {
private:
	double modFirst;
	double modSecond;

public:
	ModCommand(double first, double second) {
		modFirst = first;
		modSecond = second;
	}
	double CalculateCommands() {
		return (int)modFirst % (int)modSecond;
	}
	void setFirst(double mod) {
		modFirst = mod;
	}
	double getSecond() {
		return modSecond;
	}
};
