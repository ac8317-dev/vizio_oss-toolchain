
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __longfield__
#define __longfield__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
    class longfield;
}

class longfield : public ::java::lang::Object
{

public:
  longfield();
  virtual void doitc();
  virtual void doitj();
  static void main(JArray< ::java::lang::String * > *);
public: // actually package-private
  jlong __attribute__((aligned(__alignof__( ::java::lang::Object)))) lval;
  jboolean bval;
  ::java::lang::String * sval;
public:
  static ::java::lang::Class class$;
};

#endif // __longfield__