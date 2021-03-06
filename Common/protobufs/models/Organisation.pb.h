// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Organisation.proto

#ifndef PROTOBUF_Organisation_2eproto__INCLUDED
#define PROTOBUF_Organisation_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Models {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Organisation_2eproto();
void protobuf_AssignDesc_Organisation_2eproto();
void protobuf_ShutdownFile_Organisation_2eproto();

class Organisation;

// ===================================================================

class Organisation : public ::google::protobuf::Message {
 public:
  Organisation();
  virtual ~Organisation();

  Organisation(const Organisation& from);

  inline Organisation& operator=(const Organisation& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Organisation& default_instance();

  void Swap(Organisation* other);

  // implements Message ----------------------------------------------

  Organisation* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Organisation& from);
  void MergeFrom(const Organisation& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string biography = 3;
  inline bool has_biography() const;
  inline void clear_biography();
  static const int kBiographyFieldNumber = 3;
  inline const ::std::string& biography() const;
  inline void set_biography(const ::std::string& value);
  inline void set_biography(const char* value);
  inline void set_biography(const char* value, size_t size);
  inline ::std::string* mutable_biography();
  inline ::std::string* release_biography();
  inline void set_allocated_biography(::std::string* biography);

  // optional string homepage = 4;
  inline bool has_homepage() const;
  inline void clear_homepage();
  static const int kHomepageFieldNumber = 4;
  inline const ::std::string& homepage() const;
  inline void set_homepage(const ::std::string& value);
  inline void set_homepage(const char* value);
  inline void set_homepage(const char* value, size_t size);
  inline ::std::string* mutable_homepage();
  inline ::std::string* release_homepage();
  inline void set_allocated_homepage(::std::string* homepage);

  // optional string email = 5;
  inline bool has_email() const;
  inline void clear_email();
  static const int kEmailFieldNumber = 5;
  inline const ::std::string& email() const;
  inline void set_email(const ::std::string& value);
  inline void set_email(const char* value);
  inline void set_email(const char* value, size_t size);
  inline ::std::string* mutable_email();
  inline ::std::string* release_email();
  inline void set_allocated_email(::std::string* email);

  // optional string address = 6;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 6;
  inline const ::std::string& address() const;
  inline void set_address(const ::std::string& value);
  inline void set_address(const char* value);
  inline void set_address(const char* value, size_t size);
  inline ::std::string* mutable_address();
  inline ::std::string* release_address();
  inline void set_allocated_address(::std::string* address);

  // optional string city = 7;
  inline bool has_city() const;
  inline void clear_city();
  static const int kCityFieldNumber = 7;
  inline const ::std::string& city() const;
  inline void set_city(const ::std::string& value);
  inline void set_city(const char* value);
  inline void set_city(const char* value, size_t size);
  inline ::std::string* mutable_city();
  inline ::std::string* release_city();
  inline void set_allocated_city(::std::string* city);

  // optional string country = 8;
  inline bool has_country() const;
  inline void clear_country();
  static const int kCountryFieldNumber = 8;
  inline const ::std::string& country() const;
  inline void set_country(const ::std::string& value);
  inline void set_country(const char* value);
  inline void set_country(const char* value, size_t size);
  inline ::std::string* mutable_country();
  inline ::std::string* release_country();
  inline void set_allocated_country(::std::string* country);

  // optional string regionalFocus = 9;
  inline bool has_regionalfocus() const;
  inline void clear_regionalfocus();
  static const int kRegionalFocusFieldNumber = 9;
  inline const ::std::string& regionalfocus() const;
  inline void set_regionalfocus(const ::std::string& value);
  inline void set_regionalfocus(const char* value);
  inline void set_regionalfocus(const char* value, size_t size);
  inline ::std::string* mutable_regionalfocus();
  inline ::std::string* release_regionalfocus();
  inline void set_allocated_regionalfocus(::std::string* regionalfocus);

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Models.Organisation)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_biography();
  inline void clear_has_biography();
  inline void set_has_homepage();
  inline void clear_has_homepage();
  inline void set_has_email();
  inline void clear_has_email();
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_city();
  inline void clear_has_city();
  inline void set_has_country();
  inline void clear_has_country();
  inline void set_has_regionalfocus();
  inline void clear_has_regionalfocus();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::std::string* biography_;
  ::std::string* homepage_;
  ::std::string* email_;
  ::std::string* address_;
  ::std::string* city_;
  ::std::string* country_;
  ::std::string* regionalfocus_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  friend void  protobuf_AddDesc_Organisation_2eproto();
  friend void protobuf_AssignDesc_Organisation_2eproto();
  friend void protobuf_ShutdownFile_Organisation_2eproto();

  void InitAsDefaultInstance();
  static Organisation* default_instance_;
};
// ===================================================================


// ===================================================================

// Organisation

