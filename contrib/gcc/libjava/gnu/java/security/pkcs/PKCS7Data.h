
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_pkcs_PKCS7Data__
#define __gnu_java_security_pkcs_PKCS7Data__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
          class OID;
        namespace pkcs
        {
            class PKCS7Data;
        }
      }
    }
  }
}

class gnu::java::security::pkcs::PKCS7Data : public ::java::lang::Object
{

public:
  PKCS7Data(JArray< jbyte > *);
  virtual JArray< jbyte > * getEncoded();
  static ::gnu::java::security::OID * PKCS7_DATA;
private:
  JArray< jbyte > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) content;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_security_pkcs_PKCS7Data__