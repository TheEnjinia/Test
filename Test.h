/*
  Test.h - Test library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef Test_h
#define Test_h

//#include <inttypes.h>
// needed if you class will contain misc integer variables

// library interface description
class Test
{
  // user-accessible "public" interface
  public:
    Test(int);
    void doSomething(void);
	uint8_t ivar; 
	
  // library-accessible "private" interface
  private:
    int value;
    void doSomethingSecret(void);
};

#endif

