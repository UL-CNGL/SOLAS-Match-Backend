// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PasswordResetEmail.proto

#ifndef PROTOBUF_PasswordResetEmail_2eproto__INCLUDED
#define PROTOBUF_PasswordResetEmail_2eproto__INCLUDED

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
void  protobuf_AddDesc_PasswordResetEmail_2eproto();
void protobuf_AssignDesc_PasswordResetEmail_2eproto();
void protobuf_ShutdownFile_PasswordResetEmail_2eproto();

class PasswordResetEmail;

// ===================================================================

class PasswordResetEmail : public ::google::protobuf::Message {
 public:
  PasswordResetEmail();
  virtual ~PasswordResetEmail();

  PasswordResetEmail(const PasswordResetEmail& from);

  inline PasswordResetEmail& operator=(const PasswordResetEmail& from) {
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
  static const PasswordResetEmail& default_instance();

  void Swap(PasswordResetEmail* other);

  // implements Message ----------------------------------------------

  PasswordResetEmail* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PasswordResetEmail& from);
  void MergeFrom(const PasswordResetEmail& from);
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

  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = PasswordResetEmail];
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

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Emails.PasswordResetEmail)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_user_id();
  inline void clear_has_user_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int email_type_;
  ::google::protobuf::int32 user_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_PasswordResetEmail_2eproto();
  friend void protobuf_AssignDesc_PasswordResetEmail_2eproto();
  friend void protobuf_ShutdownFile_PasswordResetEmail_2eproto();

  void InitAsDefaultInstance();
  static PasswordResetEmail* default_instance_;
};
// ===================================================================


// ===================================================================

// PasswordResetEmail

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = PasswordResetEmail];
inline bool PasswordResetEmail::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PasswordResetEmail::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PasswordResetEmail::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PasswordResetEmail::clear_email_type() {
  email_type_ = 5;
  clear_has_email_type();
}
inline ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type PasswordResetEmail::email_type() const {
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
inline void PasswordResetEmail::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
}

// required int32 user_id = 2;
inline bool PasswordResetEmail::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PasswordResetEmail::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PasswordResetEmail::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PasswordResetEmail::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 PasswordResetEmail::user_id() const {
  return user_id_;
}
inline void PasswordResetEmail::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
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

#endif  // PROTOBUF_PasswordResetEmail_2eproto__INCLUDED
