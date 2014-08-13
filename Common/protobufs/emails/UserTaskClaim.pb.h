// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserTaskClaim.proto

#ifndef PROTOBUF_UserTaskClaim_2eproto__INCLUDED
#define PROTOBUF_UserTaskClaim_2eproto__INCLUDED

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
#include "EmailMessage.pb.h"
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Emails {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_UserTaskClaim_2eproto();
void protobuf_AssignDesc_UserTaskClaim_2eproto();
void protobuf_ShutdownFile_UserTaskClaim_2eproto();

class UserTaskClaim;

// ===================================================================

class UserTaskClaim : public ::google::protobuf::Message {
 public:
  UserTaskClaim();
  virtual ~UserTaskClaim();

  UserTaskClaim(const UserTaskClaim& from);

  inline UserTaskClaim& operator=(const UserTaskClaim& from) {
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
  static const UserTaskClaim& default_instance();

  void Swap(UserTaskClaim* other);

  // implements Message ----------------------------------------------

  UserTaskClaim* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UserTaskClaim& from);
  void MergeFrom(const UserTaskClaim& from);
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

  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskClaim];
  inline bool has_email_type() const;
  inline void clear_email_type();
  static const int kEmailTypeFieldNumber = 1;
  inline ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type email_type() const;
  inline void set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value);

  // required int32 user_id = 2;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 2;
  inline ::google::protobuf::int32 user_id() const;
  inline void set_user_id(::google::protobuf::int32 value);

  // required int32 task_id = 3;
  inline bool has_task_id() const;
  inline void clear_task_id();
  static const int kTaskIdFieldNumber = 3;
  inline ::google::protobuf::int32 task_id() const;
  inline void set_task_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Emails.UserTaskClaim)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_task_id();
  inline void clear_has_task_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int email_type_;
  ::google::protobuf::int32 user_id_;
  ::google::protobuf::int32 task_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_UserTaskClaim_2eproto();
  friend void protobuf_AssignDesc_UserTaskClaim_2eproto();
  friend void protobuf_ShutdownFile_UserTaskClaim_2eproto();

  void InitAsDefaultInstance();
  static UserTaskClaim* default_instance_;
};
// ===================================================================


// ===================================================================

// UserTaskClaim

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskClaim];
inline bool UserTaskClaim::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserTaskClaim::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserTaskClaim::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserTaskClaim::clear_email_type() {
  email_type_ = 2;
  clear_has_email_type();
}
inline ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type UserTaskClaim::email_type() const {
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
inline void UserTaskClaim::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
}

// required int32 user_id = 2;
inline bool UserTaskClaim::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UserTaskClaim::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UserTaskClaim::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UserTaskClaim::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 UserTaskClaim::user_id() const {
  return user_id_;
}
inline void UserTaskClaim::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
}

// required int32 task_id = 3;
inline bool UserTaskClaim::has_task_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserTaskClaim::set_has_task_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UserTaskClaim::clear_has_task_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UserTaskClaim::clear_task_id() {
  task_id_ = 0;
  clear_has_task_id();
}
inline ::google::protobuf::int32 UserTaskClaim::task_id() const {
  return task_id_;
}
inline void UserTaskClaim::set_task_id(::google::protobuf::int32 value) {
  set_has_task_id();
  task_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
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

#endif  // PROTOBUF_UserTaskClaim_2eproto__INCLUDED
