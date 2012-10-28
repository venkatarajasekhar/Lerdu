// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_BASEAUDIOSRC_H
#define _GSTREAMERMM_BASEAUDIOSRC_H


#include <glibmm.h>

/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008 The gstreamermm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gst/audio/gstringbuffer.h>
#include <gstreamermm/pushsrc.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GstBaseAudioSrc GstBaseAudioSrc;
typedef struct _GstBaseAudioSrcClass GstBaseAudioSrcClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{ class BaseAudioSrc_Class; } // namespace Gst
namespace Gst
{

class RingBuffer;

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/**
 * @ingroup gstreamermmEnums
 */
enum BaseAudioSrcSlaveMethod
{
  BASE_AUDIO_SRC_SLAVE_RESAMPLE,
  BASE_AUDIO_SRC_SLAVE_RETIMESTAMP,
  BASE_AUDIO_SRC_SLAVE_SKEW,
  BASE_AUDIO_SRC_SLAVE_NONE
};

} // namespace Gst


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::BaseAudioSrcSlaveMethod> : public Glib::Value_Enum<Gst::BaseAudioSrcSlaveMethod>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{


/** The base class for audio sources.
 * This is the base class for audio sources. Subclasses need to implement the
 * create_ringbuffer_vfunc vmethod. This base class will then take care of
 * reading samples from the ringbuffer, synchronisation and flushing.
 *
 * Last reviewed on 2006-09-27 (0.10.12).
 *
 * @ingroup GstBaseClasses
 */

class BaseAudioSrc : public Gst::PushSrc
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef BaseAudioSrc CppObjectType;
  typedef BaseAudioSrc_Class CppClassType;
  typedef GstBaseAudioSrc BaseObjectType;
  typedef GstBaseAudioSrcClass BaseClassType;

private:  friend class BaseAudioSrc_Class;
  static CppClassType baseaudiosrc_class_;

private:
  // noncopyable
  BaseAudioSrc(const BaseAudioSrc&);
  BaseAudioSrc& operator=(const BaseAudioSrc&);

protected:
  explicit BaseAudioSrc(const Glib::ConstructParams& construct_params);
  explicit BaseAudioSrc(GstBaseAudioSrc* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~BaseAudioSrc();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstBaseAudioSrc*       gobj()       { return reinterpret_cast<GstBaseAudioSrc*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstBaseAudioSrc* gobj() const { return reinterpret_cast<GstBaseAudioSrc*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstBaseAudioSrc* gobj_copy();

private:


public:
  /** Get the Gst::Clock of the Gst::AudioSrc.
   */
   Glib::RefPtr<Gst::Clock> get_clock();
  Glib::RefPtr<const Gst::Clock> get_clock() const;
 
  
  /** Create and return the Gst::RingBuffer for @a src. This function will call the
   * ::create_ringbuffer vmethod and will set @a src as the parent of the returned
   * buffer (see Gst::Object::set_parent()).
   * @return The new ringbuffer of @a src.
   */
  Glib::RefPtr<Gst::RingBuffer> create_ring_buffer();

  
  /** Controls whether @a src will provide a clock or not. If @a provide is <tt>true</tt>, 
   * Gst::Element::provide_clock() will return a clock that reflects the datarate
   * of @a src. If @a provide is <tt>false</tt>, Gst::Element::provide_clock() will return <tt>0</tt>.
   * @param provide New state.
   */
  void set_provide_clock(bool provide);
  
  /** Queries whether @a src will provide a clock or not. See also
   * gst_base_audio_src_set_provide_clock.
   * @return <tt>true</tt> if @a src will provide a clock.
   */
  bool get_provide_clock() const;
  
  /** Controls how clock slaving will be performed in @a src.
   * @param method The new slave method.
   */
  void set_slave_method(Gst::BaseAudioSrcSlaveMethod method);
  
  /** Get the current slave method used by @a src.
   * @return The current slave method used by @a src.
   */
  Gst::BaseAudioSrcSlaveMethod get_slave_method() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Actual configured size of audio buffer in microseconds.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<gint64> property_actual_buffer_time() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Actual configured audio latency in microseconds.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<gint64> property_actual_latency_time() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Size of audio buffer in microseconds.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<gint64> property_buffer_time() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Size of audio buffer in microseconds.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<gint64> property_buffer_time() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Audio latency in microseconds.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<gint64> property_latency_time() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Audio latency in microseconds.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<gint64> property_latency_time() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Provide a clock to be used as the global pipeline clock.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_provide_clock() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Provide a clock to be used as the global pipeline clock.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_provide_clock() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Algorithm to use to match the rate of the masterclock.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<BaseAudioSrcSlaveMethod> property_slave_method() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Algorithm to use to match the rate of the masterclock.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<BaseAudioSrcSlaveMethod> property_slave_method() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  /** vfunc to create and return a Gst::RingBuffer to read from.
   */
    virtual Glib::RefPtr<Gst::RingBuffer> create_ring_buffer_vfunc();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gst


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gst::BaseAudioSrc
   */
  Glib::RefPtr<Gst::BaseAudioSrc> wrap(GstBaseAudioSrc* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_BASEAUDIOSRC_H */
