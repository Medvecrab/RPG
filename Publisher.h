#pragma once
#include "Subscriber.h"
#include <vector>

class Publisher
{
private:
	std::vector<Subscriber*> subscribers;
public:
	void subscribe(Subscriber*);
	void unsubscribe(int);
	void notify_subscribers();
};

