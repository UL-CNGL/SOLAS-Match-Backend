// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrgCreatedNotificationRequest.proto

#ifndef PROTOBUF_OrgCreatedNotificationRequest_2eproto__INCLUDED
#define PROTOBUF_OrgCreatedNotificationRequest_2eproto__INCLUDED

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
namespace Requests {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_OrgCreatedNotificationRequest_2eproto();
void protobuf_AssignDesc_OrgCreatedNotificationRequest_2eproto();
void protobuf_ShutdownFile_OrgCreatedNotificationRequest_2eproto();

class OrgCreatedNotificationRequest;

// ===================================================================

class OrgCreatedNotificationRequest : public ::google::protobuf::Message {
 public:
  OrgCreatedNotificationRequest();
  virtual ~OrgCreatedNotificationRequest();

  OrgCreatedNotificationRequest(const OrgCreatedNotificationRequest& from);

  inline OrgCreatedNotificationRequest& operator=(const OrgCreatedNotificationRequest& from) {
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
  static const OrgCreatedNotificationRequest& default_instance();

  void Swap(OrgCreatedNotificationRequest* other);

  // implements Message ----------------------------------------------

  OrgCreatedNotificationRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OrgCreatedNotificationRequest& from);
  void MergeFrom(const OrgCreatedNotificationRequest& from);
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

  // required string class_name = 1 [default = "OrgCreatedNotificationRequest"];
  inline bool has_class_name() const;
  inline void clear_class_name();
  static const int kClassNameFieldNumber = 1;
  inline const ::std::string& class_name() const;
  inline void set_class_name(const ::std::string& value);
  inline void set_class_name(const char* value);
  inline void set_class_name(const char* value, size_t size);
  inline ::std::string* mutable_class_name();
  inline ::std::string* release_class_name();
  inline void set_allocated_class_name(::std::string* class_name);

  // required int32 org_id = 2;
  inline bool has_org_id() const;
  inline void clear_org_id();
  static const int kOrgIdFieldNumber = 2;
  inline ::google::protobuf::int32 org_id() const;
  inline void set_org_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Requests.OrgCreatedNotificationRequest)
 private:
  inline void set_has_class_name();
  inline void clear_has_class_name();
  inline void set_has_org_id();
  inline void clear_has_org_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* class_name_;
  static ::std::string* _default_class_name_;
  ::google::protobuf::int32 org_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_OrgCreatedNotificationRequest_2eproto();
  friend void protobuf_AssignDesc_OrgCreatedNotificationRequest_2eproto();
  friend void protobuf_ShutdownFile_OrgCreatedNotificationRequest_2eproto();

  void InitAsDefaultInstance();
  static OrgCreatedNotificationRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// OrgCreatedNotificationRequest

// required string class_name = 1 [default = "OrgCreatedNotificationRequest"];
inline bool OrgCreatedNotificationRequest::has_class_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OrgCreatedNotificationRequest::set_has_class_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OrgCreatedNotificationRequest::clear_has_class_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OrgCreatedNotificationRequest::clear_class_name() {
  if (class_name_ != _default_class_name_) {
    class_name_->assign(*_default_class_name_);
  }
  clear_has_class_name();
}
inline const ::std::string& OrgCreatedNotificationRequest::class_name() const {
  return *class_name_;
}
inline void OrgCreatedNotificationRequest::set_class_name(const ::std::string& value) {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void OrgCreatedNotificationRequest::set_class_name(const char* value) {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void OrgCreatedNotificationRequest::set_class_name(const char* value, size_t size) {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* OrgCreatedNotificationRequest::mutable_class_name() {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string(*_default_class_name_);
  }
  return class_name_;
}
inline ::std::string* OrgCreatedNotificationRequest::release_class_name() {
  clear_has_class_name();
  if (class_name_ == _default_class_name_) {
    return NULL;
  } else {
    ::std::string* temp = class_name_;
    class_name_ = const_cast< ::std::string*>(_default_class_name_);
    return temp;
  }
}
inline void OrgCreatedNotificationRequest::set_allocated_class_name(::std::string* class_name) {
  if (class_name_ != _default_class_name_) {
    delete class_name_;
  }
  if (class_name) {
    set_has_class_name();
    class_name_ = class_name;
  } else {
    clear_has_class_name();
    class_name_ = const_cast< ::std::string*>(_default_class_name_);
  }
}

// required int32 org_id = 2;
inline bool OrgCreatedNotificationRequest::has_org_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OrgCreatedNotificationRequest::set_has_org_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OrgCreatedNotificationRequest::clear_has_org_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OrgCreatedNotificationRequest::clear_org_id() {
  org_id_ = 0;
  clear_has_org_id();
}
inline ::google::protobuf::int32 OrgCreatedNotificationRequest::org_id() const {
  return org_id_;
}
inline void OrgCreatedNotificationRequest::set_org_id(::google::protobuf::int32 value) {
  set_has_org_id();
  org_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Requests
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

#endif  // PROTOBUF_OrgCreatedNotificationRequest_2eproto__INCLUDED
