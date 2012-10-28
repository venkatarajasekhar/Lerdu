// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_BASESINK_P_H
#define _GSTREAMERMM_BASESINK_P_H


#include <glibmm/class.h>

namespace Gst
{

class BaseSink_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef BaseSink CppObjectType;
  typedef GstBaseSink BaseObjectType;
  typedef GstBaseSinkClass BaseClassType;
  typedef Element_Class CppClassParent;
  typedef GstElementClass BaseClassParent;

  friend class BaseSink;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static GstCaps* get_caps_vfunc_callback(GstBaseSink* self);
  static void get_times_vfunc_callback(GstBaseSink* self, GstBuffer* buffer, GstClockTime* start, GstClockTime* end);
  static GstFlowReturn preroll_vfunc_callback(GstBaseSink* self, GstBuffer* buffer);
  static GstFlowReturn render_vfunc_callback(GstBaseSink* self, GstBuffer* buffer);
  static GstStateChangeReturn async_play_vfunc_callback(GstBaseSink* self);
  static void fixate_vfunc_callback(GstBaseSink* self, GstCaps* caps);
  static GstFlowReturn render_list_vfunc_callback(GstBaseSink* self, GstBufferList* buffer_list);
  static GstFlowReturn buffer_alloc_vfunc_callback(GstBaseSink* self,
    guint64 offset, guint size, GstCaps* caps, GstBuffer** buf);
  static gboolean set_caps_vfunc_callback(GstBaseSink* self, GstCaps* caps);
  static gboolean start_vfunc_callback(GstBaseSink* self);
  static gboolean stop_vfunc_callback(GstBaseSink* self);
  static gboolean unlock_vfunc_callback(GstBaseSink* self);
  static gboolean event_vfunc_callback(GstBaseSink* self, GstEvent* event);
  static gboolean activate_pull_vfunc_callback(GstBaseSink* self, gboolean active);
  static gboolean unlock_stop_vfunc_callback(GstBaseSink* self);
  };


} // namespace Gst

#include <gstreamermm/private/element_p.h>


#endif /* _GSTREAMERMM_BASESINK_P_H */
