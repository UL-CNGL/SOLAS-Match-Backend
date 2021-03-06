// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeadlineCheckRequest.proto

#ifndef PROTOBUF_DeadlineCheckRequest_2eproto__INCLUDED
#define PROTOBUF_DeadlineCheckRequest_2eproto__INCLUDED

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
void  protobuf_AddDesc_DeadlineCheckRequest_2eproto();
void protobuf_AssignDesc_DeadlineCheckRequest_2eproto();
void protobuf_ShutdownFile_DeadlineCheckRequest_2eproto();

class DeadlineCheckRequest;

// ===================================================================

class DeadlineCheckRequest : public ::google::protobuf::Message {
 public:
  DeadlineCheckRequest();
  virtual ~DeadlineCheckRequest();

  DeadlineCheckRequest(const DeadlineCheckRequest& from);

  inline DeadlineCheckRequest& operator=(const DeadlineCheckRequest& from) {
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
  static const DeadlineCheckRequest& default_instance();

  void Swap(DeadlineCheckRequest* other);

  // implements Message ----------------------------------------------

  DeadlineCheckRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeadlineCheckRequest& from);
  void MergeFrom(const DeadlineCheckRequest& from);
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

  // required string class_name = 1 [default = "DeadlineCheckRequest"];
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

  // optional int32 task_id = 2;
  inline bool has_task_id() const;
  inline void clear_task_id();
  static const int kTaskIdFieldNumber = 2;
  inline ::google::protobuf::int32 task_id() const;
  inline void set_task_id(::google::protobuf::int32 value);

  // optional int32 org_id = 3;
  inline bool has_org_id() const;
  inline void clear_org_id();
  static const int kOrgIdFieldNumber = 3;
  inline ::google::protobuf::int32 org_id() const;
  inline void set_org_id(::google::protobuf::int32 value);

  // optional int32 user_id = 4;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 4;
  inline ::google::protobuf::int32 user_id() const;
  inline void set_user_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Requests.DeadlineCheckRequest)
 private:
  inline void set_has_class_name();
  inline void clear_has_class_name();
  inline void set_has_task_id();
  inline void clear_has_task_id();
  inline void set_has_org_id();
  inline void clear_has_org_id();
  inline void set_has_user_id();
  inline void clear_has_user_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* class_name_;
  static ::std::string* _default_class_name_;
  ::google::protobuf::int32 task_id_;
  ::google::protobuf::int32 org_id_;
  ::google::protobuf::int32 user_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_DeadlineCheckRequest_2eproto();
  friend void protobuf_AssignDesc_DeadlineCheckRequest_2eproto();
  friend void protobuf_ShutdownFile_DeadlineCheckRequest_2eproto();

  void InitAsDefaultInstance();
  static DeadlineCheckRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// DeadlineCheckRequest

// required string class_name = 1 [default = "DeadlineCheckRequest"];
inline bool DeadlineCheckRequest::has_class_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DeadlineCheckRequest::set_has_class_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DeadlineCheckRequest::clear_has_class_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DeadlineCheckRequest::clear_class_name() {
  if (class_name_ != _default_class_name_) {
    class_name_->assign(*_default_class_name_);
  }
  clear_has_class_name();
}
inline const ::std::string& DeadlineCheckRequest::class_name() const {
  return *class_name_;
}
inline void DeadlineCheckRequest::set_class_name(const ::std::string& value) {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void DeadlineCheckRequest::set_class_name(const char* value) {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(value);
}
inline void DeadlineCheckRequest::set_class_name(const char* value, size_t size) {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string;
  }
  class_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DeadlineCheckRequest::mutable_class_name() {
  set_has_class_name();
  if (class_name_ == _default_class_name_) {
    class_name_ = new ::std::string(*_default_class_name_);
  }
  return class_name_;
}
inline ::std::string* DeadlineCheckRequest::release_class_name() {
  clear_has_class_name();
  if (class_name_ == _default_class_name_) {
    return NULL;
  } else {
    ::std::string* temp = class_name_;
    class_name_ = const_cast< ::std::string*>(_default_class_name_);
    return temp;
  }
}
inline void DeadlineCheckRequest::set_allocated_class_name(::std::string* class_name) {
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

// optional int32 task_id = 2;
inline bool DeadlineCheckRequest::has_task_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DeadlineCheckRequest::set_has_task_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DeadlineCheckRequest::clear_has_task_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DeadlineCheckRequest::clear_task_id() {
  task_id_ = 0;
  clear_has_task_id();
}
inline ::google::protobuf::int32 DeadlineCheckRequest::task_id() const {
  return task_id_;
}
inline void DeadlineCheckRequest::set_task_id(::google::protobuf::int32 value) {
  set_has_task_id();
  task_id_ = value;
}

// optional int32 org_id = 3;
inline bool DeadlineCheckRequest::has_org_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DeadlineCheckRequest::set_has_org_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DeadlineCheckRequest::clear_has_org_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DeadlineCheckRequest::clear_org_id() {
  org_id_ = 0;
  clear_has_org_id();
}
inline ::google::protobuf::int32 DeadlineCheckRequest::org_id() const {
  return org_id_;
}
inline void DeadlineCheckRequest::set_org_id(::google::protobuf::int32 value) {
  set_has_org_id();
  org_id_ = value;
}

// optional int32 user_id = 4;
inline bool DeadlineCheckRequest::has_user_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DeadlineCheckRequest::set_has_user_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DeadlineCheckRequest::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DeadlineCheckRequest::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 DeadlineCheckRequest::user_id() const {
  return user_id_;
}
inline void DeadlineCheckRequest::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
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

#endif  // PROTOBUF_DeadlineCheckRequest_2eproto__INCLUDED
