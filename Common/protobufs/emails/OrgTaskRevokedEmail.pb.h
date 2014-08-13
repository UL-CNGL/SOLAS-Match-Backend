// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OrgTaskRevokedEmail.proto

#ifndef PROTOBUF_OrgTaskRevokedEmail_2eproto__INCLUDED
#define PROTOBUF_OrgTaskRevokedEmail_2eproto__INCLUDED

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
void  protobuf_AddDesc_OrgTaskRevokedEmail_2eproto();
void protobuf_AssignDesc_OrgTaskRevokedEmail_2eproto();
void protobuf_ShutdownFile_OrgTaskRevokedEmail_2eproto();

class OrgTaskRevokedEmail;

// ===================================================================

class OrgTaskRevokedEmail : public ::google::protobuf::Message {
 public:
  OrgTaskRevokedEmail();
  virtual ~OrgTaskRevokedEmail();

  OrgTaskRevokedEmail(const OrgTaskRevokedEmail& from);

  inline OrgTaskRevokedEmail& operator=(const OrgTaskRevokedEmail& from) {
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
  static const OrgTaskRevokedEmail& default_instance();

  void Swap(OrgTaskRevokedEmail* other);

  // implements Message ----------------------------------------------

  OrgTaskRevokedEmail* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OrgTaskRevokedEmail& from);
  void MergeFrom(const OrgTaskRevokedEmail& from);
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

  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgTaskRevokedEmail];
  inline bool has_email_type() const;
  inline void clear_email_type();
  static const int kEmailTypeFieldNumber = 1;
  inline ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type email_type() const;
  inline void set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value);

  // required int32 task_id = 2;
  inline bool has_task_id() const;
  inline void clear_task_id();
  static const int kTaskIdFieldNumber = 2;
  inline ::google::protobuf::int32 task_id() const;
  inline void set_task_id(::google::protobuf::int32 value);

  // required int32 claimant_id = 3;
  inline bool has_claimant_id() const;
  inline void clear_claimant_id();
  static const int kClaimantIdFieldNumber = 3;
  inline ::google::protobuf::int32 claimant_id() const;
  inline void set_claimant_id(::google::protobuf::int32 value);

  // required int32 user_id = 4;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 4;
  inline ::google::protobuf::int32 user_id() const;
  inline void set_user_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Emails.OrgTaskRevokedEmail)
 private:
  inline void set_has_email_type();
  inline void clear_has_email_type();
  inline void set_has_task_id();
  inline void clear_has_task_id();
  inline void set_has_claimant_id();
  inline void clear_has_claimant_id();
  inline void set_has_user_id();
  inline void clear_has_user_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int email_type_;
  ::google::protobuf::int32 task_id_;
  ::google::protobuf::int32 claimant_id_;
  ::google::protobuf::int32 user_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_OrgTaskRevokedEmail_2eproto();
  friend void protobuf_AssignDesc_OrgTaskRevokedEmail_2eproto();
  friend void protobuf_ShutdownFile_OrgTaskRevokedEmail_2eproto();

  void InitAsDefaultInstance();
  static OrgTaskRevokedEmail* default_instance_;
};
// ===================================================================


// ===================================================================

// OrgTaskRevokedEmail

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = OrgTaskRevokedEmail];
inline bool OrgTaskRevokedEmail::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OrgTaskRevokedEmail::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OrgTaskRevokedEmail::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OrgTaskRevokedEmail::clear_email_type() {
  email_type_ = 25;
  clear_has_email_type();
}
inline ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type OrgTaskRevokedEmail::email_type() const {
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
inline void OrgTaskRevokedEmail::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
}

// required int32 task_id = 2;
inline bool OrgTaskRevokedEmail::has_task_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OrgTaskRevokedEmail::set_has_task_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void OrgTaskRevokedEmail::clear_has_task_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void OrgTaskRevokedEmail::clear_task_id() {
  task_id_ = 0;
  clear_has_task_id();
}
inline ::google::protobuf::int32 OrgTaskRevokedEmail::task_id() const {
  return task_id_;
}
inline void OrgTaskRevokedEmail::set_task_id(::google::protobuf::int32 value) {
  set_has_task_id();
  task_id_ = value;
}

// required int32 claimant_id = 3;
inline bool OrgTaskRevokedEmail::has_claimant_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OrgTaskRevokedEmail::set_has_claimant_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void OrgTaskRevokedEmail::clear_has_claimant_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void OrgTaskRevokedEmail::clear_claimant_id() {
  claimant_id_ = 0;
  clear_has_claimant_id();
}
inline ::google::protobuf::int32 OrgTaskRevokedEmail::claimant_id() const {
  return claimant_id_;
}
inline void OrgTaskRevokedEmail::set_claimant_id(::google::protobuf::int32 value) {
  set_has_claimant_id();
  claimant_id_ = value;
}

// required int32 user_id = 4;
inline bool OrgTaskRevokedEmail::has_user_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void OrgTaskRevokedEmail::set_has_user_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void OrgTaskRevokedEmail::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void OrgTaskRevokedEmail::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
inline ::google::protobuf::int32 OrgTaskRevokedEmail::user_id() const {
  return user_id_;
}
inline void OrgTaskRevokedEmail::set_user_id(::google::protobuf::int32 value) {
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

#endif  // PROTOBUF_OrgTaskRevokedEmail_2eproto__INCLUDED