// optional int32 id = 1;
inline bool Organisation::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Organisation::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Organisation::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Organisation::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Organisation::id() const {
  return id_;
}
inline void Organisation::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string name = 2;
inline bool Organisation::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Organisation::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Organisation::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Organisation::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Organisation::name() const {
  return *name_;
}
inline void Organisation::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Organisation::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Organisation::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Organisation::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string biography = 3;
inline bool Organisation::has_biography() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Organisation::set_has_biography() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Organisation::clear_has_biography() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Organisation::clear_biography() {
  if (biography_ != &::google::protobuf::internal::kEmptyString) {
    biography_->clear();
  }
  clear_has_biography();
}
inline const ::std::string& Organisation::biography() const {
  return *biography_;
}
inline void Organisation::set_biography(const ::std::string& value) {
  set_has_biography();
  if (biography_ == &::google::protobuf::internal::kEmptyString) {
    biography_ = new ::std::string;
  }
  biography_->assign(value);
}
inline void Organisation::set_biography(const char* value) {
  set_has_biography();
  if (biography_ == &::google::protobuf::internal::kEmptyString) {
    biography_ = new ::std::string;
  }
  biography_->assign(value);
}
inline void Organisation::set_biography(const char* value, size_t size) {
  set_has_biography();
  if (biography_ == &::google::protobuf::internal::kEmptyString) {
    biography_ = new ::std::string;
  }
  biography_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_biography() {
  set_has_biography();
  if (biography_ == &::google::protobuf::internal::kEmptyString) {
    biography_ = new ::std::string;
  }
  return biography_;
}
inline ::std::string* Organisation::release_biography() {
  clear_has_biography();
  if (biography_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = biography_;
    biography_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_biography(::std::string* biography) {
  if (biography_ != &::google::protobuf::internal::kEmptyString) {
    delete biography_;
  }
  if (biography) {
    set_has_biography();
    biography_ = biography;
  } else {
    clear_has_biography();
    biography_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string homepage = 4;
inline bool Organisation::has_homepage() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Organisation::set_has_homepage() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Organisation::clear_has_homepage() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Organisation::clear_homepage() {
  if (homepage_ != &::google::protobuf::internal::kEmptyString) {
    homepage_->clear();
  }
  clear_has_homepage();
}
inline const ::std::string& Organisation::homepage() const {
  return *homepage_;
}
inline void Organisation::set_homepage(const ::std::string& value) {
  set_has_homepage();
  if (homepage_ == &::google::protobuf::internal::kEmptyString) {
    homepage_ = new ::std::string;
  }
  homepage_->assign(value);
}
inline void Organisation::set_homepage(const char* value) {
  set_has_homepage();
  if (homepage_ == &::google::protobuf::internal::kEmptyString) {
    homepage_ = new ::std::string;
  }
  homepage_->assign(value);
}
inline void Organisation::set_homepage(const char* value, size_t size) {
  set_has_homepage();
  if (homepage_ == &::google::protobuf::internal::kEmptyString) {
    homepage_ = new ::std::string;
  }
  homepage_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_homepage() {
  set_has_homepage();
  if (homepage_ == &::google::protobuf::internal::kEmptyString) {
    homepage_ = new ::std::string;
  }
  return homepage_;
}
inline ::std::string* Organisation::release_homepage() {
  clear_has_homepage();
  if (homepage_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = homepage_;
    homepage_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_homepage(::std::string* homepage) {
  if (homepage_ != &::google::protobuf::internal::kEmptyString) {
    delete homepage_;
  }
  if (homepage) {
    set_has_homepage();
    homepage_ = homepage;
  } else {
    clear_has_homepage();
    homepage_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string email = 5;
inline bool Organisation::has_email() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Organisation::set_has_email() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Organisation::clear_has_email() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Organisation::clear_email() {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    email_->clear();
  }
  clear_has_email();
}
inline const ::std::string& Organisation::email() const {
  return *email_;
}
inline void Organisation::set_email(const ::std::string& value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Organisation::set_email(const char* value) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(value);
}
inline void Organisation::set_email(const char* value, size_t size) {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  email_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_email() {
  set_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    email_ = new ::std::string;
  }
  return email_;
}
inline ::std::string* Organisation::release_email() {
  clear_has_email();
  if (email_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = email_;
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_email(::std::string* email) {
  if (email_ != &::google::protobuf::internal::kEmptyString) {
    delete email_;
  }
  if (email) {
    set_has_email();
    email_ = email;
  } else {
    clear_has_email();
    email_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string address = 6;
inline bool Organisation::has_address() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Organisation::set_has_address() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Organisation::clear_has_address() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Organisation::clear_address() {
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    address_->clear();
  }
  clear_has_address();
}
inline const ::std::string& Organisation::address() const {
  return *address_;
}
inline void Organisation::set_address(const ::std::string& value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void Organisation::set_address(const char* value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void Organisation::set_address(const char* value, size_t size) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_address() {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  return address_;
}
inline ::std::string* Organisation::release_address() {
  clear_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = address_;
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_address(::std::string* address) {
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    delete address_;
  }
  if (address) {
    set_has_address();
    address_ = address;
  } else {
    clear_has_address();
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string city = 7;
inline bool Organisation::has_city() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Organisation::set_has_city() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Organisation::clear_has_city() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Organisation::clear_city() {
  if (city_ != &::google::protobuf::internal::kEmptyString) {
    city_->clear();
  }
  clear_has_city();
}
inline const ::std::string& Organisation::city() const {
  return *city_;
}
inline void Organisation::set_city(const ::std::string& value) {
  set_has_city();
  if (city_ == &::google::protobuf::internal::kEmptyString) {
    city_ = new ::std::string;
  }
  city_->assign(value);
}
inline void Organisation::set_city(const char* value) {
  set_has_city();
  if (city_ == &::google::protobuf::internal::kEmptyString) {
    city_ = new ::std::string;
  }
  city_->assign(value);
}
inline void Organisation::set_city(const char* value, size_t size) {
  set_has_city();
  if (city_ == &::google::protobuf::internal::kEmptyString) {
    city_ = new ::std::string;
  }
  city_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_city() {
  set_has_city();
  if (city_ == &::google::protobuf::internal::kEmptyString) {
    city_ = new ::std::string;
  }
  return city_;
}
inline ::std::string* Organisation::release_city() {
  clear_has_city();
  if (city_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = city_;
    city_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_city(::std::string* city) {
  if (city_ != &::google::protobuf::internal::kEmptyString) {
    delete city_;
  }
  if (city) {
    set_has_city();
    city_ = city;
  } else {
    clear_has_city();
    city_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string country = 8;
inline bool Organisation::has_country() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Organisation::set_has_country() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Organisation::clear_has_country() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Organisation::clear_country() {
  if (country_ != &::google::protobuf::internal::kEmptyString) {
    country_->clear();
  }
  clear_has_country();
}
inline const ::std::string& Organisation::country() const {
  return *country_;
}
inline void Organisation::set_country(const ::std::string& value) {
  set_has_country();
  if (country_ == &::google::protobuf::internal::kEmptyString) {
    country_ = new ::std::string;
  }
  country_->assign(value);
}
inline void Organisation::set_country(const char* value) {
  set_has_country();
  if (country_ == &::google::protobuf::internal::kEmptyString) {
    country_ = new ::std::string;
  }
  country_->assign(value);
}
inline void Organisation::set_country(const char* value, size_t size) {
  set_has_country();
  if (country_ == &::google::protobuf::internal::kEmptyString) {
    country_ = new ::std::string;
  }
  country_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_country() {
  set_has_country();
  if (country_ == &::google::protobuf::internal::kEmptyString) {
    country_ = new ::std::string;
  }
  return country_;
}
inline ::std::string* Organisation::release_country() {
  clear_has_country();
  if (country_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = country_;
    country_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_country(::std::string* country) {
  if (country_ != &::google::protobuf::internal::kEmptyString) {
    delete country_;
  }
  if (country) {
    set_has_country();
    country_ = country;
  } else {
    clear_has_country();
    country_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string regionalFocus = 9;
inline bool Organisation::has_regionalfocus() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Organisation::set_has_regionalfocus() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Organisation::clear_has_regionalfocus() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Organisation::clear_regionalfocus() {
  if (regionalfocus_ != &::google::protobuf::internal::kEmptyString) {
    regionalfocus_->clear();
  }
  clear_has_regionalfocus();
}
inline const ::std::string& Organisation::regionalfocus() const {
  return *regionalfocus_;
}
inline void Organisation::set_regionalfocus(const ::std::string& value) {
  set_has_regionalfocus();
  if (regionalfocus_ == &::google::protobuf::internal::kEmptyString) {
    regionalfocus_ = new ::std::string;
  }
  regionalfocus_->assign(value);
}
inline void Organisation::set_regionalfocus(const char* value) {
  set_has_regionalfocus();
  if (regionalfocus_ == &::google::protobuf::internal::kEmptyString) {
    regionalfocus_ = new ::std::string;
  }
  regionalfocus_->assign(value);
}
inline void Organisation::set_regionalfocus(const char* value, size_t size) {
  set_has_regionalfocus();
  if (regionalfocus_ == &::google::protobuf::internal::kEmptyString) {
    regionalfocus_ = new ::std::string;
  }
  regionalfocus_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Organisation::mutable_regionalfocus() {
  set_has_regionalfocus();
  if (regionalfocus_ == &::google::protobuf::internal::kEmptyString) {
    regionalfocus_ = new ::std::string;
  }
  return regionalfocus_;
}
inline ::std::string* Organisation::release_regionalfocus() {
  clear_has_regionalfocus();
  if (regionalfocus_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = regionalfocus_;
    regionalfocus_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Organisation::set_allocated_regionalfocus(::std::string* regionalfocus) {
  if (regionalfocus_ != &::google::protobuf::internal::kEmptyString) {
    delete regionalfocus_;
  }
  if (regionalfocus) {
    set_has_regionalfocus();
    regionalfocus_ = regionalfocus;
  } else {
    clear_has_regionalfocus();
    regionalfocus_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Organisation_2eproto__INCLUDED
