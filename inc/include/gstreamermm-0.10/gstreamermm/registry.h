// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_REGISTRY_H
#define _GSTREAMERMM_REGISTRY_H


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

#include <gst/gstregistry.h>
#include <gstreamermm/object.h>
#include <gstreamermm/plugin.h>
#include <gstreamermm/pluginfeature.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GstRegistry GstRegistry;
typedef struct _GstRegistryClass GstRegistryClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gst
{ class Registry_Class; } // namespace Gst
namespace Gst
{

class Plugin;
class PluginFeature;

/** An abstract base class for management of Gst::Plugin objects.
  * One registry holds the metadata of a set of plugins. All registries build
  * the GstRegistryPool.
  *
  * Design:
  *
  * The Gst::Registry object is a list of plugins and some functions for
  * dealing with them. Gst::Plugins are matched 1-1 with a file on disk, and
  * may or may not be loaded at a given time. There may be multiple
  * Gst::Registry objects, but the "default registry" is the only object that
  * has any meaning to the core.
  *
  * The registry.xml file is actually a cache of plugin information. This is
  * unlike versions prior to 0.10, where the registry file was the primary
  * source of plugin information, and was created by the gst-register command.
  *
  * The primary source, at all times, of plugin information is each plugin file
  * itself. Thus, if an application wants information about a particular
  * plugin, or wants to search for a feature that satisfies given criteria, the
  * primary means of doing so is to load every plugin and look at the resulting
  * information that is gathered in the default registry. Clearly, this is a
  * time consuming process, so we cache information in the registry.xml file.
  *
  * On startup, plugins are searched for in the plugin search path. This path
  * can be set directly using the GST_PLUGIN_PATH environment variable. The
  * registry file is loaded from
  * ~/.gstreamer-$GST_MAJORMINOR/registry-$ARCH.xml or the file listed in the
  * GST_REGISTRY env var. The only reason to change the registry location is
  * for testing.
  *
  * For each plugin that is found in the plugin search path, there could be 3
  * possibilities for cached information:
  *
  *    - the cache may not contain information about a given file.
  *    - the cache may have stale information.
  *    - the cache may have current information.
  *
  * In the first two cases, the plugin is loaded and the cache updated. In
  * addition to these cases, the cache may have entries for plugins that are
  * not relevant to the current process. These are marked as not available to
  * the current process. If the cache is updated for whatever reason, it is
  * marked dirty.
  *
  * A dirty cache is written out at the end of initialization. Each entry is
  * checked to make sure the information is minimally valid. If not, the entry
  * is simply dropped.
  *
  * Implementation notes:
  *
  * The "cache" and "default registry" are different concepts and can represent
  * different sets of plugins. For various reasons, at init time, the cache is
  * stored in the default registry, and plugins not relevant to the current
  * process are marked with the GST_PLUGIN_FLAG_CACHED bit. These plugins are
  * removed at the end of intitialization.
 */

class Registry : public Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Registry CppObjectType;
  typedef Registry_Class CppClassType;
  typedef GstRegistry BaseObjectType;
  typedef GstRegistryClass BaseClassType;

private:  friend class Registry_Class;
  static CppClassType registry_class_;

private:
  // noncopyable
  Registry(const Registry&);
  Registry& operator=(const Registry&);

protected:
  explicit Registry(const Glib::ConstructParams& construct_params);
  explicit Registry(GstRegistry* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Registry();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstRegistry*       gobj()       { return reinterpret_cast<GstRegistry*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstRegistry* gobj() const { return reinterpret_cast<GstRegistry*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstRegistry* gobj_copy();

private:


public:
  
  /** Retrieves the default registry. The caller does not own a reference on the
   * registry, as it is alive as long as GStreamer is initialized.
   * @return The default Gst::Registry.
   */
  static Glib::RefPtr<Gst::Registry> get_default();

 
  /** Retrieves a List of Gst::PluginFeature of @a type.
   * @param type A Type.
   * @return A List of
   * Gst::PluginFeature of @a type. Use Gst::PluginFeature::list_free() after use
   * 
   * MT safe.
   */
  Glib::ListHandle< Glib::RefPtr<Gst::PluginFeature> > get_feature_list(GType type);

 
  /** Retrieves a List of Gst::PluginFeature of @a type.
   * @param type A Type.
   * @return A List of
   * Gst::PluginFeature of @a type. Use Gst::PluginFeature::list_free() after use
   * 
   * MT safe.
   */
  Glib::ListHandle< Glib::RefPtr<const Gst::PluginFeature> > get_feature_list(GType type) const;

  
  /** Returns the registrys feature list cookie. This changes
   * every time a feature is added or removed from the registry.
   * @return The feature list cookie.
   */
  guint32 get_feature_list_cookie() const;
  
  /** Retrieves a List of features of the plugin with name @a name.
   * @param name A plugin name.
   * @return A List of
   * Gst::PluginFeature. Use Gst::PluginFeature::list_free() after usage.
   */
  Glib::ListHandle< Glib::RefPtr<Gst::PluginFeature> > get_feature_list(const Glib::ustring& name);
  
  /** Retrieves a List of features of the plugin with name @a name.
   * @param name A plugin name.
   * @return A List of
   * Gst::PluginFeature. Use Gst::PluginFeature::list_free() after usage.
   */
  Glib::ListHandle< Glib::RefPtr<const Gst::PluginFeature> > get_feature_list(const Glib::ustring& name) const;

 
  /** Get the list of paths for the given registry.
   * @return A List of paths as
   * strings. g_list_free after use.
   * 
   * MT safe.
   */
  Glib::ListHandle< Glib::ustring > get_path_list() const;

 
  /** Get a copy of all plugins registered in the given registry. The refcount
   * of each element in the list in incremented.
   * @return A List of Gst::Plugin.
   * Use Gst::Plugin::list_free() after usage.
   * 
   * MT safe.
   */
  Glib::ListHandle< Glib::RefPtr<Gst::Plugin> > get_plugin_list();

 
  /** Get a copy of all plugins registered in the given registry. The refcount
   * of each element in the list in incremented.
   * @return A List of Gst::Plugin.
   * Use Gst::Plugin::list_free() after usage.
   * 
   * MT safe.
   */
  Glib::ListHandle< Glib::RefPtr<const Gst::Plugin> > get_plugin_list() const;

  
  /** Add the plugin to the registry. The plugin-added signal will be emitted.
   * This function will sink @a plugin.
   * @param plugin The plugin to add.
   * @return <tt>true</tt> on success.
   * 
   * MT safe.
   */
  bool add_plugin(const Glib::RefPtr<Gst::Plugin>& plugin);
  
  /** Remove the plugin from the registry.
   * 
   * MT safe.
   * @param plugin The plugin to remove.
   */
  void remove_plugin(const Glib::RefPtr<Gst::Plugin>& plugin);

  /** Runs a filter against all plugins in the registry and returns a List with
   * the results. If the first flag is set, only the first match is returned
   * (as a list with a single object).
   *
   * @param filter The filter to use.
   * @param first Only return first match.
   * @return A list of Gst::Plugin. MT safe.
   *
   */
  Glib::ListHandle< Glib::RefPtr<Gst::Plugin> > get_plugin_list(const Plugin::SlotFilter& filter, bool first);
  

  /** Runs a filter against all plugins in the registry and returns a List with
   * the results. If the first flag is set, only the first match is returned
   * (as a list with a single object).
   *
   * @param filter The filter to use.
   * @param first Only return first match.
   * @return A list of Gst::Plugin. MT safe.
   *
   */
  Glib::ListHandle< Glib::RefPtr<const Gst::Plugin> > get_plugin_list(const Plugin::SlotFilter& filter, bool first) const;

  /** Runs a filter against all features of the plugins in the registry and
   * returns a List with the results. If the first flag is set, only the first
   * match is returned (as a list with a single object).
   *
   * @param registry Registry to query.
   * @param filter The filter to use.
   * @param first Only return first match.
   * @return A list of Gst::PluginFeature. MT safe.
   */
  Glib::ListHandle< Glib::RefPtr<Gst::PluginFeature> > get_feature_list(const PluginFeature::SlotFilter& filter, bool first);
  

  /** Runs a filter against all features of the plugins in the registry and
   * returns a List with the results. If the first flag is set, only the first
   * match is returned (as a list with a single object).
   *
   * @param registry Registry to query.
   * @param filter The filter to use.
   * @param first Only return first match.
   * @return A list of Gst::PluginFeature. MT safe.
   */
  Glib::ListHandle< Glib::RefPtr<const Gst::PluginFeature> > get_feature_list(const PluginFeature::SlotFilter& filter, bool first) const;

  
  /** Find the plugin with the given name in the registry.
   * The plugin will be reffed; caller is responsible for unreffing.
   * @param name The plugin name to find.
   * @return The plugin with the given name or <tt>0</tt> if the
   * plugin was not found. Gst::Object::unref() after usage.
   * 
   * MT safe.
   */
  Glib::RefPtr<Gst::Plugin> find_plugin(const Glib::ustring& name);
  
  /** Find the plugin with the given name in the registry.
   * The plugin will be reffed; caller is responsible for unreffing.
   * @param name The plugin name to find.
   * @return The plugin with the given name or <tt>0</tt> if the
   * plugin was not found. Gst::Object::unref() after usage.
   * 
   * MT safe.
   */
  Glib::RefPtr<const Gst::Plugin> find_plugin(const Glib::ustring& name) const;
  
  /** Find the pluginfeature with the given name and type in the registry.
   * @param name The pluginfeature name to find.
   * @param type The pluginfeature type to find.
   * @return The pluginfeature with the given name and type
   * or <tt>0</tt> if the plugin was not found. Gst::Object::unref() after usage.
   * 
   * MT safe.
   */
  Glib::RefPtr<Gst::PluginFeature> find_feature(const Glib::ustring& name, GType type);
  
  /** Find the pluginfeature with the given name and type in the registry.
   * @param name The pluginfeature name to find.
   * @param type The pluginfeature type to find.
   * @return The pluginfeature with the given name and type
   * or <tt>0</tt> if the plugin was not found. Gst::Object::unref() after usage.
   * 
   * MT safe.
   */
  Glib::RefPtr<const Gst::PluginFeature> find_feature(const Glib::ustring& name, GType type) const;
  
  /** Find a Gst::PluginFeature with @a name in @a registry.
   * @param name A Gst::PluginFeature name.
   * @return A Gst::PluginFeature with its refcount incremented,
   * use Gst::Object::unref() after usage.
   * 
   * MT safe.
   */
  Glib::RefPtr<Gst::PluginFeature> lookup_feature(const Glib::ustring& name);
  
  /** Find a Gst::PluginFeature with @a name in @a registry.
   * @param name A Gst::PluginFeature name.
   * @return A Gst::PluginFeature with its refcount incremented,
   * use Gst::Object::unref() after usage.
   * 
   * MT safe.
   */
  Glib::RefPtr<const Gst::PluginFeature> lookup_feature(const Glib::ustring& name) const;
  
  /** Add the given path to the registry. The syntax of the
   * path is specific to the registry. If the path has already been
   * added, do nothing.
   * @param path The path to add to the registry.
   */
  void add_path(const Glib::ustring& path);
  
  /** Scan the given path for plugins to add to the registry. The syntax of the
   * path is specific to the registry.
   * @param path The path to scan.
   * @return <tt>true</tt> if registry changed.
   */
  void scan_path(const Glib::ustring& path);
  // binary or xml registry cache depends on USE_BINARY_REGISTRY def in
  // gstregistry.h

#ifdef USE_BINARY_REGISTRY
  /** Read the contents of the binary cache file at location into registry.
   *
   * @param location A filename.
   * @return true on success.
   */
  bool binary_read_cache(const Glib::ustring& location);
  

  /** Write the registry to a cache to file at given location.
   *
   * @param location A filename.
   * @return true on success.
   */
  void binary_write_cache(const Glib::ustring& location) const;
  
#else
  /** Read the contents of the XML cache file at location into registry.
   *
   * @param location A filename.
   * @return true on success. 
   */
  bool xml_read_cache(const Glib::ustring& location);
  

  /** Write registry in an XML format at the location given by location.
   * Directories are automatically created.
   *
   * @param location A filename.
   * @return true on success.
   */
  bool xml_write_cache(const Glib::ustring& location) const;
  
#endif

  
  /** Look up a plugin in the given registry with the given filename.
   * If found, plugin is reffed.
   * @param filename The name of the file to look up.
   * @return The Gst::Plugin if found, or <tt>0</tt> if not.
   * Gst::Object::unref() after usage.
   */
  Glib::RefPtr<Gst::Plugin> lookup(const Glib::ustring& filename);
  
  /** Look up a plugin in the given registry with the given filename.
   * If found, plugin is reffed.
   * @param filename The name of the file to look up.
   * @return The Gst::Plugin if found, or <tt>0</tt> if not.
   * Gst::Object::unref() after usage.
   */
  Glib::RefPtr<const Gst::Plugin> lookup(const Glib::ustring& filename) const;
  
  /** Remove the feature from the registry.
   * 
   * MT safe.
   * @param feature The feature to remove.
   */
  void remove_feature(const Glib::RefPtr<Gst::PluginFeature>& feature);
  
  /** Add the feature to the registry. The feature-added signal will be emitted.
   * This function sinks @a feature.
   * @param feature The feature to add.
   * @return <tt>true</tt> on success.
   * 
   * MT safe.
   */
  void add_feature(const Glib::RefPtr<Gst::PluginFeature>& feature);
  
  /** Checks whether a plugin feature by the given name exists in the
   * default registry and whether its version is at least the
   * version required.
   * @param feature_name The name of the feature (e.g. "oggdemux").
   * @param min_major The minimum major version number.
   * @param min_minor The minimum minor version number.
   * @param min_micro The minimum micro version number.
   * @return #<tt>true</tt> if the feature could be found and the version is
   * the same as the required version or newer, and #<tt>false</tt> otherwise.
   */
  static bool check_feature_version(const Glib::ustring& feature_name, guint min_major, guint min_minor, guint min_micro);

 
  /** Signals that a feature has been added to the registry (possibly replacing
   * a previously-added one by the same name)
   *
   * @par Prototype:
   * <tt>void on_my_%feature_added(const Glib::RefPtr<Gst::PluginFeature>& feature)</tt>
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gst::PluginFeature>& > signal_feature_added();


  /** Signals that a plugin has been added to the registry (possibly replacing
   * a previously-added one by the same name)
   *
   * @par Prototype:
   * <tt>void on_my_%plugin_added(const Glib::RefPtr<Gst::Plugin>& plugin)</tt>
   */

  Glib::SignalProxy1< void,const Glib::RefPtr<Gst::Plugin>& > signal_plugin_added();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  virtual void on_feature_added(const Glib::RefPtr<Gst::PluginFeature>& feature);
  virtual void on_plugin_added(const Glib::RefPtr<Gst::Plugin>& plugin);


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
   * @relates Gst::Registry
   */
  Glib::RefPtr<Gst::Registry> wrap(GstRegistry* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_REGISTRY_H */
