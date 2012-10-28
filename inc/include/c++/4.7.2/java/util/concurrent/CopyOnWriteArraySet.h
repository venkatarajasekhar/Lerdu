
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_CopyOnWriteArraySet__
#define __java_util_concurrent_CopyOnWriteArraySet__

#pragma interface

#include <java/util/AbstractSet.h>
#include <gcj/array.h>


class java::util::concurrent::CopyOnWriteArraySet : public ::java::util::AbstractSet
{

public:
  CopyOnWriteArraySet();
  CopyOnWriteArraySet(::java::util::Collection *);
  virtual jint size();
  virtual jboolean isEmpty();
  virtual jboolean contains(::java::lang::Object *);
  virtual JArray< ::java::lang::Object * > * toArray();
  virtual JArray< ::java::lang::Object * > * toArray(JArray< ::java::lang::Object * > *);
  virtual void clear();
  virtual jboolean remove(::java::lang::Object *);
  virtual jboolean add(::java::lang::Object *);
  virtual jboolean containsAll(::java::util::Collection *);
  virtual jboolean addAll(::java::util::Collection *);
  virtual jboolean removeAll(::java::util::Collection *);
  virtual jboolean retainAll(::java::util::Collection *);
  virtual ::java::util::Iterator * iterator();
  virtual jboolean equals(::java::lang::Object *);
private:
  static jboolean eq(::java::lang::Object *, ::java::lang::Object *);
  static const jlong serialVersionUID = 5457747651344034263LL;
  ::java::util::concurrent::CopyOnWriteArrayList * __attribute__((aligned(__alignof__( ::java::util::AbstractSet)))) al;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_CopyOnWriteArraySet__