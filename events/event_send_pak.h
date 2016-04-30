/**
 * ECE408 
 * event_send_pak.h
 * Purpose: Send Packet Event
 * 
 * @author Kangqiao Lei
 * @version 0.2.0 04/19/16
 */

#ifndef EVENT_SEND_PAK_H
#define EVENT_SEND_PAK_H

#include "event.h"
#include "../Link.h"

class event_send_pak : public event {
	private:
	Link *l;
	
	public:
	event_send_pak(float time, Link *l):event(time), l(l) {};
	~event_send_pak(){};
	
	void handle_event(){
		l->send_pak();
	};
	
	void print() {
		*debugSS << "Starting Send Packet Event at time " << get_Start() << std::endl;
	}
};
#endif