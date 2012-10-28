// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_TEXTRENDER_H
#define _GSTREAMERMM_TEXTRENDER_H


#include <glibmm.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/element.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GstTextRender GstTextRender;
typedef struct _GstTextRenderClass GstTextRenderClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{ class TextRender_Class; } // namespace Gst
namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/**
 * @ingroup gstreamermmEnums
 */
enum TextRenderHAlign
{
  TEXT_RENDER_HALIGN_LEFT,
  TEXT_RENDER_HALIGN_CENTER,
  TEXT_RENDER_HALIGN_RIGHT
};

} // namespace Gst


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::TextRenderHAlign> : public Glib::Value_Enum<Gst::TextRenderHAlign>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{


/**
 * @ingroup gstreamermmEnums
 */
enum TextRenderVAlign
{
  TEXT_RENDER_VALIGN_BASELINE,
  TEXT_RENDER_VALIGN_BOTTOM,
  TEXT_RENDER_VALIGN_TOP
};

} // namespace Gst


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::TextRenderVAlign> : public Glib::Value_Enum<Gst::TextRenderVAlign>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{


/**
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%TextRenderLineAlign operator|(TextRenderLineAlign, TextRenderLineAlign)</tt><br>
 * <tt>%TextRenderLineAlign operator&(TextRenderLineAlign, TextRenderLineAlign)</tt><br>
 * <tt>%TextRenderLineAlign operator^(TextRenderLineAlign, TextRenderLineAlign)</tt><br>
 * <tt>%TextRenderLineAlign operator~(TextRenderLineAlign)</tt><br>
 * <tt>%TextRenderLineAlign& operator|=(TextRenderLineAlign&, TextRenderLineAlign)</tt><br>
 * <tt>%TextRenderLineAlign& operator&=(TextRenderLineAlign&, TextRenderLineAlign)</tt><br>
 * <tt>%TextRenderLineAlign& operator^=(TextRenderLineAlign&, TextRenderLineAlign)</tt><br>
 */
enum TextRenderLineAlign
{
  TEXT_RENDER_LINE_ALIGN_LEFT = 0,
  TEXT_RENDER_LINE_ALIGN_CENTER = 1,
  TEXT_RENDER_LINE_ALIGN_RIGHT = 2
};

/** @ingroup gstreamermmEnums */
inline TextRenderLineAlign operator|(TextRenderLineAlign lhs, TextRenderLineAlign rhs)
  { return static_cast<TextRenderLineAlign>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline TextRenderLineAlign operator&(TextRenderLineAlign lhs, TextRenderLineAlign rhs)
  { return static_cast<TextRenderLineAlign>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline TextRenderLineAlign operator^(TextRenderLineAlign lhs, TextRenderLineAlign rhs)
  { return static_cast<TextRenderLineAlign>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline TextRenderLineAlign operator~(TextRenderLineAlign flags)
  { return static_cast<TextRenderLineAlign>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline TextRenderLineAlign& operator|=(TextRenderLineAlign& lhs, TextRenderLineAlign rhs)
  { return (lhs = static_cast<TextRenderLineAlign>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline TextRenderLineAlign& operator&=(TextRenderLineAlign& lhs, TextRenderLineAlign rhs)
  { return (lhs = static_cast<TextRenderLineAlign>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline TextRenderLineAlign& operator^=(TextRenderLineAlign& lhs, TextRenderLineAlign rhs)
  { return (lhs = static_cast<TextRenderLineAlign>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::TextRenderLineAlign> : public Glib::Value_Flags<Gst::TextRenderLineAlign>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{


/** A Wrapper for the textrender plugin.
 * Please note that, though using the underlying GObject is fine, using its C
 * <B>type</B> is not guaranteed to be API stable across releases because it is
 * not guaranteed to always remain the same.  Also, not all plug-ins are
 * available on all systems so care must be taken that they exist before they
 * are used, otherwise there will be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 */

class TextRender
: public Gst::Element
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef TextRender CppObjectType;
  typedef TextRender_Class CppClassType;
  typedef GstTextRender BaseObjectType;
  typedef GstTextRenderClass BaseClassType;

private:  friend class TextRender_Class;
  static CppClassType textrender_class_;

private:
  // noncopyable
  TextRender(const TextRender&);
  TextRender& operator=(const TextRender&);

protected:
  explicit TextRender(const Glib::ConstructParams& construct_params);
  explicit TextRender(GstTextRender* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~TextRender();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstTextRender*       gobj()       { return reinterpret_cast<GstTextRender*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstTextRender* gobj() const { return reinterpret_cast<GstTextRender*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstTextRender* gobj_copy();

private:

  
protected:
  TextRender();
  explicit TextRender(const Glib::ustring& name);

public:
  /** Creates a new textrender plugin with a unique name.
   */
  
  static Glib::RefPtr<TextRender> create();


  /** Creates a new textrender plugin with the given name.
   */
  
  static Glib::RefPtr<TextRender> create(const Glib::ustring& name);


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Horizontal alignment of the text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gst::TextRenderHAlign> property_halignment() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Horizontal alignment of the text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gst::TextRenderHAlign> property_halignment() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Vertical alignment of the text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gst::TextRenderVAlign> property_valignment() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Vertical alignment of the text.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gst::TextRenderVAlign> property_valignment() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Alignment of text lines relative to each other.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gst::TextRenderLineAlign> property_line_alignment() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Alignment of text lines relative to each other.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gst::TextRenderLineAlign> property_line_alignment() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Horizontal paddding when using left/right alignment.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_xpad() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Horizontal paddding when using left/right alignment.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_xpad() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Vertical padding when using top/bottom alignment.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_ypad() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Vertical padding when using top/bottom alignment.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_ypad() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Pango font description of font to be used for rendering. See documentation of pango_font_description_from_string for syntax.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly<Glib::ustring> property_font_desc() ;
#endif //#GLIBMM_PROPERTIES_ENABLED


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
   * @relates Gst::TextRender
   */
  Glib::RefPtr<Gst::TextRender> wrap(GstTextRender* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_TEXTRENDER_H */
