#ifndef __EVENT_H__
#define __EVENT_H__


//TODO ģ�����������
template <typename T, typename  E>
class IEvent
{
public:
	virtual ~IEvent() {};
	virtual void on(T& handler) = 0;
};

#endif
