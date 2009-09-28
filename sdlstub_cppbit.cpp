#include "boost/thread.hpp"

extern "C" int getsystemmilliseconds() {
   boost::xtime t;
		boost::xtime_get(&t, boost::TIME_UTC);
   int milliseconds = t.sec * 1000 + (t.nsec / 1000000 );   
   return milliseconds;
}

extern "C" void sleepmilliseconds( int milliseconds ) {
   boost::xtime t;
		boost::xtime_get(&t, boost::TIME_UTC);
		t.nsec += 1000000 * milliseconds;
		boost::thread::sleep(t);
}

