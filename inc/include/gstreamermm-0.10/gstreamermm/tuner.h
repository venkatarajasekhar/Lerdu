// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_TUNER_H
#define _GSTREAMERMM_TUNER_H


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

#include <gst/interfaces/tuner.h>
#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GstTuner GstTuner;
typedef struct _GstTunerClass GstTunerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{ class Tuner_Class; } // namespace Gst
namespace Gst
{

class TunerChannel;
class TunerNorm;

/** An interface for elements providing tuner operations.
 * @ingroup GstInterfaces
 */

class Tuner : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Tuner CppObjectType;
  typedef Tuner_Class CppClassType;
  typedef GstTuner BaseObjectType;
  typedef GstTunerClass BaseClassType;

private:
  friend class Tuner_Class;
  static CppClassType tuner_class_;

  // noncopyable
  Tuner(const Tuner&);
  Tuner& operator=(const Tuner&);

protected:
  Tuner(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Tuner(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Tuner(GstTuner* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Tuner();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstTuner*       gobj()       { return reinterpret_cast<GstTuner*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstTuner* gobj() const { return reinterpret_cast<GstTuner*>(gobject_); }

private:


public:
 

  /** Retrieve a List of Gst::TunerChannels available
   * (e.g.\ 'composite', 's-video', ...) from the given tuner object.
   * @return A list of channels available on this tuner. The list is
   * owned by the GstTuner and must not be freed.
   */
  Glib::ListHandle< Glib::RefPtr<Gst::TunerChannel> > list_channels();

 
  /** Retrieve a List of Gst::TunerChannels available
   * (e.g.\ 'composite', 's-video', ...) from the given tuner object.
   * @return A list of channels available on this tuner. The list is
   * owned by the GstTuner and must not be freed.
   */
  Glib::ListHandle< Glib::RefPtr<const Gst::TunerChannel> > list_channels() const;

  
  /** Retrieve the current channel from the tuner.
   * @return The current channel of the tuner object.
   */
  Glib::RefPtr<Gst::TunerChannel> get_channel();
  
  /** Retrieve the current channel from the tuner.
   * @return The current channel of the tuner object.
   */
  Glib::RefPtr<const Gst::TunerChannel> get_channel() const;
  
  /** Tunes the object to the given channel, which should be one of the
   * channels returned by list_channels().
   * @param channel The channel to tune to.
   */
  void set_channel(const Glib::RefPtr<Gst::TunerChannel>& channel);

 
  /** Retrieve a GList of available Gst::TunerNorm settings for the currently
   * tuned channel on the given tuner object.
   * @return A list of norms available on the current channel for this
   * tuner object. The list is owned by the GstTuner and must not
   * be freed.
   */
  Glib::ListHandle< Glib::RefPtr<Gst::TunerNorm> > list_norms();

 
  /** Retrieve a GList of available Gst::TunerNorm settings for the currently
   * tuned channel on the given tuner object.
   * @return A list of norms available on the current channel for this
   * tuner object. The list is owned by the GstTuner and must not
   * be freed.
   */
  Glib::ListHandle< Glib::RefPtr<const Gst::TunerNorm> > list_norms() const;

  
  /** Get the current video norm from the given tuner object for the
   * currently selected channel.
   * @return The current norm.
   */
  Glib::RefPtr<Gst::TunerNorm> get_norm();
  
  /** Get the current video norm from the given tuner object for the
   * currently selected channel.
   * @return The current norm.
   */
  Glib::RefPtr<const Gst::TunerNorm> get_norm() const;
  
  /** Changes the video norm on this tuner to the given norm, which should be
   * one of the norms returned by list_norms().
   * @param norm The norm to use for the current channel.
   */
  void set_norm(const Glib::RefPtr<Gst::TunerNorm>& norm);
  
  /** Retrieve the current frequency from the given channel. As for
   * set_frequency(), the Gst::TunerChannel must support frequency
   * operations, as indicated by the GST_TUNER_CHANNEL_FREQUENCY flag.
   * @param channel The Gst::TunerChannel to retrieve the frequency from.
   * @return The current frequency, or 0 on error.
   */
  gulong get_frequency(const Glib::RefPtr<const Gst::TunerChannel>& channel) const;
  
  /** Sets a tuning frequency on the given tuner/channel. Note that this
   * requires the given channel to be a "tuning" channel, which can be
   * checked using GST_TUNER_CHANNEL_HAS_FLAG (), with the proper flag
   * being GST_TUNER_CHANNEL_FREQUENCY.
   * 
   * The frequency is in Hz, with minimum steps indicated by the 
   * frequency_multiplicator provided in the Gst::TunerChannel. The
   * valid range is provided in the min_frequency and max_frequency properties
   * of the Gst::TunerChannel.
   * @param channel The Gst::TunerChannel to set the frequency on.
   * @param frequency The frequency to tune in to.
   */
  void set_frequency(const Glib::RefPtr<Gst::TunerChannel>& channel, gulong frequency);
  
  /** Get the strength of the signal on this channel. Note that this
   * requires the current channel to be a "tuning" channel, i.e. a
   * channel on which frequency can be set. This can be checked using
   * GST_TUNER_CHANNEL_HAS_FLAG (), and the appropriate flag to check
   * for is GST_TUNER_CHANNEL_FREQUENCY.
   * 
   * The valid range of the signal strength is indicated in the 
   * min_signal and max_signal properties of the Gst::TunerChannel.
   * @param channel The Gst::TunerChannel to get the signal strength from.
   * @return Signal strength, or 0 on error.
   */
  int get_signal_strength(const Glib::RefPtr<Gst::TunerChannel>& channel);
  
  /** Look up a Gst::TunerNorm by name.
   * @param norm A string containing the name of a Gst::TunerNorm.
   * @return A Gst::TunerNorm, or <tt>0</tt> if no norm with the provided name
   * is available.
   */
  Glib::RefPtr<Gst::TunerNorm> find_norm(const Glib::ustring& norm);
  
  /** Look up a Gst::TunerNorm by name.
   * @param norm A string containing the name of a Gst::TunerNorm.
   * @return A Gst::TunerNorm, or <tt>0</tt> if no norm with the provided name
   * is available.
   */
  Glib::RefPtr<const Gst::TunerNorm> find_norm(const Glib::ustring& norm) const;
  
  /** Look up a Gst::TunerChannel by name.
   * @param channel A string containing the name of a Gst::TunerChannel.
   * @return A Gst::TunerChannel, or <tt>0</tt> if no channel with the provided name
   * is available.
   */
  Glib::RefPtr<Gst::TunerChannel> find_channel(const Glib::ustring& channel);
  
  /** Look up a Gst::TunerChannel by name.
   * @param channel A string containing the name of a Gst::TunerChannel.
   * @return A Gst::TunerChannel, or <tt>0</tt> if no channel with the provided name
   * is available.
   */
  Glib::RefPtr<const Gst::TunerChannel> find_channel(const Glib::ustring& channel) const;
  
  /** Called by elements implementing the Gst::Tuner interface when the
   * current channel changes. Fires the Gst::Tuner::channel-changed signal.
   * @param channel A Gst::TunerChannel instance.
   */
  void channel_changed(const Glib::RefPtr<Gst::TunerChannel>& channel);
  
  /** Called by elements implementing the Gst::Tuner interface when the
   * current norm changes. Fires the Gst::Tuner::norm-changed signal.
   * @param norm A Gst::TunerNorm instance.
   */
  void norm_changed(const Glib::RefPtr<Gst::TunerNorm>& norm);
  
  /** Called by elements implementing the Gst::Tuner interface when the
   * configured frequency changes. Fires the Gst::Tuner::frequency-changed
   * signal on the tuner, and the Gst::TunerChannel::frequency-changed signal
   * on the channel.
   * @param channel The current Gst::TunerChannel.
   * @param frequency The new frequency setting.
   */
  void frequency_changed(const Glib::RefPtr<Gst::TunerChannel>& channel, gulong frequency);
  
  /** Called by elements implementing the Gst::Tuner interface when the
   * incoming signal strength changes. Fires the Gst::Tuner::signal-changed
   * signal on the tuner and the Gst::TunerChannel::signal-changed signal on 
   * the channel.
   * @param channel The current Gst::TunerChannel.
   * @param signal The new signal strength.
   */
  void signal_changed(const Glib::RefPtr<Gst::TunerChannel>& channel, int signal);

 
  /** Reports that the current Gst::TunerChannel has changed.
   * @param channel The Gst::TunerChannel that has changed.
   *
   * @par Prototype:
   * <tt>void on_my_%channel_changed(const Glib::RefPtr<Gst::TunerChannel>& channel)</tt>
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gst::TunerChannel>& > signal_channel_changed();


  /** Reports that the current frequency has changed.
   * @param channel The Gst::TunerChannel who's frequency has changed.
   * @param frequency The new frequency.
   *
   * @par Prototype:
   * <tt>void on_my_%frequency_changed(const Glib::RefPtr<Gst::TunerChannel>& channel, gulong frequency)</tt>
   */

  Glib::SignalProxy2< void,const Glib::RefPtr<Gst::TunerChannel>&,gulong > signal_frequency_changed();


  /** Reports that the current Gst::TunerNorm has changed.
   * @param norm The Gst::TunerNorm that has changed.
   *
   * @par Prototype:
   * <tt>void on_my_%norm_changed(const Glib::RefPtr<Gst::TunerNorm>& norm)</tt>
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gst::TunerNorm>& > signal_norm_changed();


  /** Reports that the signal strength has changed.
   * @param channel The Gst::TunerChannel who's signal has changed.
   * @param signal The new signal.
   *
   * @par Prototype:
   * <tt>void on_my_%signal_changed(const Glib::RefPtr<Gst::TunerChannel>& channel, int signal)</tt>
   */

  Glib::SignalProxy2< void,const Glib::RefPtr<Gst::TunerChannel>&,int > signal_signal_changed();


  virtual Glib::ListHandle< Glib::RefPtr<Gst::TunerChannel> > list_channels_vfunc() const;

    virtual void set_channel_vfunc(const Glib::RefPtr<Gst::TunerChannel>& channel);

    virtual Glib::RefPtr<Gst::TunerChannel> get_channel_vfunc() const;


  virtual Glib::ListHandle< Glib::RefPtr<Gst::TunerNorm> > list_norms_vfunc() const;

    virtual void set_norm_vfunc(const Glib::RefPtr<Gst::TunerNorm>& norm);

    virtual Glib::RefPtr<Gst::TunerNorm> get_norm_vfunc() const;

    virtual void set_frequency_vfunc(const Glib::RefPtr<Gst::TunerChannel>& channel, gulong frequency);

    virtual gulong get_frequency_vfunc(const Glib::RefPtr<Gst::TunerChannel>& channel) const;

    virtual int signal_strength_vfunc(const Glib::RefPtr<Gst::TunerChannel>& channel) const;


protected:

  
public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_channel_changed(const Glib::RefPtr<Gst::TunerChannel>& channel);
  virtual void on_frequency_changed(const Glib::RefPtr<Gst::TunerChannel>& channel, gulong frequency);
  virtual void on_norm_changed(const Glib::RefPtr<Gst::TunerNorm>& norm);
  virtual void on_signal_changed(const Glib::RefPtr<Gst::TunerChannel>& channel, int signal);


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
   * @relates Gst::Tuner
   */
  Glib::RefPtr<Gst::Tuner> wrap(GstTuner* object, bool take_copy = false);

} // namespace Glib


#endif /* _GSTREAMERMM_TUNER_H */
